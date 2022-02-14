
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ttm_placement {int dummy; } ;
struct TYPE_2__ {int mem_type; } ;
struct ttm_buffer_object {TYPE_1__ mem; } ;
struct nouveau_bo {struct ttm_placement placement; } ;


 int VAR_0 ;
 int VAR_1 ;

 struct nouveau_bo* FUNC_0 (struct ttm_buffer_object*) ;
 int FUNC_1 (struct nouveau_bo*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct ttm_buffer_object *VAR_2, struct ttm_placement *VAR_3)
{
 struct nouveau_bo *VAR_4 = FUNC_0(VAR_2);

 switch (VAR_2->mem.mem_type) {
 case 128:
  FUNC_1(VAR_4, VAR_1,
      VAR_0);
  break;
 default:
  FUNC_1(VAR_4, VAR_0, 0);
  break;
 }

 *VAR_3 = VAR_4->placement;
}
