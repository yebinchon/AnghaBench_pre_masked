
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int size; int chars; } ;
typedef TYPE_1__ erow ;
struct TYPE_7__ {int rowoff; int cy; int coloff; int cx; int numrows; int screencols; int dirty; TYPE_1__* row; } ;


 TYPE_5__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*) ;

void FUNC_4() {
    int VAR_1 = VAR_0.rowoff+VAR_0.cy;
    int VAR_2 = VAR_0.coloff+VAR_0.cx;
    erow *VAR_3 = (VAR_1 >= VAR_0.numrows) ? ((void*)0) : &VAR_0.row[VAR_1];

    if (!VAR_3 || (VAR_2 == 0 && VAR_1 == 0)) return;
    if (VAR_2 == 0) {


        VAR_2 = VAR_0.row[VAR_1-1].size;
        FUNC_1(&VAR_0.row[VAR_1-1],VAR_3->chars,VAR_3->size);
        FUNC_0(VAR_1);
        VAR_3 = ((void*)0);
        if (VAR_0.cy == 0)
            VAR_0.rowoff--;
        else
            VAR_0.cy--;
        VAR_0.cx = VAR_2;
        if (VAR_0.cx >= VAR_0.screencols) {
            int VAR_4 = (VAR_0.screencols-VAR_0.cx)+1;
            VAR_0.cx -= VAR_4;
            VAR_0.coloff += VAR_4;
        }
    } else {
        FUNC_2(VAR_3,VAR_2-1);
        if (VAR_0.cx == 0 && VAR_0.coloff)
            VAR_0.coloff--;
        else
            VAR_0.cx--;
    }
    if (VAR_3) FUNC_3(VAR_3);
    VAR_0.dirty++;
}
