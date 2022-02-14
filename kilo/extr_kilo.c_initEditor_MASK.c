
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int screenrows; int screencols; int * syntax; int * filename; scalar_t__ dirty; int * row; scalar_t__ numrows; scalar_t__ coloff; scalar_t__ rowoff; scalar_t__ cy; scalar_t__ cx; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int*,int *) ;
 int FUNC_2 (char*) ;

void FUNC_3(void) {
    VAR_0.cx = 0;
    VAR_0.cy = 0;
    VAR_0.rowoff = 0;
    VAR_0.coloff = 0;
    VAR_0.numrows = 0;
    VAR_0.row = ((void*)0);
    VAR_0.dirty = 0;
    VAR_0.filename = ((void*)0);
    VAR_0.syntax = ((void*)0);
    if (FUNC_1(VAR_1,VAR_2,
                      &VAR_0.screenrows,&VAR_0.screencols) == -1)
    {
        FUNC_2("Unable to query the screen for size (columns / rows)");
        FUNC_0(1);
    }
    VAR_0.screenrows -= 2;
}
