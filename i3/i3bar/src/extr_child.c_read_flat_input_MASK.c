
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct status_block {int full_text; } ;


 int FUNC_0 (int ) ;
 struct status_block* FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(char *VAR_1, int VAR_2) {
    struct status_block *VAR_3 = FUNC_1(&VAR_0);

    FUNC_0(VAR_3->full_text);


    if (VAR_1[VAR_2 - 1] == '\n' || VAR_1[VAR_2 - 1] == '\r') {
        VAR_1[VAR_2 - 1] = '\0';
    } else {
        VAR_1[VAR_2] = '\0';
    }

    VAR_3->full_text = FUNC_2(VAR_1);
}
