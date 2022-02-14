
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct log_state {int hide; int walker; int sorting; int repo; } ;
typedef int git_object ;


 int FUNC_0 (int ,char*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static void FUNC_8(struct log_state *VAR_0, git_object *VAR_1, int VAR_2)
{
 VAR_2 = VAR_0->hide ^ VAR_2;


 if (!VAR_0->walker) {
  FUNC_0(FUNC_4(&VAR_0->walker, VAR_0->repo),
   "Could not create revision walker", ((void*)0));
  FUNC_7(VAR_0->walker, VAR_0->sorting);
 }

 if (!VAR_1)
  FUNC_0(FUNC_6(VAR_0->walker),
   "Could not find repository HEAD", ((void*)0));
 else if (VAR_2)
  FUNC_0(FUNC_3(VAR_0->walker, FUNC_2(VAR_1)),
   "Reference does not refer to a commit", ((void*)0));
 else
  FUNC_0(FUNC_5(VAR_0->walker, FUNC_2(VAR_1)),
   "Reference does not refer to a commit", ((void*)0));

 FUNC_1(VAR_1);
}
