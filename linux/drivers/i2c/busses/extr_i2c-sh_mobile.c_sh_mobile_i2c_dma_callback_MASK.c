
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sh_mobile_i2c_data {int stop_after_dma; TYPE_1__* msg; int pos; } ;
struct TYPE_2__ {int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sh_mobile_i2c_data*,int ,int ,int) ;
 int FUNC_1 (struct sh_mobile_i2c_data*) ;

__attribute__((used)) static void FUNC_2(void *VAR_3)
{
 struct sh_mobile_i2c_data *VAR_4 = VAR_3;

 FUNC_1(VAR_4);
 VAR_4->pos = VAR_4->msg->len;
 VAR_4->stop_after_dma = 1;

 FUNC_0(VAR_4, VAR_0, 0, VAR_2 | VAR_1);
}
