
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct ib_wc {int slid; } ;
struct TYPE_2__ {scalar_t__ method; scalar_t__ mgmt_class; scalar_t__ attr_id; int status; } ;
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
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int,int ,struct ib_wc const*,struct ib_grh const*,struct ib_mad const*,struct ib_mad*) ;
 int FUNC_4 (struct ib_device*) ;

__attribute__((used)) static int FUNC_5(struct ib_device *VAR_18, int VAR_19, u8 VAR_20,
         const struct ib_wc *VAR_21, const struct ib_grh *VAR_22,
         const struct ib_mad *VAR_23, struct ib_mad *VAR_24)
{
 u16 VAR_25;
 int VAR_26;

 VAR_25 = VAR_21 ? FUNC_2(VAR_21->slid) : FUNC_0(VAR_0);

 if (VAR_23->mad_hdr.method == VAR_13 && VAR_25 == 0)
  return VAR_6 | VAR_3;

 if (VAR_23->mad_hdr.mgmt_class == VAR_10 ||
     VAR_23->mad_hdr.mgmt_class == VAR_9) {
  if (VAR_23->mad_hdr.method != VAR_11 &&
      VAR_23->mad_hdr.method != VAR_12 &&
      VAR_23->mad_hdr.method != VAR_14)
   return VAR_6;



  if (VAR_23->mad_hdr.attr_id == VAR_15)
   return VAR_6;
 } else if (VAR_23->mad_hdr.mgmt_class == VAR_8 ||
     VAR_23->mad_hdr.mgmt_class == VAR_16 ||
     VAR_23->mad_hdr.mgmt_class == VAR_17 ||
     VAR_23->mad_hdr.mgmt_class == VAR_7) {
  if (VAR_23->mad_hdr.method != VAR_11 &&
      VAR_23->mad_hdr.method != VAR_12)
   return VAR_6;
 } else {
  return VAR_6;
 }

 VAR_26 = FUNC_3(FUNC_4(VAR_18),
      VAR_19 & VAR_2,
      VAR_19 & VAR_1,
      VAR_20, VAR_21, VAR_22, VAR_23, VAR_24);
 if (VAR_26)
  return VAR_4;


 if (VAR_23->mad_hdr.mgmt_class == VAR_9)
  VAR_24->mad_hdr.status |= FUNC_1(1 << 15);

 if (VAR_23->mad_hdr.method == VAR_14)

  return VAR_6 | VAR_3;

 return VAR_6 | VAR_5;
}
