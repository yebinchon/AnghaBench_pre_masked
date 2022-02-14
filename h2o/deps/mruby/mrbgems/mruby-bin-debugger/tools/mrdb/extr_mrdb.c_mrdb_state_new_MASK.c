
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* command; int print_no; int dbg; } ;
typedef TYPE_1__ mrdb_state ;
typedef int mrb_state ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int) ;

__attribute__((used)) static mrdb_state*
FUNC_3(mrb_state *VAR_1)
{
  mrdb_state *VAR_2 = (mrdb_state*)FUNC_2(VAR_1, sizeof(mrdb_state));

  FUNC_0(VAR_2, 0, sizeof(mrdb_state));

  VAR_2->dbg = FUNC_1(VAR_1);
  VAR_2->command = (char*)FUNC_2(VAR_1, VAR_0+1);
  VAR_2->print_no = 1;

  return VAR_2;
}
