
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* str; } ;
struct TYPE_4__ {char const* identifier; TYPE_1__ val; int type; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char**,char*,char*,char const*) ;
 char* FUNC_4 (char const*) ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (char const*,char const*) ;

__attribute__((used)) static void FUNC_6(const char *VAR_3, const char *VAR_4) {
    for (int VAR_5 = 0; VAR_5 < 10; VAR_5++) {
        if (VAR_1[VAR_5].identifier != ((void*)0) &&
            FUNC_5(VAR_1[VAR_5].identifier, VAR_3) != 0)
            continue;
        if (VAR_1[VAR_5].identifier == ((void*)0)) {

            VAR_1[VAR_5].identifier = VAR_3;
            VAR_1[VAR_5].val.str = FUNC_4(VAR_4);
            VAR_1[VAR_5].type = VAR_0;
        } else {

            char *VAR_6 = VAR_1[VAR_5].val.str;
            FUNC_3(&(VAR_1[VAR_5].val.str), "%s,%s", VAR_6, VAR_4);
            FUNC_2(VAR_6);
        }
        return;
    }




    FUNC_1(VAR_2, "BUG: commands_parser stack full. This means either a bug "
                    "in the code, or a new command which contains more than "
                    "10 identified tokens.\n");
    FUNC_0(1);
}
