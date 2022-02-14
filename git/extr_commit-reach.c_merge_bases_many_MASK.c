
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct repository {int dummy; } ;
struct commit_list {int dummy; } ;
struct TYPE_2__ {int flags; } ;
struct commit {TYPE_1__ object; } ;


 int VAR_0 ;
 struct commit_list* FUNC_0 (struct commit*,struct commit_list**) ;
 int FUNC_1 (struct commit*,struct commit_list**) ;
 struct commit_list* FUNC_2 (struct repository*,struct commit*,int,struct commit**,int ) ;
 struct commit* FUNC_3 (struct commit_list**) ;
 scalar_t__ FUNC_4 (struct repository*,struct commit*) ;

__attribute__((used)) static struct commit_list *FUNC_5(struct repository *VAR_1,
         struct commit *VAR_2, int VAR_3,
         struct commit **VAR_4)
{
 struct commit_list *VAR_5 = ((void*)0);
 struct commit_list *VAR_6 = ((void*)0);
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  if (VAR_2 == VAR_4[VAR_7])




   return FUNC_0(VAR_2, &VAR_6);
 }

 if (FUNC_4(VAR_1, VAR_2))
  return ((void*)0);
 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  if (FUNC_4(VAR_1, VAR_4[VAR_7]))
   return ((void*)0);
 }

 VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, 0);

 while (VAR_5) {
  struct commit *VAR_8 = FUNC_3(&VAR_5);
  if (!(VAR_8->object.flags & VAR_0))
   FUNC_1(VAR_8, &VAR_6);
 }
 return VAR_6;
}
