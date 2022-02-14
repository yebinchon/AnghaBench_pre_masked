
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {long num; } ;
struct TYPE_4__ {char const* identifier; int type; TYPE_1__ val; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(const char *VAR_3, long VAR_4) {
    for (int VAR_5 = 0; VAR_5 < 10; VAR_5++) {
        if (VAR_1[VAR_5].identifier != ((void*)0)) {
            continue;
        }

        VAR_1[VAR_5].identifier = VAR_3;
        VAR_1[VAR_5].val.num = VAR_4;
        VAR_1[VAR_5].type = VAR_0;
        return;
    }




    FUNC_1(VAR_2, "BUG: commands_parser stack full. This means either a bug "
                    "in the code, or a new command which contains more than "
                    "10 identified tokens.\n");
    FUNC_0(1);
}
