
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int count; int capacity; TYPE_1__** values; int ** names; } ;
struct TYPE_8__ {int parent; } ;
typedef TYPE_1__ JSON_Value ;
typedef scalar_t__ JSON_Status ;
typedef TYPE_2__ JSON_Object ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t FUNC_0 (int,int ) ;
 int VAR_2 ;
 int * FUNC_1 (TYPE_2__*,char const*) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,size_t) ;
 int * FUNC_4 (char const*) ;

__attribute__((used)) static JSON_Status FUNC_5(JSON_Object *VAR_3, const char *VAR_4, JSON_Value *VAR_5) {
    size_t VAR_6 = 0;
    if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0) || VAR_5 == ((void*)0)) {
        return VAR_0;
    }
    if (FUNC_1(VAR_3, VAR_4) != ((void*)0)) {
        return VAR_0;
    }
    if (VAR_3->count >= VAR_3->capacity) {
        size_t VAR_7 = FUNC_0(VAR_3->capacity * 2, VAR_2);
        if (FUNC_3(VAR_3, VAR_7) == VAR_0) {
            return VAR_0;
        }
    }
    VAR_6 = VAR_3->count;
    VAR_3->names[VAR_6] = FUNC_4(VAR_4);
    if (VAR_3->names[VAR_6] == ((void*)0)) {
        return VAR_0;
    }
    VAR_5->parent = FUNC_2(VAR_3);
    VAR_3->values[VAR_6] = VAR_5;
    VAR_3->count++;
    return VAR_1;
}
