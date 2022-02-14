
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nitrox_softreq {int status; int backlog; } ;
struct nitrox_cmdq {int backlog_qlock; int backlog_count; int backlog_head; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static inline void FUNC_6(struct nitrox_softreq *VAR_1,
        struct nitrox_cmdq *VAR_2)
{
 FUNC_0(&VAR_1->backlog);

 FUNC_4(&VAR_2->backlog_qlock);
 FUNC_3(&VAR_1->backlog, &VAR_2->backlog_head);
 FUNC_1(&VAR_2->backlog_count);
 FUNC_2(&VAR_1->status, VAR_0);
 FUNC_5(&VAR_2->backlog_qlock);
}
