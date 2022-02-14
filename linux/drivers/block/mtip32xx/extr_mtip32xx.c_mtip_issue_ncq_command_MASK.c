
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtip_port {int * cmd_issue_lock; int * cmd_issue; int * s_active; } ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static inline void FUNC_5(struct mtip_port *VAR_0, int VAR_1)
{
 int VAR_2 = VAR_1 >> 5;


 FUNC_2(&VAR_0->cmd_issue_lock[VAR_2]);
 FUNC_4((1 << FUNC_0(VAR_1)),
   VAR_0->s_active[FUNC_1(VAR_1)]);
 FUNC_4((1 << FUNC_0(VAR_1)),
   VAR_0->cmd_issue[FUNC_1(VAR_1)]);
 FUNC_3(&VAR_0->cmd_issue_lock[VAR_2]);
}
