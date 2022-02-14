
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int mrb_value ;
struct TYPE_8__ {scalar_t__ jmp; scalar_t__ exc; } ;
typedef TYPE_1__ mrb_state ;
typedef int mrb_irep ;
typedef int jmp_buf ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (TYPE_1__*,char*,int *) ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_1__*,int ,char*,int ) ;
 int * FUNC_7 (TYPE_1__*,int *) ;
 char* FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 () ;

__attribute__((used)) static mrb_value
FUNC_10(mrb_state *VAR_1, mrb_value VAR_2)
{
  char *VAR_3 = ((void*)0);
  FILE *VAR_4 = ((void*)0);
  mrb_irep *VAR_5;
  mrb_value VAR_6;

  FUNC_4(VAR_1, "S", &VAR_6);
  VAR_3 = FUNC_8(VAR_1, VAR_6);

  VAR_4 = FUNC_2(VAR_3, "rb");
  if (VAR_4 == ((void*)0)) {
    FUNC_6(VAR_1, VAR_0, "can't open file -- %S", VAR_6);
  }

  VAR_5 = FUNC_7(VAR_1, VAR_4);
  FUNC_1(VAR_4);

  if (VAR_5) {
    FUNC_0(VAR_1, VAR_5);
  } else if (VAR_1->exc) {

    FUNC_3(*(jmp_buf*)VAR_1->jmp, 1);
  } else {
    FUNC_6(VAR_1, VAR_0, "can't load file -- %S", VAR_6);
    return FUNC_5();
  }

  return FUNC_9();
}
