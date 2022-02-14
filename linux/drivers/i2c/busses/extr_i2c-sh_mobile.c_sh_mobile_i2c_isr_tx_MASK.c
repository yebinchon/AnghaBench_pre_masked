
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sh_mobile_i2c_data {int pos; TYPE_1__* msg; } ;
struct TYPE_2__ {int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sh_mobile_i2c_data*,int ) ;

__attribute__((used)) static int FUNC_1(struct sh_mobile_i2c_data *VAR_3)
{
 if (VAR_3->pos == VAR_3->msg->len) {
  FUNC_0(VAR_3, VAR_2);
  return 1;
 }

 if (VAR_3->pos == -1)
  FUNC_0(VAR_3, VAR_1);
 else
  FUNC_0(VAR_3, VAR_0);

 VAR_3->pos++;
 return 0;
}
