
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct goodix_ts_data {int gpiod_int; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct goodix_ts_data *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0->gpiod_int, 0);
 if (VAR_1)
  return VAR_1;

 FUNC_2(50);

 VAR_1 = FUNC_0(VAR_0->gpiod_int);
 if (VAR_1)
  return VAR_1;

 return 0;
}
