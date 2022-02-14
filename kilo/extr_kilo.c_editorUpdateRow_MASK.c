
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* render; int size; char* chars; int rsize; } ;
typedef TYPE_1__ erow ;


 char VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int) ;

void FUNC_3(erow *VAR_1) {
    int VAR_2 = 0, VAR_3 = 0, VAR_4, VAR_5;



    FUNC_1(VAR_1->render);
    for (VAR_4 = 0; VAR_4 < VAR_1->size; VAR_4++)
        if (VAR_1->chars[VAR_4] == VAR_0) VAR_2++;

    VAR_1->render = FUNC_2(VAR_1->size + VAR_2*8 + VAR_3*9 + 1);
    VAR_5 = 0;
    for (VAR_4 = 0; VAR_4 < VAR_1->size; VAR_4++) {
        if (VAR_1->chars[VAR_4] == VAR_0) {
            VAR_1->render[VAR_5++] = ' ';
            while((VAR_5+1) % 8 != 0) VAR_1->render[VAR_5++] = ' ';
        } else {
            VAR_1->render[VAR_5++] = VAR_1->chars[VAR_4];
        }
    }
    VAR_1->rsize = VAR_5;
    VAR_1->render[VAR_5] = '\0';


    FUNC_0(VAR_1);
}
