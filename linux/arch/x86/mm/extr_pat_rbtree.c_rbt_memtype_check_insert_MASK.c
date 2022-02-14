
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct memtype {int type; int end; int subtree_max_end; int start; } ;
typedef enum page_cache_mode { ____Placeholder_page_cache_mode } page_cache_mode ;


 int FUNC_0 (int *,int ,int ,int,int*) ;
 int FUNC_1 (int *,struct memtype*) ;
 int VAR_0 ;

int FUNC_2(struct memtype *VAR_1,
        enum page_cache_mode *VAR_2)
{
 int VAR_3 = 0;

 VAR_3 = FUNC_0(&VAR_0, VAR_1->start, VAR_1->end,
      VAR_1->type, VAR_2);

 if (!VAR_3) {
  if (VAR_2)
   VAR_1->type = *VAR_2;

  VAR_1->subtree_max_end = VAR_1->end;
  FUNC_1(&VAR_0, VAR_1);
 }
 return VAR_3;
}
