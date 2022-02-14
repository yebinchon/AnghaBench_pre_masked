
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct si5351_parameters {int p1; int p3; int p2; } ;
struct si5351_driver_data {int dummy; } ;




 int VAR_0 ;
 int FUNC_0 (struct si5351_driver_data*,int,int,int*) ;
 int FUNC_1 (struct si5351_driver_data*,int) ;
 int FUNC_2 (struct si5351_driver_data*,int,int) ;

__attribute__((used)) static void FUNC_3(struct si5351_driver_data *VAR_1,
        u8 VAR_2, struct si5351_parameters *VAR_3)
{
 u8 VAR_4[VAR_0];

 switch (VAR_2) {
 case 129:
 case 128:
  VAR_4[0] = VAR_3->p1 & 0xff;
  FUNC_2(VAR_1, VAR_2, VAR_4[0]);
  break;
 default:
  VAR_4[0] = ((VAR_3->p3 & 0x0ff00) >> 8) & 0xff;
  VAR_4[1] = VAR_3->p3 & 0xff;

  VAR_4[2] = FUNC_1(VAR_1, VAR_2 + 2) & ~0x03;
  VAR_4[2] |= ((VAR_3->p1 & 0x30000) >> 16) & 0x03;
  VAR_4[3] = ((VAR_3->p1 & 0x0ff00) >> 8) & 0xff;
  VAR_4[4] = VAR_3->p1 & 0xff;
  VAR_4[5] = ((VAR_3->p3 & 0xf0000) >> 12) |
   ((VAR_3->p2 & 0xf0000) >> 16);
  VAR_4[6] = ((VAR_3->p2 & 0x0ff00) >> 8) & 0xff;
  VAR_4[7] = VAR_3->p2 & 0xff;
  FUNC_0(VAR_1, VAR_2, VAR_0, VAR_4);
 }
}
