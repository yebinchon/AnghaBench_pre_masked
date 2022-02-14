
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct RBasic {int dummy; } ;
struct TYPE_10__ {scalar_t__ exc; int root_c; int c; } ;
typedef TYPE_1__ mrb_state ;
struct TYPE_11__ {int arena_idx; int * gray_list; int * atomic_gray_list; struct RBasic** arena; } ;
typedef TYPE_2__ mrb_gc ;


 int FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,struct RBasic*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_5(mrb_state *VAR_0, mrb_gc *VAR_1)
{
  int VAR_2, VAR_3;


  for (VAR_2=0,VAR_3=VAR_1->arena_idx; VAR_2<VAR_3; VAR_2++) {
    FUNC_3(VAR_0, VAR_1->arena[VAR_2]);
  }
  FUNC_4(VAR_0);
  FUNC_1(VAR_0, VAR_0->c);
  FUNC_1(VAR_0, VAR_0->root_c);
  FUNC_3(VAR_0, (struct RBasic*)VAR_0->exc);
  FUNC_0(VAR_0, VAR_1);
  FUNC_2(VAR_1->gray_list == ((void*)0));
  VAR_1->gray_list = VAR_1->atomic_gray_list;
  VAR_1->atomic_gray_list = ((void*)0);
  FUNC_0(VAR_0, VAR_1);
  FUNC_2(VAR_1->gray_list == ((void*)0));
}
