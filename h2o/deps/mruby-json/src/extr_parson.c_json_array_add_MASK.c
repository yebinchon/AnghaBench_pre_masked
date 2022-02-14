
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int count; int capacity; TYPE_1__** items; } ;
struct TYPE_7__ {int parent; } ;
typedef TYPE_1__ JSON_Value ;
typedef scalar_t__ JSON_Status ;
typedef TYPE_2__ JSON_Array ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t FUNC_0 (int,int ) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,size_t) ;

__attribute__((used)) static JSON_Status FUNC_3(JSON_Array *VAR_3, JSON_Value *VAR_4) {
    if (VAR_3->count >= VAR_3->capacity) {
        size_t VAR_5 = FUNC_0(VAR_3->capacity * 2, VAR_2);
        if (FUNC_2(VAR_3, VAR_5) == VAR_0) {
            return VAR_0;
        }
    }
    VAR_4->parent = FUNC_1(VAR_3);
    VAR_3->items[VAR_3->count] = VAR_4;
    VAR_3->count++;
    return VAR_1;
}
