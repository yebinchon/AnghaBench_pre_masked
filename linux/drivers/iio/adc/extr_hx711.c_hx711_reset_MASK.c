
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hx711_data {int gpiod_pd_sck; int gpiod_dout; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct hx711_data*) ;
 int FUNC_3 (struct hx711_data*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct hx711_data *VAR_0)
{
 int VAR_1;
 int VAR_2 = FUNC_0(VAR_0->gpiod_dout);

 if (VAR_2) {
  FUNC_1(VAR_0->gpiod_pd_sck, 1);
  FUNC_4(10);
  FUNC_1(VAR_0->gpiod_pd_sck, 0);

  VAR_1 = FUNC_3(VAR_0);
  if (VAR_1)
   return VAR_1;




  VAR_1 = FUNC_2(VAR_0);
  if (VAR_1 < 0)
   return VAR_1;





  VAR_2 = FUNC_3(VAR_0);
 }

 return VAR_2;
}
