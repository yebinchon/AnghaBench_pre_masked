
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hx711_data {int gpiod_dout; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct hx711_data *VAR_1)
{
 int VAR_2, VAR_3;






 for (VAR_2 = 0; VAR_2 < 100; VAR_2++) {
  VAR_3 = FUNC_0(VAR_1->gpiod_dout);
  if (!VAR_3)
   break;

  FUNC_1(10);
 }
 if (VAR_3)
  return -VAR_0;

 return 0;
}
