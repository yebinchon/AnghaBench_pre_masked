
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct backtrace_location {int dummy; } ;
struct RData {unsigned int flags; } ;
typedef TYPE_2__* ptrdiff_t ;
typedef int mrb_value ;
struct TYPE_11__ {TYPE_1__* c; } ;
typedef TYPE_3__ mrb_state ;
struct TYPE_10__ {int pc; } ;
struct TYPE_9__ {int cibase; TYPE_2__* ci; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,TYPE_2__*,int ,int ,...) ;
 int FUNC_1 (void*,int ,int) ;
 struct RData* FUNC_2 (TYPE_3__*,int *,void*,int *) ;
 void* FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (struct RData*) ;
 int VAR_2 ;

__attribute__((used)) static mrb_value
FUNC_5(mrb_state *VAR_3)
{
  struct RData *VAR_4;
  ptrdiff_t VAR_5 = VAR_3->c->ci - VAR_3->c->cibase;
  int VAR_6 = 0;
  int VAR_7;
  void *VAR_8;

  FUNC_0(VAR_3, VAR_5, VAR_3->c->ci->pc, VAR_1, &VAR_6);
  VAR_7 = VAR_6 * sizeof(struct backtrace_location);
  VAR_8 = FUNC_3(VAR_3, VAR_7);
  if (VAR_8) FUNC_1(VAR_8, 0, VAR_7);
  VAR_4 = FUNC_2(VAR_3, ((void*)0), VAR_8, &VAR_0);
  VAR_4->flags = (unsigned int)VAR_6;
  FUNC_0(VAR_3, VAR_5, VAR_3->c->ci->pc, VAR_2, &VAR_8);
  return FUNC_4(VAR_4);
}
