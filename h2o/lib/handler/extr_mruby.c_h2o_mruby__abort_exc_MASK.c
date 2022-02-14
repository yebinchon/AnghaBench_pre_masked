
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int exc; } ;
typedef TYPE_1__ mrb_state ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char const*,int,char*,char const*,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(mrb_state *VAR_0, const char *VAR_1, const char *VAR_2, int VAR_3)
{
    FUNC_1(VAR_2, VAR_3, "%s:%s\n", VAR_1, FUNC_0(FUNC_2(VAR_0, FUNC_3(VAR_0->exc))));
}
