
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__** table; } ;
struct TYPE_6__ {int b; } ;
typedef TYPE_2__ PTW_attackstate ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int) ;
 TYPE_2__* FUNC_1 (int) ;
 int VAR_1 ;

PTW_attackstate * FUNC_2() {
 int VAR_2,VAR_3;
 PTW_attackstate * VAR_4 = ((void*)0);
 VAR_4 = FUNC_1(sizeof(PTW_attackstate));
 if (VAR_4 == ((void*)0)) {
  return ((void*)0);
 }
 FUNC_0(VAR_4, sizeof(PTW_attackstate));
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
                for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
                        VAR_4->table[VAR_2][VAR_3].b = VAR_3;
                }
        }
        return VAR_4;
}
