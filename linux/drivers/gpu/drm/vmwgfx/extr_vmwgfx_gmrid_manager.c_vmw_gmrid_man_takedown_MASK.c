
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmwgfx_gmrid_man {int gmr_ida; } ;
struct ttm_mem_type_manager {scalar_t__ priv; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct vmwgfx_gmrid_man*) ;

__attribute__((used)) static int FUNC_2(struct ttm_mem_type_manager *VAR_0)
{
 struct vmwgfx_gmrid_man *VAR_1 =
  (struct vmwgfx_gmrid_man *)VAR_0->priv;

 if (VAR_1) {
  FUNC_0(&VAR_1->gmr_ida);
  FUNC_1(VAR_1);
 }
 return 0;
}
