
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int numrows; TYPE_1__* row; } ;
struct TYPE_3__ {scalar_t__ size; int chars; } ;


 TYPE_2__ VAR_0 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (char*,int ,scalar_t__) ;

char *FUNC_2(int *VAR_1) {
    char *VAR_2 = ((void*)0), *VAR_3;
    int VAR_4 = 0;
    int VAR_5;


    for (VAR_5 = 0; VAR_5 < VAR_0.numrows; VAR_5++)
        VAR_4 += VAR_0.row[VAR_5].size+1;
    *VAR_1 = VAR_4;
    VAR_4++;

    VAR_3 = VAR_2 = FUNC_0(VAR_4);
    for (VAR_5 = 0; VAR_5 < VAR_0.numrows; VAR_5++) {
        FUNC_1(VAR_3,VAR_0.row[VAR_5].chars,VAR_0.row[VAR_5].size);
        VAR_3 += VAR_0.row[VAR_5].size;
        *VAR_3 = '\n';
        VAR_3++;
    }
    *VAR_3 = '\0';
    return VAR_2;
}
