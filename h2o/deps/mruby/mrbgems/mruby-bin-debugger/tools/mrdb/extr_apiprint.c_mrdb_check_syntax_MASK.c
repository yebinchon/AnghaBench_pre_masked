
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int lineno; void* capture_errors; void* no_exec; } ;
typedef TYPE_1__ mrbc_context ;
typedef int mrb_state ;
struct TYPE_9__ {int prvline; scalar_t__ prvfile; } ;
typedef TYPE_2__ mrb_debug_context ;


 void* VAR_0 ;
 int FUNC_0 (int *,char const*,size_t,TYPE_1__*) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_1__*,char const*) ;

__attribute__((used)) static void
FUNC_4(mrb_state *VAR_1, mrb_debug_context *VAR_2, const char *VAR_3, size_t VAR_4)
{
  mrbc_context *VAR_5;

  VAR_5 = FUNC_2(VAR_1);
  VAR_5->no_exec = VAR_0;
  VAR_5->capture_errors = VAR_0;
  FUNC_3(VAR_1, VAR_5, (const char*)VAR_2->prvfile);
  VAR_5->lineno = VAR_2->prvline;


  FUNC_0(VAR_1, VAR_3, VAR_4, VAR_5);

  FUNC_1(VAR_1, VAR_5);
}
