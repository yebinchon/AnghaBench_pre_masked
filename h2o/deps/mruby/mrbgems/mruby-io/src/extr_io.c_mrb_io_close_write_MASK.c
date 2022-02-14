
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mrb_io {scalar_t__ fd2; } ;
typedef int mrb_value ;
typedef int mrb_state ;


 int FUNC_0 (int) ;
 struct mrb_io* FUNC_1 (int *,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,char*) ;

mrb_value
FUNC_4(mrb_state *VAR_0, mrb_value VAR_1)
{
  struct mrb_io *VAR_2;
  VAR_2 = FUNC_1(VAR_0, VAR_1);
  if (FUNC_0((int)VAR_2->fd2) == -1) {
    FUNC_3(VAR_0, "close");
  }
  return FUNC_2();
}
