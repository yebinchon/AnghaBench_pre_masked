
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mrb_dir {int dir; } ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef scalar_t__ mrb_int ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,scalar_t__*) ;
 scalar_t__ FUNC_1 (int *,int ,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int ,char*) ;
 int FUNC_4 (int ,long) ;

mrb_value
FUNC_5(mrb_state *VAR_3, mrb_value VAR_4)
{




  struct mrb_dir *VAR_5;
  mrb_int VAR_6;

  VAR_5 = (struct mrb_dir *)FUNC_1(VAR_3, VAR_4, &VAR_2);
  if (!VAR_5) return FUNC_2();
  if (!VAR_5->dir) {
    FUNC_3(VAR_3, VAR_0, "closed directory");
  }
  FUNC_0(VAR_3, "i", &VAR_6);
  FUNC_4(VAR_5->dir, (long)VAR_6);
  return VAR_4;

}
