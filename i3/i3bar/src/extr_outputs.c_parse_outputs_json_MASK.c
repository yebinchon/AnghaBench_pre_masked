
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int yajl_status ;
typedef int yajl_handle ;
struct outputs_json_params {char* json; int in_rect; int * cur_key; int * outputs_walk; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int *,void*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,unsigned char const*,int ) ;




void FUNC_6(char *VAR_2) {
    struct outputs_json_params VAR_3;
    VAR_3.outputs_walk = ((void*)0);
    VAR_3.cur_key = ((void*)0);
    VAR_3.json = VAR_2;
    VAR_3.in_rect = 0;

    yajl_handle VAR_4;
    yajl_status VAR_5;
    VAR_4 = FUNC_3(&VAR_1, ((void*)0), (void *)&VAR_3);

    VAR_5 = FUNC_5(VAR_4, (const unsigned char *)VAR_2, FUNC_2(VAR_2));


    switch (VAR_5) {
        case 128:
            break;
        case 130:
        case 129:
            FUNC_0("Could not parse outputs reply!\n");
            FUNC_1(VAR_0);
            break;
    }

    FUNC_4(VAR_4);
}
