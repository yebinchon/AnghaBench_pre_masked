
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w83627hf_data {int* fan_div; scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct w83627hf_data*,int ) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_1(struct w83627hf_data *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_4, VAR_2);
 VAR_4->fan_div[0] = (VAR_5 >> 4) & 0x03;
 VAR_4->fan_div[1] = (VAR_5 >> 6) & 0x03;
 if (VAR_4->type != VAR_3) {
  VAR_4->fan_div[2] = (FUNC_0(VAR_4,
           VAR_0) >> 6) & 0x03;
 }
 VAR_5 = FUNC_0(VAR_4, VAR_1);
 VAR_4->fan_div[0] |= (VAR_5 >> 3) & 0x04;
 VAR_4->fan_div[1] |= (VAR_5 >> 4) & 0x04;
 if (VAR_4->type != VAR_3)
  VAR_4->fan_div[2] |= (VAR_5 >> 5) & 0x04;
}
