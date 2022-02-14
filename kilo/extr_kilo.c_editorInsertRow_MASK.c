
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int erow ;
struct TYPE_8__ {int numrows; int dirty; TYPE_1__* row; } ;
struct TYPE_7__ {int idx; size_t size; scalar_t__ rsize; int * render; scalar_t__ hl_oc; int * hl; int chars; } ;


 TYPE_6__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (int ,char*,size_t) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*,int) ;
 TYPE_1__* FUNC_4 (TYPE_1__*,int) ;

void FUNC_5(int VAR_1, char *VAR_2, size_t VAR_3) {
    if (VAR_1 > VAR_0.numrows) return;
    VAR_0.row = FUNC_4(VAR_0.row,sizeof(erow)*(VAR_0.numrows+1));
    if (VAR_1 != VAR_0.numrows) {
        FUNC_3(VAR_0.row+VAR_1+1,VAR_0.row+VAR_1,sizeof(VAR_0.row[0])*(VAR_0.numrows-VAR_1));
        for (int VAR_4 = VAR_1+1; VAR_4 <= VAR_0.numrows; VAR_4++) VAR_0.row[VAR_4].idx++;
    }
    VAR_0.row[VAR_1].size = VAR_3;
    VAR_0.row[VAR_1].chars = FUNC_1(VAR_3+1);
    FUNC_2(VAR_0.row[VAR_1].chars,VAR_2,VAR_3+1);
    VAR_0.row[VAR_1].hl = ((void*)0);
    VAR_0.row[VAR_1].hl_oc = 0;
    VAR_0.row[VAR_1].render = ((void*)0);
    VAR_0.row[VAR_1].rsize = 0;
    VAR_0.row[VAR_1].idx = VAR_1;
    FUNC_0(VAR_0.row+VAR_1);
    VAR_0.numrows++;
    VAR_0.dirty++;
}
