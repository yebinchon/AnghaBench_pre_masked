
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ flags; scalar_t__ devtype; } ;
struct wiimote_data {TYPE_1__ state; } ;
typedef scalar_t__ __u8 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;

__attribute__((used)) static __u8 FUNC_0(struct wiimote_data *VAR_16)
{
 __u8 VAR_17 = VAR_16->state.flags & VAR_1;
 bool VAR_18;

 VAR_18 = (VAR_16->state.flags & VAR_3) ||
       (VAR_16->state.flags & VAR_7);


 if (VAR_16->state.devtype == VAR_0) {
  if (VAR_18)
   return VAR_13;
  else
   return VAR_8;
 }

 if (VAR_17 == VAR_4) {
  if (VAR_16->state.flags & VAR_2) {





   return VAR_12;
  } else {
   return VAR_14;
  }
 } else if (VAR_17 == VAR_5) {
  return VAR_11;
 } else if (VAR_17 == VAR_6) {
  return VAR_15;
 } else {
  if (VAR_16->state.flags & VAR_2) {
   if (VAR_18)
    return VAR_10;
   else
    return VAR_9;
  } else {
   if (VAR_18)
    return VAR_13;
   else
    return VAR_8;
  }
 }
}
