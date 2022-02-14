
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int * exc; } ;
typedef TYPE_1__ mrb_state ;


 int VAR_0 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char*,char const*,char*,int ,char const*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (TYPE_1__*,char const*,int ) ;
 int FUNC_7 (TYPE_1__*,char*) ;
 int FUNC_8 (TYPE_1__*,int ,int ) ;
 int FUNC_9 (TYPE_1__*,int ) ;
 int FUNC_10 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_11 (TYPE_1__*,int ,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (char const*) ;

void FUNC_14(mrb_state *VAR_1)
{
    const char *VAR_2 = FUNC_2("H2O_ROOT");
    if (VAR_2 == ((void*)0))
        VAR_2 = FUNC_0(VAR_0);
    FUNC_8(VAR_1, FUNC_10(VAR_1, "$H2O_ROOT"), FUNC_6(VAR_1, VAR_2, FUNC_13(VAR_2)));

    FUNC_5(VAR_1, "$LOAD_PATH << \"#{$H2O_ROOT}/share/h2o/mruby\"");
    FUNC_4(VAR_1);


    FUNC_5(VAR_1, "require \"#{$H2O_ROOT}/share/h2o/mruby/preloads.rb\"");
    if (VAR_1->exc != ((void*)0)) {
        const char *VAR_3 = "";
        if (FUNC_11(VAR_1, FUNC_12(VAR_1->exc), FUNC_7(VAR_1, "LoadError"))) {
            VAR_3 = "Did you forget to run `make install`?\n";
        }
        FUNC_3("an error occurred while loading %s/%s: %s\n%s", VAR_2, "share/h2o/mruby/preloads.rb",
                  FUNC_1(FUNC_9(VAR_1, FUNC_12(VAR_1->exc))), VAR_3);
    }
}
