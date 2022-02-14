
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mrb_dir {int dir; } ;
struct dirent {int d_name; } ;
typedef int mrb_value ;
typedef int mrb_state ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int ,char*) ;
 int FUNC_3 (int *,int ) ;
 struct dirent* FUNC_4 (int ) ;

mrb_value
FUNC_5(mrb_state *VAR_2, mrb_value VAR_3)
{
  struct mrb_dir *VAR_4;
  struct dirent *VAR_5;

  VAR_4 = (struct mrb_dir *)FUNC_0(VAR_2, VAR_3, &VAR_1);
  if (!VAR_4) return FUNC_1();
  if (!VAR_4->dir) {
    FUNC_2(VAR_2, VAR_0, "closed directory");
  }
  VAR_5 = FUNC_4(VAR_4->dir);
  if (VAR_5 != ((void*)0)) {
    return FUNC_3(VAR_2, VAR_5->d_name);
  } else {
    return FUNC_1();
  }
}
