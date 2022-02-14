
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct ocrdma_dev {int dummy; } ;
struct ib_wc {int dummy; } ;
struct ib_mad_hdr {int dummy; } ;
struct TYPE_2__ {int mgmt_class; } ;
struct ib_mad {TYPE_1__ mad_hdr; } ;
struct ib_grh {int dummy; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 scalar_t__ FUNC_0 (int) ;
 struct ocrdma_dev* FUNC_1 (struct ib_device*) ;
 int FUNC_2 (struct ocrdma_dev*,struct ib_mad*) ;

int FUNC_3(struct ib_device *VAR_3,
         int VAR_4,
         u8 VAR_5,
         const struct ib_wc *VAR_6,
         const struct ib_grh *VAR_7,
         const struct ib_mad_hdr *VAR_8, size_t VAR_9,
         struct ib_mad_hdr *VAR_10, size_t *VAR_11,
         u16 *VAR_12)
{
 int VAR_13;
 struct ocrdma_dev *VAR_14;
 const struct ib_mad *VAR_15 = (const struct ib_mad *)VAR_8;
 struct ib_mad *VAR_16 = (struct ib_mad *)VAR_10;

 if (FUNC_0(VAR_9 != sizeof(*VAR_15) ||
    *VAR_11 != sizeof(*VAR_16)))
  return VAR_0;

 switch (VAR_15->mad_hdr.mgmt_class) {
 case 128:
  VAR_14 = FUNC_1(VAR_3);
  if (!FUNC_2(VAR_14, VAR_16))
   VAR_13 = VAR_2 | VAR_1;
  else
   VAR_13 = VAR_2;
  break;
 default:
  VAR_13 = VAR_2;
  break;
 }
 return VAR_13;
}
