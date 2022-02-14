
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__** items; } ;
struct TYPE_8__ {int * parent; } ;
typedef TYPE_1__ JSON_Value ;
typedef int JSON_Status ;
typedef TYPE_2__ JSON_Array ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,size_t) ;
 int * FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;

JSON_Status FUNC_4(JSON_Array *VAR_2, size_t VAR_3, JSON_Value *VAR_4) {
    if (VAR_2 == ((void*)0) || VAR_4 == ((void*)0) || VAR_4->parent != ((void*)0) || VAR_3 >= FUNC_0(VAR_2)) {
        return VAR_0;
    }
    FUNC_3(FUNC_1(VAR_2, VAR_3));
    VAR_4->parent = FUNC_2(VAR_2);
    VAR_2->items[VAR_3] = VAR_4;
    return VAR_1;
}
