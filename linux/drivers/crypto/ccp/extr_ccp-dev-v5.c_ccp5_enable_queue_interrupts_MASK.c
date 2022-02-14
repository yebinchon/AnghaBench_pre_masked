
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ccp_device {unsigned int cmd_q_count; TYPE_1__* cmd_q; } ;
struct TYPE_2__ {int reg_int_enable; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct ccp_device *VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->cmd_q_count; VAR_2++)
  FUNC_0(VAR_0, VAR_1->cmd_q[VAR_2].reg_int_enable);
}
