
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pl08x_driver_data {TYPE_1__* vd; } ;
struct TYPE_2__ {scalar_t__ ftdmac020; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;




__attribute__((used)) static inline unsigned int
FUNC_1(struct pl08x_driver_data *VAR_8,
   u32 VAR_9,
   bool VAR_10)
{
 u32 VAR_11;

 if (VAR_8->vd->ftdmac020) {
  if (VAR_10)
   VAR_11 = (VAR_9 & VAR_2) >>
    VAR_3;
  else
   VAR_11 = (VAR_9 & VAR_0) >>
    VAR_1;
 } else {
  if (VAR_10)
   VAR_11 = (VAR_9 & VAR_6) >>
    VAR_7;
  else
   VAR_11 = (VAR_9 & VAR_4) >>
    VAR_5;
 }

 switch (VAR_11) {
 case 128:
  return 1;
 case 130:
  return 2;
 case 129:
  return 4;
 default:
  break;
 }
 FUNC_0();
 return 0;
}
