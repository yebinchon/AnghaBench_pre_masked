
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct layer1 {int dch; int (* dcb ) (int ,int ) ;int Flags; int t3_value; int timer3; } ;
struct FsmInst {struct layer1* userdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ,int *,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void
FUNC_3(struct FsmInst *VAR_3, int VAR_4, void *VAR_5)
{
 struct layer1 *VAR_6 = VAR_3->userdata;

 FUNC_0(&VAR_6->timer3, VAR_6->t3_value, VAR_0, ((void*)0), 2);
 FUNC_2(VAR_1, &VAR_6->Flags);

 VAR_6->dcb(VAR_6->dch, VAR_2);
}
