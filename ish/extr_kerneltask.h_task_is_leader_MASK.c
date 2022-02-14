
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task {TYPE_1__* group; } ;
struct TYPE_2__ {struct task* leader; } ;



__attribute__((used)) static inline bool FUNC_0(struct task *VAR_0) {
    return VAR_0->group->leader == VAR_0;
}
