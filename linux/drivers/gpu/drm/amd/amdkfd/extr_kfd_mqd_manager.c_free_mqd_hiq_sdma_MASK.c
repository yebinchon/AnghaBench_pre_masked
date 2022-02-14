
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mqd_manager {int dummy; } ;
struct kfd_mem_obj {int gtt_mem; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct kfd_mem_obj*) ;

void FUNC_2(struct mqd_manager *VAR_0, void *VAR_1,
   struct kfd_mem_obj *VAR_2)
{
 FUNC_0(!VAR_2->gtt_mem);
 FUNC_1(VAR_2);
}
