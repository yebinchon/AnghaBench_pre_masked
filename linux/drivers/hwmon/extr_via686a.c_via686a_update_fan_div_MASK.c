
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct via686a_data {int* fan_div; } ;


 int VAR_0 ;
 int FUNC_0 (struct via686a_data*,int ) ;

__attribute__((used)) static void FUNC_1(struct via686a_data *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_1, VAR_0);
 VAR_1->fan_div[0] = (VAR_2 >> 4) & 0x03;
 VAR_1->fan_div[1] = VAR_2 >> 6;
}
