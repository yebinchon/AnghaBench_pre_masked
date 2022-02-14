
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct layer2 {int tei; int ui_queue; int i_queue; } ;
struct FsmInst {struct layer2* userdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct layer2*) ;
 int FUNC_1 (struct FsmInst*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct layer2*) ;
 int FUNC_4 (struct layer2*,int) ;

__attribute__((used)) static void
FUNC_5(struct FsmInst *VAR_2, int VAR_3, void *VAR_4)
{
 struct layer2 *VAR_5 = VAR_2->userdata;

 FUNC_2(&VAR_5->i_queue);
 FUNC_2(&VAR_5->ui_queue);
 FUNC_0(VAR_5);
 VAR_5->tei = VAR_0;
 FUNC_4(VAR_5, 17);
 FUNC_3(VAR_5);
 FUNC_1(VAR_2, VAR_1);
}
