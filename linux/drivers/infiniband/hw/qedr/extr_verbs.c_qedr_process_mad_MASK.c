
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct qedr_dev {int dummy; } ;
struct ib_wc {int dummy; } ;
struct ib_mad_hdr {int status; int mgmt_class; int method; int class_version; int class_specific; int attr_mod; int base_version; int attr_id; } ;
struct ib_grh {int dummy; } ;
struct ib_device {int dummy; } ;


 int FUNC_0 (struct qedr_dev*,int ,char*,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct qedr_dev* FUNC_1 (struct ib_device*) ;

int FUNC_2(struct ib_device *VAR_2, int VAR_3,
       u8 VAR_4,
       const struct ib_wc *VAR_5,
       const struct ib_grh *VAR_6,
       const struct ib_mad_hdr *VAR_7,
       size_t VAR_8, struct ib_mad_hdr *VAR_9,
       size_t *VAR_10, u16 *VAR_11)
{
 struct qedr_dev *VAR_12 = FUNC_1(VAR_2);

 FUNC_0(VAR_12, VAR_1,
   "QEDR_PROCESS_MAD in_mad %x %x %x %x %x %x %x %x\n",
   VAR_7->attr_id, VAR_7->base_version, VAR_7->attr_mod,
   VAR_7->class_specific, VAR_7->class_version,
   VAR_7->method, VAR_7->mgmt_class, VAR_7->status);
 return VAR_0;
}
