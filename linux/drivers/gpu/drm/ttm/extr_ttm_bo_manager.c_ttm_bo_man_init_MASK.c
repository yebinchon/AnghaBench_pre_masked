
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_range_manager {int lock; int mm; } ;
struct ttm_mem_type_manager {struct ttm_range_manager* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,unsigned long) ;
 struct ttm_range_manager* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct ttm_mem_type_manager *VAR_2,
      unsigned long VAR_3)
{
 struct ttm_range_manager *VAR_4;

 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 FUNC_0(&VAR_4->mm, 0, VAR_3);
 FUNC_2(&VAR_4->lock);
 VAR_2->priv = VAR_4;
 return 0;
}
