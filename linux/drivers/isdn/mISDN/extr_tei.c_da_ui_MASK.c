
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct manager {int datimer; int options; } ;
struct FsmInst {struct manager* userdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ,int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void
FUNC_3(struct FsmInst *VAR_3, int VAR_4, void *VAR_5)
{
 struct manager *VAR_6 = VAR_3->userdata;


 if (!FUNC_2(VAR_2, &VAR_6->options)) {
  FUNC_1(&VAR_6->datimer, 2);
  FUNC_0(&VAR_6->datimer, VAR_0, VAR_1,
      ((void*)0), 2);
 }
}
