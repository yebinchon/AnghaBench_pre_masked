
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mode {int * name; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 struct mode VAR_1 ;

void FUNC_1(struct mode *VAR_2) {
    FUNC_0(VAR_1.name);
    VAR_1 = *VAR_2;
    VAR_0 = VAR_1.name != ((void*)0);
}
