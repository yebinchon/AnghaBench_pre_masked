
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mrb_io {int is_socket; } ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef int mrb_bool ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,int *) ;

__attribute__((used)) static mrb_value
FUNC_3(mrb_state *VAR_0, mrb_value VAR_1)
{
  mrb_bool VAR_2;
  struct mrb_io *VAR_3;
  FUNC_2(VAR_0, "b", &VAR_2);

  VAR_3 = (struct mrb_io*)FUNC_0(VAR_1);
  if (VAR_3) {
    VAR_3->is_socket = VAR_2;
  }

  return FUNC_1(VAR_2);
}
