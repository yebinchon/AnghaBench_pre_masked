
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct outputs_json_params {char* cur_key; TYPE_1__* outputs_walk; } ;
struct TYPE_2__ {long ws; char* name; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char**,char*,size_t,unsigned char const*) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 long FUNC_3 (char*,char**,int) ;

__attribute__((used)) static int FUNC_4(void *VAR_1, const unsigned char *VAR_2, size_t VAR_3) {
    struct outputs_json_params *VAR_4 = (struct outputs_json_params *)VAR_1;

    if (!FUNC_2(VAR_4->cur_key, "current_workspace")) {
        char *VAR_5 = ((void*)0);
        FUNC_1(&VAR_5, "%.*s", VAR_3, VAR_2);

        char *VAR_6;
        VAR_0 = 0;
        long VAR_7 = FUNC_3(VAR_5, &VAR_6, 10);
        if (VAR_0 == 0 &&
            (VAR_6 && *VAR_6 == '\0'))
            VAR_4->outputs_walk->ws = VAR_7;

        FUNC_0(VAR_5);
        FUNC_0(VAR_4->cur_key);
        return 1;
    }

    if (FUNC_2(VAR_4->cur_key, "name")) {
        return 0;
    }

    FUNC_1(&(VAR_4->outputs_walk->name), "%.*s", VAR_3, VAR_2);

    FUNC_0(VAR_4->cur_key);
    return 1;
}
