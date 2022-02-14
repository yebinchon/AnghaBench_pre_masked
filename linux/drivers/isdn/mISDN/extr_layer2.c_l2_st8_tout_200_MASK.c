
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct layer2 {scalar_t__ rc; scalar_t__ N200; int flag; int T200; int t200; } ;
struct FsmInst {struct layer2* userdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct FsmInst*) ;
 int FUNC_1 (struct layer2*,int ,void*) ;
 int FUNC_2 (int *,int ,int ,int *,int) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (struct layer2*) ;

__attribute__((used)) static void
FUNC_6(struct FsmInst *VAR_6, int VAR_7, void *VAR_8)
{
 struct layer2 *VAR_9 = VAR_6->userdata;

 if (FUNC_4(VAR_3, &VAR_9->flag) &&
     FUNC_4(VAR_1, &VAR_9->flag)) {
  FUNC_2(&VAR_9->t200, VAR_9->T200, VAR_0, ((void*)0), 9);
  return;
 }
 FUNC_3(VAR_4, &VAR_9->flag);
 if (VAR_9->rc == VAR_9->N200) {
  FUNC_1(VAR_9, VAR_5, (void *) 'I');
  FUNC_0(VAR_6);
  FUNC_3(VAR_2, &VAR_9->flag);
 } else {
  FUNC_5(VAR_9);
  VAR_9->rc++;
 }
}
