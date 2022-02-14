
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int ib_sa_comp_mask ;






__attribute__((used)) static int FUNC_0(ib_sa_comp_mask VAR_0,
     ib_sa_comp_mask VAR_1,
     ib_sa_comp_mask VAR_2,
     u8 VAR_3, u8 VAR_4, u8 VAR_5)
{
 int VAR_6;

 if (!(VAR_0 & VAR_1) || !(VAR_0 & VAR_2))
  return 0;

 switch (VAR_3) {
 case 129:
  VAR_6 = (VAR_4 <= VAR_5);
  break;
 case 128:
  VAR_6 = (VAR_4 >= VAR_5);
  break;
 case 130:
  VAR_6 = (VAR_4 != VAR_5);
  break;
 default:
  VAR_6 = 0;
  break;
 }

 return VAR_6;
}
