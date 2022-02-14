
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmdq_base {int cmd_size; } ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct cmdq_base *VAR_1)
{
 VAR_1->cmd_size = (VAR_1->cmd_size + VAR_0 - 1) /
    VAR_0;
}
