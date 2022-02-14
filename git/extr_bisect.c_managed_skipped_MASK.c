
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct commit_list {int dummy; } ;
struct TYPE_2__ {int nr; } ;


 struct commit_list* FUNC_0 (struct commit_list*,struct commit_list**,int ,int*,int*) ;
 struct commit_list* FUNC_1 (struct commit_list*,int) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static struct commit_list *FUNC_2(struct commit_list *VAR_1,
        struct commit_list **VAR_2)
{
 int VAR_3, VAR_4;

 *VAR_2 = ((void*)0);

 if (!VAR_0.nr)
  return VAR_1;

 VAR_1 = FUNC_0(VAR_1, VAR_2, 0, &VAR_3, &VAR_4);

 if (!VAR_4)
  return VAR_1;

 return FUNC_1(VAR_1, VAR_3);
}
