
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_buffer_object {int num_pages; } ;
struct vmw_buffer_object {int map; struct ttm_buffer_object base; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct ttm_buffer_object*,int ,int ,int *) ;
 void* FUNC_2 (int *,int*) ;

void *FUNC_3(struct vmw_buffer_object *VAR_0)
{
 struct ttm_buffer_object *VAR_1 = &VAR_0->base;
 bool VAR_2;
 void *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_2(&VAR_0->map, &VAR_2);
 if (VAR_3)
  return VAR_3;

 VAR_4 = FUNC_1(VAR_1, 0, VAR_1->num_pages, &VAR_0->map);
 if (VAR_4)
  FUNC_0("Buffer object map failed: %d.\n", VAR_4);

 return FUNC_2(&VAR_0->map, &VAR_2);
}
