
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct hfi1_pportdata {scalar_t__ link_speed_active; scalar_t__ link_width_active; } ;


 scalar_t__ VAR_0 ;




__attribute__((used)) static inline u32 FUNC_0(struct hfi1_pportdata *VAR_1)
{
 u16 VAR_2 = VAR_1->link_speed_active;
 u16 VAR_3 = VAR_1->link_width_active;
 u32 VAR_4;

 if (VAR_2 == VAR_0)
  VAR_4 = 25000;
 else
  VAR_4 = 12500;

 switch (VAR_3) {
 case 128:
  VAR_4 *= 4;
  break;
 case 129:
  VAR_4 *= 3;
  break;
 case 130:
  VAR_4 *= 2;
  break;
 default:

  break;
 }

 return VAR_4;
}
