
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ttm_object_device {int idr; } ;
struct ttm_base_object {int refcount; } ;


 struct ttm_base_object* FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

struct ttm_base_object *
FUNC_4(struct ttm_object_device *VAR_0, uint32_t VAR_1)
{
 struct ttm_base_object *VAR_2;

 FUNC_2();
 VAR_2 = FUNC_0(&VAR_0->idr, VAR_1);

 if (VAR_2 && !FUNC_1(&VAR_2->refcount))
  VAR_2 = ((void*)0);
 FUNC_3();

 return VAR_2;
}
