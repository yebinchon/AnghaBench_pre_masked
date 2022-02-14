
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mrb_io {scalar_t__ fd2; scalar_t__ fd; } ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef scalar_t__ mrb_bool ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,int ,...) ;
 struct mrb_io* FUNC_1 (int *,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,char*,scalar_t__*) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int ,char*) ;
 int FUNC_6 (int *,char*) ;

mrb_value
FUNC_7(mrb_state *VAR_4, mrb_value VAR_5)
{
  FUNC_5(VAR_4, VAR_0, "IO#close_on_exec= is not supported on the platform");
  return FUNC_4();

}
