
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mrb_io {int fd; } ;
typedef int mrb_value ;
typedef int mrb_state ;


 struct mrb_io* FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

mrb_value
FUNC_4(mrb_state *VAR_0, mrb_value VAR_1)
{
  struct mrb_io *VAR_2;

  VAR_2 = FUNC_0(VAR_0, VAR_1);
  if (FUNC_1(VAR_2->fd) == 0)
    return FUNC_2();
  return FUNC_3();
}
