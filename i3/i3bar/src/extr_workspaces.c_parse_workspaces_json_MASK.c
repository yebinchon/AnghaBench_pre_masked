
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int yajl_status ;
typedef int yajl_handle ;
struct workspaces_json_params {char* json; int * cur_key; int * workspaces_walk; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 int VAR_1 ;
 int FUNC_5 (int *,int *,void*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,unsigned char const*,int ) ;




void FUNC_8(char *VAR_2) {


    struct workspaces_json_params VAR_3;

    FUNC_3();

    VAR_3.workspaces_walk = ((void*)0);
    VAR_3.cur_key = ((void*)0);
    VAR_3.json = VAR_2;

    yajl_handle VAR_4;
    yajl_status VAR_5;
    VAR_4 = FUNC_5(&VAR_1, ((void*)0), (void *)&VAR_3);

    VAR_5 = FUNC_7(VAR_4, (const unsigned char *)VAR_2, FUNC_4(VAR_2));


    switch (VAR_5) {
        case 128:
            break;
        case 130:
        case 129:
            FUNC_0("Could not parse workspaces reply!\n");
            FUNC_2(VAR_0);
            break;
    }

    FUNC_6(VAR_4);

    FUNC_1(VAR_3.cur_key);
}
