
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_validate_buffer {int head; } ;
struct kgd_mem {struct ttm_validate_buffer validate_list; } ;
struct amdkfd_process_info {int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct kgd_mem *VAR_0,
  struct amdkfd_process_info *VAR_1)
{
 struct ttm_validate_buffer *VAR_2;

 VAR_2 = &VAR_0->validate_list;
 FUNC_1(&VAR_1->lock);
 FUNC_0(&VAR_2->head);
 FUNC_2(&VAR_1->lock);
}
