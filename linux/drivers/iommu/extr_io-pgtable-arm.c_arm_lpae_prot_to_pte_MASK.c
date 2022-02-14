
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ fmt; } ;
struct arm_lpae_io_pgtable {TYPE_1__ iop; } ;
typedef int arm_lpae_iopte ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;

__attribute__((used)) static arm_lpae_iopte FUNC_0(struct arm_lpae_io_pgtable *VAR_25,
        int VAR_26)
{
 arm_lpae_iopte VAR_27;

 if (VAR_25->iop.fmt == VAR_2 ||
     VAR_25->iop.fmt == VAR_0) {
  VAR_27 = VAR_17;
  if (!(VAR_26 & VAR_24) && (VAR_26 & VAR_23))
   VAR_27 |= VAR_7;
  if (!(VAR_26 & VAR_21))
   VAR_27 |= VAR_8;
 } else {
  VAR_27 = VAR_10;
  if (VAR_26 & VAR_23)
   VAR_27 |= VAR_11;
  if (VAR_26 & VAR_24)
   VAR_27 |= VAR_12;
 }





 if (VAR_25->iop.fmt == VAR_3 ||
     VAR_25->iop.fmt == VAR_1) {
  if (VAR_26 & VAR_19)
   VAR_27 |= VAR_13;
  else if (VAR_26 & VAR_18)
   VAR_27 |= VAR_15;
  else
   VAR_27 |= VAR_14;
 } else {
  if (VAR_26 & VAR_19)
   VAR_27 |= (VAR_5
    << VAR_9);
  else if (VAR_26 & VAR_18)
   VAR_27 |= (VAR_4
    << VAR_9);
  else if (VAR_26 & VAR_22)
   VAR_27 |= (VAR_6
    << VAR_9);
 }

 if (VAR_26 & VAR_20)
  VAR_27 |= VAR_16;

 return VAR_27;
}
