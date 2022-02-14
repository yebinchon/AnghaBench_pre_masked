
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task {int * parent; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct task *VAR_0, int VAR_1) {
    if (VAR_0->parent != ((void*)0))
        return;
    if (VAR_1 & 0xff)
        FUNC_1(VAR_1 & 0xff);
    else
        FUNC_0(VAR_1 >> 8);
}
