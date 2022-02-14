
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rev_info {int merge_simplification; } ;
struct merge_simplify_state {int dummy; } ;
struct commit {int object; } ;


 int FUNC_0 (int *,int *,struct merge_simplify_state*) ;
 struct merge_simplify_state* FUNC_1 (int *,int *) ;
 struct merge_simplify_state* FUNC_2 (int,int) ;

__attribute__((used)) static struct merge_simplify_state *FUNC_3(struct rev_info *VAR_0, struct commit *VAR_1)
{
 struct merge_simplify_state *VAR_2;

 VAR_2 = FUNC_1(&VAR_0->merge_simplification, &VAR_1->object);
 if (!VAR_2) {
  VAR_2 = FUNC_2(1, sizeof(*VAR_2));
  FUNC_0(&VAR_0->merge_simplification, &VAR_1->object, VAR_2);
 }
 return VAR_2;
}
