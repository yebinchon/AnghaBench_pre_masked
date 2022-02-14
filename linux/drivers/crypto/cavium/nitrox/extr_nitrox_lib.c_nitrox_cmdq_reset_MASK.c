
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nitrox_cmdq {int backlog_count; int pending_count; scalar_t__ write_idx; } ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(struct nitrox_cmdq *VAR_0)
{
 VAR_0->write_idx = 0;
 FUNC_0(&VAR_0->pending_count, 0);
 FUNC_0(&VAR_0->backlog_count, 0);
}
