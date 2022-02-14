
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int size; int bytes; } ;
typedef TYPE_1__ h2o_buffer_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__**) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (char*,char**,TYPE_1__**,int*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static void FUNC_9(void)
{
    char *VAR_0[] = {"t/00unit/assets/read_command.pl", "hello", ((void*)0)};
    h2o_buffer_t *VAR_1;
    int VAR_2, VAR_3;


    VAR_2 = FUNC_5(VAR_0[0], VAR_0, &VAR_1, &VAR_3);
    FUNC_6(VAR_2 == 0);
    if (VAR_2 == 0) {
        FUNC_6(FUNC_2(VAR_3));
        FUNC_6(FUNC_1(VAR_3) == 0);
        FUNC_6(FUNC_4(VAR_1->bytes, VAR_1->size, FUNC_0("hello")));
        FUNC_3(&VAR_1);
    }


    FUNC_7("READ_COMMAND_EXIT_STATUS", "75", 1);
    VAR_2 = FUNC_5(VAR_0[0], VAR_0, &VAR_1, &VAR_3);
    FUNC_6(VAR_2 == 0);
    if (VAR_2 == 0) {
        FUNC_6(FUNC_2(VAR_3));
        FUNC_6(FUNC_1(VAR_3) == 75);
        FUNC_6(FUNC_4(VAR_1->bytes, VAR_1->size, FUNC_0("hello")));
        FUNC_3(&VAR_1);
    }
    FUNC_8("READ_COMMAND_EXIT_STATUS");


    VAR_0[0] = "t/00unit/assets";
    VAR_2 = FUNC_5(VAR_0[0], VAR_0, &VAR_1, &VAR_3);
    FUNC_6(VAR_2 != 0 || (VAR_2 == 0 && FUNC_2(VAR_3) && FUNC_1(VAR_3) == 127));
}
