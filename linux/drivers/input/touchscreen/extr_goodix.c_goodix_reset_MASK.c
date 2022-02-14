
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct goodix_ts_data {int gpiod_rst; TYPE_1__* client; int gpiod_int; } ;
struct TYPE_2__ {int addr; } ;


 int FUNC_0 (struct goodix_ts_data*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct goodix_ts_data *VAR_0)
{
 int VAR_1;


 VAR_1 = FUNC_2(VAR_0->gpiod_rst, 0);
 if (VAR_1)
  return VAR_1;

 FUNC_3(20);


 VAR_1 = FUNC_2(VAR_0->gpiod_int, VAR_0->client->addr == 0x14);
 if (VAR_1)
  return VAR_1;

 FUNC_4(100, 2000);

 VAR_1 = FUNC_2(VAR_0->gpiod_rst, 1);
 if (VAR_1)
  return VAR_1;

 FUNC_4(6000, 10000);


 VAR_1 = FUNC_1(VAR_0->gpiod_rst);
 if (VAR_1)
  return VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1)
  return VAR_1;

 return 0;
}
