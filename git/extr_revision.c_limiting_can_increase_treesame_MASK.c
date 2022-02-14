
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rev_info {int first_parent_only; int simplify_history; scalar_t__ dense; scalar_t__ prune; } ;



__attribute__((used)) static inline int FUNC_0(const struct rev_info *VAR_0)
{
 return VAR_0->prune && VAR_0->dense &&
        !VAR_0->simplify_history &&
        !VAR_0->first_parent_only;
}
