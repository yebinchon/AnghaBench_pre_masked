
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct layer2 {scalar_t__ rc; int T203; int t203; int flag; } ;
struct FsmInst {struct layer2* userdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ,int *,int) ;
 int FUNC_1 (struct FsmInst*,int ) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int FUNC_3 (struct layer2*) ;

__attribute__((used)) static void
FUNC_4(struct FsmInst *VAR_4, int VAR_5, void *VAR_6)
{
 struct layer2 *VAR_7 = VAR_4->userdata;

 if (FUNC_2(VAR_2, &VAR_7->flag) &&
     FUNC_2(VAR_1, &VAR_7->flag)) {
  FUNC_0(&VAR_7->t203, VAR_7->T203, VAR_0, ((void*)0), 9);
  return;
 }
 FUNC_1(VAR_4, VAR_3);
 FUNC_3(VAR_7);
 VAR_7->rc = 0;
}
