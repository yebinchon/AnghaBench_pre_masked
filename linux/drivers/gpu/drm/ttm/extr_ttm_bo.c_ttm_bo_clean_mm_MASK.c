
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ttm_mem_type_manager {int has_type; int use_type; int * move; TYPE_1__* func; } ;
struct ttm_bo_device {struct ttm_mem_type_manager* man; } ;
struct TYPE_2__ {int (* takedown ) (struct ttm_mem_type_manager*) ;} ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct ttm_mem_type_manager*) ;
 int FUNC_3 (struct ttm_bo_device*,unsigned int) ;

int FUNC_4(struct ttm_bo_device *VAR_2, unsigned VAR_3)
{
 struct ttm_mem_type_manager *VAR_4;
 int VAR_5 = -VAR_0;

 if (VAR_3 >= VAR_1) {
  FUNC_1("Illegal memory type %d\n", VAR_3);
  return VAR_5;
 }
 VAR_4 = &VAR_2->man[VAR_3];

 if (!VAR_4->has_type) {
  FUNC_1("Trying to take down uninitialized memory manager type %u\n",
         VAR_3);
  return VAR_5;
 }

 VAR_4->use_type = 0;
 VAR_4->has_type = 0;

 VAR_5 = 0;
 if (VAR_3 > 0) {
  VAR_5 = FUNC_3(VAR_2, VAR_3);
  if (VAR_5) {
   FUNC_1("Cleanup eviction failed\n");
   return VAR_5;
  }

  VAR_5 = (*VAR_4->func->takedown)(VAR_4);
 }

 FUNC_0(VAR_4->move);
 VAR_4->move = ((void*)0);

 return VAR_5;
}
