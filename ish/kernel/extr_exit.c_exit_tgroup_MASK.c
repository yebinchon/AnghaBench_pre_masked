
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tgroup {int pgroup; scalar_t__ timer; int threads; } ;
struct task {int group_links; struct tgroup* group; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct task*) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static bool FUNC_4(struct task *VAR_0) {
    struct tgroup *VAR_1 = VAR_0->group;
    FUNC_1(&VAR_0->group_links);
    bool VAR_2 = FUNC_0(&VAR_1->threads);
    if (VAR_2) {



        if (VAR_1->timer)
            FUNC_3(VAR_1->timer);
        FUNC_2(VAR_0);
        FUNC_1(&VAR_1->pgroup);
    }
    return VAR_2;
}
