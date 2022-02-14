
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hx711_data {int gain_set; int gpiod_dout; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct hx711_data*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct hx711_data *VAR_1)
{
 int VAR_2, VAR_3;
 int VAR_4 = 0;
 int VAR_5 = FUNC_0(VAR_1->gpiod_dout);


 if (VAR_5)
  return -VAR_0;

 for (VAR_2 = 0; VAR_2 < 24; VAR_2++) {
  VAR_4 <<= 1;
  VAR_3 = FUNC_1(VAR_1);
  if (VAR_3)
   VAR_4++;
 }

 VAR_4 ^= 0x800000;

 for (VAR_2 = 0; VAR_2 < FUNC_2(VAR_1->gain_set); VAR_2++)
  FUNC_1(VAR_1);

 return VAR_4;
}
