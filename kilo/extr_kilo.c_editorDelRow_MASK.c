
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int idx; } ;
typedef TYPE_1__ erow ;
struct TYPE_7__ {int numrows; int dirty; TYPE_1__* row; } ;


 TYPE_5__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,int) ;

void FUNC_2(int VAR_1) {
    erow *VAR_2;

    if (VAR_1 >= VAR_0.numrows) return;
    VAR_2 = VAR_0.row+VAR_1;
    FUNC_0(VAR_2);
    FUNC_1(VAR_0.row+VAR_1,VAR_0.row+VAR_1+1,sizeof(VAR_0.row[0])*(VAR_0.numrows-VAR_1-1));
    for (int VAR_3 = VAR_1; VAR_3 < VAR_0.numrows-1; VAR_3++) VAR_0.row[VAR_3].idx++;
    VAR_0.numrows--;
    VAR_0.dirty++;
}
