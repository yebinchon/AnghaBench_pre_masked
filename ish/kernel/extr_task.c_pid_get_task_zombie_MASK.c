
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task {int dummy; } ;
struct pid {struct task* task; } ;
typedef int dword_t ;


 struct pid* FUNC_0 (int ) ;

struct task *FUNC_1(dword_t VAR_0) {
    struct pid *VAR_1 = FUNC_0(VAR_0);
    if (VAR_1 == ((void*)0))
        return ((void*)0);
    struct task *VAR_2 = VAR_1->task;
    return VAR_2;
}
