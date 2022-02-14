
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct qib_pportdata {int congestion_entries_shadow; } ;
struct qib_ibport {int dummy; } ;
struct ib_wc {int dummy; } ;
struct ib_mad_hdr {int dummy; } ;
struct TYPE_2__ {int mgmt_class; } ;
struct ib_mad {TYPE_1__ mad_hdr; } ;
struct ib_grh {int dummy; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;




 scalar_t__ FUNC_0 (int) ;
 struct qib_pportdata* FUNC_1 (struct qib_ibport*) ;
 int FUNC_2 (struct ib_device*,int,int ,struct ib_mad const*,struct ib_mad*) ;
 int FUNC_3 (struct ib_device*,int ,struct ib_mad const*,struct ib_mad*) ;
 int FUNC_4 (struct ib_device*,int,int ,struct ib_mad const*,struct ib_mad*) ;
 int VAR_2 ;
 struct qib_ibport* FUNC_5 (struct ib_device*,int ) ;

int FUNC_6(struct ib_device *VAR_3, int VAR_4, u8 VAR_5,
      const struct ib_wc *VAR_6, const struct ib_grh *VAR_7,
      const struct ib_mad_hdr *VAR_8, size_t VAR_9,
      struct ib_mad_hdr *VAR_10, size_t *VAR_11,
      u16 *VAR_12)
{
 int VAR_13;
 struct qib_ibport *VAR_14 = FUNC_5(VAR_3, VAR_5);
 struct qib_pportdata *VAR_15 = FUNC_1(VAR_14);
 const struct ib_mad *VAR_16 = (const struct ib_mad *)VAR_8;
 struct ib_mad *VAR_17 = (struct ib_mad *)VAR_10;

 if (FUNC_0(VAR_9 != sizeof(*VAR_16) ||
    *VAR_11 != sizeof(*VAR_17)))
  return VAR_0;

 switch (VAR_16->mad_hdr.mgmt_class) {
 case 129:
 case 128:
  VAR_13 = FUNC_4(VAR_3, VAR_4, VAR_5, VAR_16, VAR_17);
  goto bail;

 case 130:
  VAR_13 = FUNC_3(VAR_3, VAR_5, VAR_16, VAR_17);
  goto bail;

 case 131:
  if (!VAR_15->congestion_entries_shadow ||
    !VAR_2) {
   VAR_13 = VAR_1;
   goto bail;
  }
  VAR_13 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_16, VAR_17);
  goto bail;

 default:
  VAR_13 = VAR_1;
 }

bail:
 return VAR_13;
}
