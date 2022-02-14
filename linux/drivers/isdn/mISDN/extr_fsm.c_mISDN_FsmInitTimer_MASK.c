
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct FsmTimer {int tl; struct FsmInst* fi; } ;
struct FsmInst {int (* printdebug ) (struct FsmInst*,char*,long) ;scalar_t__ debug; } ;


 int VAR_0 ;
 int FUNC_0 (struct FsmInst*,char*,long) ;
 int FUNC_1 (int *,int ,int ) ;

void
FUNC_2(struct FsmInst *VAR_1, struct FsmTimer *VAR_2)
{
 VAR_2->fi = VAR_1;




 FUNC_1(&VAR_2->tl, VAR_0, 0);
}
