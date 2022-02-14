
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct oidset_iter {int * set; int iter; } ;
struct oidset {int set; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline void FUNC_1(struct oidset *VAR_0,
        struct oidset_iter *VAR_1)
{
 VAR_1->set = &VAR_0->set;
 VAR_1->iter = FUNC_0(VAR_1->set);
}
