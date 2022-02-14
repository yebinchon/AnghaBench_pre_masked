
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int value; } ;
struct sim_dev_reg {TYPE_1__ sim_reg; int reg; int dev_func; } ;
struct TYPE_4__ {int (* read ) (int ,int,int ,int ,int,int *) ;} ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int ,int,int ,int ,int,int *) ;

__attribute__((used)) static void FUNC_1(struct sim_dev_reg *VAR_1)
{
 VAR_0(0, 1, VAR_1->dev_func, VAR_1->reg, 4,
         &VAR_1->sim_reg.value);
}
