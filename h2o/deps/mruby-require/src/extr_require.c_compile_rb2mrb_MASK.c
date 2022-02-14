
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int no_exec; } ;
typedef TYPE_2__ mrbc_context ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef int mrb_irep ;
struct TYPE_8__ {int * irep; } ;
struct TYPE_10__ {TYPE_1__ body; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int,int *) ;
 int FUNC_2 (int *,char const*,int,TYPE_2__*) ;
 int * FUNC_3 () ;
 TYPE_6__* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *,TYPE_2__*) ;
 TYPE_2__* FUNC_7 (int *) ;
 int FUNC_8 (int *,TYPE_2__*,char const*) ;

__attribute__((used)) static int
FUNC_9(mrb_state *VAR_1, const char *VAR_2, int VAR_3, const char *VAR_4, FILE* VAR_5)
{
  mrb_state *VAR_6 = FUNC_3();
  mrb_value VAR_7;
  mrbc_context *VAR_8;
  int VAR_9 = -1;
  int VAR_10 = 1;
  mrb_irep *VAR_11;

  VAR_8 = FUNC_7(VAR_6);
  VAR_8->no_exec = 1;
  if (VAR_4 != ((void*)0)) {
    FUNC_8(VAR_6, VAR_8, VAR_4);
  }

  VAR_7 = FUNC_2(VAR_6, VAR_2, VAR_3, VAR_8);
  if (FUNC_5(VAR_7)) {
    FUNC_6(VAR_6, VAR_8);
    FUNC_0(VAR_6);
    return VAR_0;
  }

  VAR_11 = FUNC_4(VAR_7)->body.irep;
  VAR_9 = FUNC_1(VAR_6, VAR_11, VAR_10, VAR_5);

  FUNC_6(VAR_6, VAR_8);
  FUNC_0(VAR_6);

  return VAR_9;
}
