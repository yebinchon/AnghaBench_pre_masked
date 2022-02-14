
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int erow ;
struct TYPE_2__ {int rowoff; int cy; int coloff; int cx; int numrows; int screencols; int dirty; int * row; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int *,int,int) ;

void FUNC_2(int VAR_1) {
    int VAR_2 = VAR_0.rowoff+VAR_0.cy;
    int VAR_3 = VAR_0.coloff+VAR_0.cx;
    erow *VAR_4 = (VAR_2 >= VAR_0.numrows) ? ((void*)0) : &VAR_0.row[VAR_2];



    if (!VAR_4) {
        while(VAR_0.numrows <= VAR_2)
            FUNC_0(VAR_0.numrows,"",0);
    }
    VAR_4 = &VAR_0.row[VAR_2];
    FUNC_1(VAR_4,VAR_3,VAR_1);
    if (VAR_0.cx == VAR_0.screencols-1)
        VAR_0.coloff++;
    else
        VAR_0.cx++;
    VAR_0.dirty++;
}
