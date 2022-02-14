
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; } ;
typedef TYPE_1__ erow ;
struct TYPE_4__ {int rowoff; int cy; int coloff; int cx; int numrows; TYPE_1__* row; int screenrows; int screencols; } ;






 TYPE_2__ VAR_0 ;

void FUNC_0(int VAR_1) {
    int VAR_2 = VAR_0.rowoff+VAR_0.cy;
    int VAR_3 = VAR_0.coloff+VAR_0.cx;
    int VAR_4;
    erow *VAR_5 = (VAR_2 >= VAR_0.numrows) ? ((void*)0) : &VAR_0.row[VAR_2];

    switch(VAR_1) {
    case 130:
        if (VAR_0.cx == 0) {
            if (VAR_0.coloff) {
                VAR_0.coloff--;
            } else {
                if (VAR_2 > 0) {
                    VAR_0.cy--;
                    VAR_0.cx = VAR_0.row[VAR_2-1].size;
                    if (VAR_0.cx > VAR_0.screencols-1) {
                        VAR_0.coloff = VAR_0.cx-VAR_0.screencols+1;
                        VAR_0.cx = VAR_0.screencols-1;
                    }
                }
            }
        } else {
            VAR_0.cx -= 1;
        }
        break;
    case 129:
        if (VAR_5 && VAR_3 < VAR_5->size) {
            if (VAR_0.cx == VAR_0.screencols-1) {
                VAR_0.coloff++;
            } else {
                VAR_0.cx += 1;
            }
        } else if (VAR_5 && VAR_3 == VAR_5->size) {
            VAR_0.cx = 0;
            VAR_0.coloff = 0;
            if (VAR_0.cy == VAR_0.screenrows-1) {
                VAR_0.rowoff++;
            } else {
                VAR_0.cy += 1;
            }
        }
        break;
    case 128:
        if (VAR_0.cy == 0) {
            if (VAR_0.rowoff) VAR_0.rowoff--;
        } else {
            VAR_0.cy -= 1;
        }
        break;
    case 131:
        if (VAR_2 < VAR_0.numrows) {
            if (VAR_0.cy == VAR_0.screenrows-1) {
                VAR_0.rowoff++;
            } else {
                VAR_0.cy += 1;
            }
        }
        break;
    }

    VAR_2 = VAR_0.rowoff+VAR_0.cy;
    VAR_3 = VAR_0.coloff+VAR_0.cx;
    VAR_5 = (VAR_2 >= VAR_0.numrows) ? ((void*)0) : &VAR_0.row[VAR_2];
    VAR_4 = VAR_5 ? VAR_5->size : 0;
    if (VAR_3 > VAR_4) {
        VAR_0.cx -= VAR_3-VAR_4;
        if (VAR_0.cx < 0) {
            VAR_0.coloff += VAR_0.cx;
            VAR_0.cx = 0;
        }
    }
}
