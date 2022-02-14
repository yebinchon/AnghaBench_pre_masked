
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int mem_type; } ;
struct TYPE_3__ {int resv; } ;
struct ttm_buffer_object {int * ttm; TYPE_2__ mem; TYPE_1__ base; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 (struct ttm_buffer_object*) ;
 int FUNC_3 (struct ttm_buffer_object*) ;
 int FUNC_4 (struct ttm_buffer_object*,int,int) ;
 int FUNC_5 (struct ttm_buffer_object*,struct ttm_buffer_object**) ;

int FUNC_6(struct ttm_buffer_object *VAR_1)
{
 struct ttm_buffer_object *VAR_2;
 int VAR_3;

 VAR_3 = FUNC_5(VAR_1, &VAR_2);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_0(VAR_2->base.resv, VAR_1->base.resv);

 if (VAR_3)
  FUNC_4(VAR_1, 0, 0);

 FUNC_1(&VAR_1->mem, 0, sizeof(VAR_1->mem));
 VAR_1->mem.mem_type = VAR_0;
 VAR_1->ttm = ((void*)0);

 FUNC_3(VAR_2);
 FUNC_2(VAR_2);

 return 0;
}
