
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct si5351_parameters {int p1; int p2; int p3; int valid; } ;
struct si5351_driver_data {int dummy; } ;




 int VAR_0 ;
 int FUNC_0 (struct si5351_driver_data*,int,int,int*) ;
 int FUNC_1 (struct si5351_driver_data*,int) ;

__attribute__((used)) static void FUNC_2(struct si5351_driver_data *VAR_1,
       u8 VAR_2, struct si5351_parameters *VAR_3)
{
 u8 VAR_4[VAR_0];

 switch (VAR_2) {
 case 129:
 case 128:
  VAR_4[0] = FUNC_1(VAR_1, VAR_2);
  VAR_3->p1 = VAR_4[0];
  VAR_3->p2 = 0;
  VAR_3->p3 = 1;
  break;
 default:
  FUNC_0(VAR_1, VAR_2, VAR_0, VAR_4);
  VAR_3->p1 = ((VAR_4[2] & 0x03) << 16) | (VAR_4[3] << 8) | VAR_4[4];
  VAR_3->p2 = ((VAR_4[5] & 0x0f) << 16) | (VAR_4[6] << 8) | VAR_4[7];
  VAR_3->p3 = ((VAR_4[5] & 0xf0) << 12) | (VAR_4[0] << 8) | VAR_4[1];
 }
 VAR_3->valid = 1;
}
