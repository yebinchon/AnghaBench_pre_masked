
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* chars; size_t size; } ;
typedef TYPE_1__ erow ;
struct TYPE_6__ {int dirty; } ;


 TYPE_4__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,char*,size_t) ;
 char* FUNC_2 (char*,size_t) ;

void FUNC_3(erow *VAR_1, char *VAR_2, size_t VAR_3) {
    VAR_1->chars = FUNC_2(VAR_1->chars,VAR_1->size+VAR_3+1);
    FUNC_1(VAR_1->chars+VAR_1->size,VAR_2,VAR_3);
    VAR_1->size += VAR_3;
    VAR_1->chars[VAR_1->size] = '\0';
    FUNC_0(VAR_1);
    VAR_0.dirty++;
}
