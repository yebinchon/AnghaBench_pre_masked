
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree {int dummy; } ;
struct commit {struct tree* maybe_tree; } ;



__attribute__((used)) static inline void FUNC_0(struct commit *VAR_0, struct tree *VAR_1)
{
 VAR_0->maybe_tree = VAR_1;
}
