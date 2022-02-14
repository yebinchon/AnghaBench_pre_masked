
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct layer2 {scalar_t__ rc; int flag; int T200; int t200; } ;
struct FsmInst {struct layer2* userdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,int ,int *,int) ;
 int FUNC_1 (struct FsmInst*,int ) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int FUNC_4 (struct layer2*) ;

__attribute__((used)) static void
FUNC_5(struct FsmInst *VAR_5, int VAR_6, void *VAR_7)
{
 struct layer2 *VAR_8 = VAR_5->userdata;

 if (FUNC_3(VAR_2, &VAR_8->flag) &&
     FUNC_3(VAR_1, &VAR_8->flag)) {
  FUNC_0(&VAR_8->t200, VAR_8->T200, VAR_0, ((void*)0), 9);
  return;
 }
 FUNC_2(VAR_3, &VAR_8->flag);
 VAR_8->rc = 0;
 FUNC_1(VAR_5, VAR_4);
 FUNC_4(VAR_8);
 VAR_8->rc++;
}
