
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hx711_data {int gain_set; int gain_chan_a; } ;


 int FUNC_0 (struct hx711_data*) ;
 int FUNC_1 (struct hx711_data*) ;

__attribute__((used)) static int FUNC_2(struct hx711_data *VAR_0, int VAR_1)
{
 int VAR_2;

 if (VAR_1 == 0) {
  if (VAR_0->gain_set == 32) {
   VAR_0->gain_set = VAR_0->gain_chan_a;

   VAR_2 = FUNC_0(VAR_0);
   if (VAR_2 < 0)
    return VAR_2;

   VAR_2 = FUNC_1(VAR_0);
   if (VAR_2)
    return VAR_2;
  }
 } else {
  if (VAR_0->gain_set != 32) {
   VAR_0->gain_set = 32;

   VAR_2 = FUNC_0(VAR_0);
   if (VAR_2 < 0)
    return VAR_2;

   VAR_2 = FUNC_1(VAR_0);
   if (VAR_2)
    return VAR_2;
  }
 }

 return 0;
}
