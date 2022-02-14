
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rev_info {scalar_t__ full_diff; scalar_t__ dense; scalar_t__ prune; } ;
struct commit {int dummy; } ;
typedef enum commit_action { ____Placeholder_commit_action } commit_action ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rev_info*,struct commit*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct rev_info*,struct commit*,int ) ;
 int FUNC_2 (struct rev_info*,struct commit*) ;
 scalar_t__ FUNC_3 (struct rev_info*) ;

enum commit_action FUNC_4(struct rev_info *VAR_3, struct commit *VAR_4)
{
 enum commit_action VAR_5 = FUNC_0(VAR_3, VAR_4);

 if (VAR_5 == VAR_1 &&
     VAR_3->prune && VAR_3->dense && FUNC_3(VAR_3)) {






  if (VAR_3->full_diff)
   FUNC_2(VAR_3, VAR_4);
  if (FUNC_1(VAR_3, VAR_4, VAR_2) < 0)
   return VAR_0;
 }
 return VAR_5;
}
