
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gp2a_data {int input; TYPE_1__* pdata; } ;
struct TYPE_2__ {int vout_gpio; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct gp2a_data *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_1->pdata->vout_gpio);

 FUNC_1(VAR_1->input, VAR_0, !VAR_2);
 FUNC_2(VAR_1->input);

 return 0;
}
