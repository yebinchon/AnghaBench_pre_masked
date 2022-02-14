
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int value; } ;
struct sim_dev_reg {TYPE_1__ sim_reg; } ;
struct TYPE_4__ {int (* read ) (int ,int,int ,int,int,int*) ;} ;


 int FUNC_0 (int,int ) ;
 TYPE_2__ VAR_0 ;
 int FUNC_1 (int ,int,int ,int,int,int*) ;

__attribute__((used)) static void FUNC_2(struct sim_dev_reg *VAR_1)
{
 VAR_0(0, 1, FUNC_0(14, 0), 0x10, 4,
         &VAR_1->sim_reg.value);
 VAR_1->sim_reg.value += 0x400;
}
