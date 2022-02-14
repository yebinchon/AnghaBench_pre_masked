
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hx711_data {int gpiod_dout; int data_ready_delay_ns; int gpiod_pd_sck; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct hx711_data *VAR_0)
{
 unsigned long VAR_1;






 FUNC_3(VAR_1);
 FUNC_1(VAR_0->gpiod_pd_sck, 1);






 FUNC_4(VAR_0->data_ready_delay_ns);







 FUNC_1(VAR_0->gpiod_pd_sck, 0);
 FUNC_2(VAR_1);





 FUNC_4(VAR_0->data_ready_delay_ns);


 return FUNC_0(VAR_0->gpiod_dout);
}
