
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int size; char* chars; } ;
typedef TYPE_1__ erow ;
struct TYPE_6__ {int dirty; } ;


 TYPE_4__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (int ,char,int) ;
 void* FUNC_3 (char*,int) ;

void FUNC_4(erow *VAR_1, int VAR_2, int VAR_3) {
    if (VAR_2 > VAR_1->size) {


        int VAR_4 = VAR_2-VAR_1->size;

        VAR_1->chars = FUNC_3(VAR_1->chars,VAR_1->size+VAR_4+2);
        FUNC_2(VAR_1->chars+VAR_1->size,' ',VAR_4);
        VAR_1->chars[VAR_1->size+VAR_4+1] = '\0';
        VAR_1->size += VAR_4+1;
    } else {


        VAR_1->chars = FUNC_3(VAR_1->chars,VAR_1->size+2);
        FUNC_1(VAR_1->chars+VAR_2+1,VAR_1->chars+VAR_2,VAR_1->size-VAR_2+1);
        VAR_1->size++;
    }
    VAR_1->chars[VAR_2] = VAR_3;
    FUNC_0(VAR_1);
    VAR_0.dirty++;
}
