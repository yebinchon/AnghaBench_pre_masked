
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int mrb_state ;
struct TYPE_4__ {struct TYPE_4__* filename; } ;
typedef TYPE_1__ listcmd_parser_state ;


 int FUNC_0 (int *,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1(mrb_state *VAR_0, listcmd_parser_state *VAR_1)
{
  if (VAR_1 != ((void*)0)) {
    if (VAR_1->filename != ((void*)0)) {
      FUNC_0(VAR_0, VAR_1->filename);
    }
    FUNC_0(VAR_0, VAR_1);
  }
}
