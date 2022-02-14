
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task {scalar_t__ zombie; } ;
typedef int dword_t ;


 struct task* FUNC_0 (int ) ;

struct task *FUNC_1(dword_t VAR_0) {
    struct task *VAR_1 = FUNC_0(VAR_0);
    if (VAR_1 != ((void*)0) && VAR_1->zombie)
        return ((void*)0);
    return VAR_1;
}
