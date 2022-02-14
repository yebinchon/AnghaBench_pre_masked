
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct ib_wc {int slid; } ;
struct ib_port_attr {int lid; } ;
struct ib_mad_hdr {int dummy; } ;
struct TYPE_2__ {scalar_t__ method; scalar_t__ mgmt_class; int attr_id; int status; } ;
struct ib_mad {TYPE_1__ mad_hdr; } ;
struct ib_grh {int dummy; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,struct ib_mad const*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct ib_device*,int ,struct ib_port_attr*) ;
 int FUNC_6 (int ,int,int,int ,struct ib_wc const*,struct ib_grh const*,struct ib_mad const*,struct ib_mad*) ;
 int FUNC_7 (int ,char*,int) ;
 int FUNC_8 (struct ib_device*,struct ib_mad*) ;
 int FUNC_9 (struct ib_device*,int ,struct ib_mad const*,scalar_t__) ;
 int FUNC_10 (struct ib_device*) ;

int FUNC_11(struct ib_device *VAR_20,
        int VAR_21,
        u8 VAR_22,
        const struct ib_wc *VAR_23,
        const struct ib_grh *VAR_24,
        const struct ib_mad_hdr *VAR_25, size_t VAR_26,
        struct ib_mad_hdr *VAR_27, size_t *VAR_28,
        u16 *VAR_29)
{
 int VAR_30;
 u16 VAR_31 = VAR_23 ? FUNC_4(VAR_23->slid) : FUNC_1(VAR_1);
 u16 VAR_32 = 0;
 struct ib_port_attr VAR_33;
 const struct ib_mad *VAR_34 = (const struct ib_mad *)VAR_25;
 struct ib_mad *VAR_35 = (struct ib_mad *)VAR_27;

 if (FUNC_0(VAR_26 != sizeof(*VAR_34) ||
    *VAR_28 != sizeof(*VAR_35)))
  return VAR_5;


 if (VAR_34->mad_hdr.method == VAR_13 &&
     VAR_31 == 0) {
  FUNC_3(FUNC_10(VAR_20), VAR_22, VAR_34);
  return VAR_7 | VAR_4;
 }







 if (VAR_34->mad_hdr.mgmt_class == VAR_10 ||
     VAR_34->mad_hdr.mgmt_class == VAR_9) {
  if (VAR_34->mad_hdr.method != VAR_11 &&
      VAR_34->mad_hdr.method != VAR_12 &&
      VAR_34->mad_hdr.method != VAR_14)
   return VAR_7;





  if (VAR_34->mad_hdr.attr_id == VAR_16 ||
      ((VAR_34->mad_hdr.attr_id & VAR_17) ==
       VAR_17))
   return VAR_7;
 } else if (VAR_34->mad_hdr.mgmt_class == VAR_8 ||
     VAR_34->mad_hdr.mgmt_class == VAR_18 ||
     VAR_34->mad_hdr.mgmt_class == VAR_19) {
  if (VAR_34->mad_hdr.method != VAR_11 &&
      VAR_34->mad_hdr.method != VAR_12)
   return VAR_7;
 } else
  return VAR_7;
 if ((VAR_34->mad_hdr.mgmt_class == VAR_10 ||
      VAR_34->mad_hdr.mgmt_class == VAR_9) &&
     VAR_34->mad_hdr.method == VAR_12 &&
     VAR_34->mad_hdr.attr_id == VAR_15 &&
     !FUNC_5(VAR_20, VAR_22, &VAR_33))
  VAR_32 = FUNC_4(VAR_33.lid);

 VAR_30 = FUNC_6(FUNC_10(VAR_20),
       VAR_21 & VAR_3,
       VAR_21 & VAR_2,
       VAR_22, VAR_23, VAR_24, VAR_34, VAR_35);
 if (VAR_30 == -VAR_0)
  return VAR_7;
 else if (VAR_30) {
  FUNC_7(FUNC_10(VAR_20), "MAD_IFC returned %d\n", VAR_30);
  return VAR_5;
 }

 if (!VAR_35->mad_hdr.status) {
  FUNC_9(VAR_20, VAR_22, VAR_34, VAR_32);
  FUNC_8(VAR_20, VAR_35);
 }


 if (VAR_34->mad_hdr.mgmt_class == VAR_9)
  VAR_35->mad_hdr.status |= FUNC_2(1 << 15);

 if (VAR_34->mad_hdr.method == VAR_14)

  return VAR_7 | VAR_4;

 return VAR_7 | VAR_6;
}
