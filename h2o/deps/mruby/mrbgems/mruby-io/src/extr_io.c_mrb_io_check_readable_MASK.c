
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mrb_io {int readable; } ;
typedef int mrb_value ;
typedef int mrb_state ;


 int VAR_0 ;
 struct mrb_io* FUNC_0 (int *,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int ,char*) ;

mrb_value
FUNC_3(mrb_state *VAR_1, mrb_value VAR_2)
{
  struct mrb_io *VAR_3 = FUNC_0(VAR_1, VAR_2);
  if (! VAR_3->readable) {
    FUNC_2(VAR_1, VAR_0, "not opened for reading");
  }
  return FUNC_1();
}
