
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int size; char* chars; } ;
typedef TYPE_1__ erow ;
struct TYPE_5__ {int rowoff; int cy; int coloff; int cx; int numrows; int screenrows; TYPE_1__* row; } ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(void) {
    int VAR_1 = VAR_0.rowoff+VAR_0.cy;
    int VAR_2 = VAR_0.coloff+VAR_0.cx;
    erow *VAR_3 = (VAR_1 >= VAR_0.numrows) ? ((void*)0) : &VAR_0.row[VAR_1];

    if (!VAR_3) {
        if (VAR_1 == VAR_0.numrows) {
            FUNC_0(VAR_1,"",0);
            goto fixcursor;
        }
        return;
    }


    if (VAR_2 >= VAR_3->size) VAR_2 = VAR_3->size;
    if (VAR_2 == 0) {
        FUNC_0(VAR_1,"",0);
    } else {

        FUNC_0(VAR_1+1,VAR_3->chars+VAR_2,VAR_3->size-VAR_2);
        VAR_3 = &VAR_0.row[VAR_1];
        VAR_3->chars[VAR_2] = '\0';
        VAR_3->size = VAR_2;
        FUNC_1(VAR_3);
    }
fixcursor:
    if (VAR_0.cy == VAR_0.screenrows-1) {
        VAR_0.rowoff++;
    } else {
        VAR_0.cy++;
    }
    VAR_0.cx = 0;
    VAR_0.coloff = 0;
}
