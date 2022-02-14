
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tgroup {int lock; struct rlimit_* limits; } ;
struct task {struct tgroup* group; } ;
struct rlimit_ {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct task *VAR_1, int VAR_2, struct rlimit_ *VAR_3) {
    if (!FUNC_1(VAR_2))
        return VAR_0;
    struct tgroup *VAR_4 = VAR_1->group;
    FUNC_0(&VAR_4->lock);
    *VAR_3 = VAR_4->limits[VAR_2];
    FUNC_2(&VAR_4->lock);
    return 0;
}
