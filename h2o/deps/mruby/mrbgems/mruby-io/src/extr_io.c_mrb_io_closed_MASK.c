
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mrb_io {scalar_t__ fd; } ;
typedef int mrb_value ;
typedef int mrb_state ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int *,int ,int *) ;
 int VAR_0 ;
 int FUNC_2 () ;

mrb_value
FUNC_3(mrb_state *VAR_1, mrb_value VAR_2)
{
  struct mrb_io *VAR_3;
  VAR_3 = (struct mrb_io *)FUNC_1(VAR_1, VAR_2, &VAR_0);
  if (VAR_3 == ((void*)0) || VAR_3->fd >= 0) {
    return FUNC_0();
  }

  return FUNC_2();
}
