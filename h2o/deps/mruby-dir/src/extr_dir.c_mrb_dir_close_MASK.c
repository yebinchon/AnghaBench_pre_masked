
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mrb_dir {int * dir; } ;
typedef int mrb_value ;
typedef int mrb_state ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int ,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int ,char*) ;
 int FUNC_4 (int *,char*) ;

mrb_value
FUNC_5(mrb_state *VAR_2, mrb_value VAR_3)
{
  struct mrb_dir *VAR_4;
  VAR_4 = (struct mrb_dir *)FUNC_1(VAR_2, VAR_3, &VAR_1);
  if (!VAR_4) return FUNC_2();
  if (!VAR_4->dir) {
    FUNC_3(VAR_2, VAR_0, "closed directory");
  }
  if (FUNC_0(VAR_4->dir) == -1) {
    FUNC_4(VAR_2, "closedir");
  }
  VAR_4->dir = ((void*)0);
  return FUNC_2();
}
