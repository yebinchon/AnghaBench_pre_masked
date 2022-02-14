
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int msg; int easy_handle; } ;
typedef TYPE_1__ CURLMsg ;


 int VAR_0 ;

 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,char**) ;
 int VAR_1 ;
 TYPE_1__* FUNC_3 (int ,int*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (char*,char*) ;
 int VAR_2 ;

void FUNC_7(void) {
    char *VAR_3;
    CURLMsg *VAR_4;
    int VAR_5;

    while ((VAR_4 = FUNC_3(VAR_1, &VAR_5))) {
        switch (VAR_4->msg) {
        case 128:
            FUNC_2(VAR_4->easy_handle, VAR_0,
                            &VAR_3);
            FUNC_6("%s DONE\n", VAR_3);

            FUNC_4(VAR_1, VAR_4->easy_handle);
            FUNC_1(VAR_4->easy_handle);
            break;

        default:
            FUNC_5(VAR_2, "CURLMSG default\n");
            FUNC_0();
        }
    }
}
