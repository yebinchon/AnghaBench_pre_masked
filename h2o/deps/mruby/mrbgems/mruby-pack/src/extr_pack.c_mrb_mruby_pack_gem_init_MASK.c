
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int string_class; int array_class; } ;
typedef TYPE_1__ mrb_state ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,int ,char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_4(mrb_state *VAR_3)
{
  FUNC_1();
  FUNC_2();

  FUNC_3(VAR_3, VAR_3->array_class, "pack", VAR_0, FUNC_0(1));
  FUNC_3(VAR_3, VAR_3->string_class, "unpack", VAR_1, FUNC_0(1));
  FUNC_3(VAR_3, VAR_3->string_class, "unpack1", VAR_2, FUNC_0(1));
}
