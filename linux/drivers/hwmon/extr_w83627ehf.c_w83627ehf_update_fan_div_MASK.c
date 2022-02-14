
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w83627ehf_data {int* fan_div; int has_fan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct w83627ehf_data*,int ) ;

__attribute__((used)) static void FUNC_1(struct w83627ehf_data *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_0(VAR_5, VAR_1);
 VAR_5->fan_div[0] = (VAR_6 >> 4) & 0x03;
 VAR_5->fan_div[1] = (VAR_6 >> 6) & 0x03;
 VAR_6 = FUNC_0(VAR_5, VAR_2);
 VAR_5->fan_div[2] = (VAR_6 >> 6) & 0x03;
 VAR_6 = FUNC_0(VAR_5, VAR_4);
 VAR_5->fan_div[0] |= (VAR_6 >> 3) & 0x04;
 VAR_5->fan_div[1] |= (VAR_6 >> 4) & 0x04;
 VAR_5->fan_div[2] |= (VAR_6 >> 5) & 0x04;
 if (VAR_5->has_fan & ((1 << 3) | (1 << 4))) {
  VAR_6 = FUNC_0(VAR_5, VAR_0);
  VAR_5->fan_div[3] = VAR_6 & 0x03;
  VAR_5->fan_div[4] = ((VAR_6 >> 2) & 0x03)
     | ((VAR_6 >> 5) & 0x04);
 }
 if (VAR_5->has_fan & (1 << 3)) {
  VAR_6 = FUNC_0(VAR_5, VAR_3);
  VAR_5->fan_div[3] |= (VAR_6 >> 5) & 0x04;
 }
}
