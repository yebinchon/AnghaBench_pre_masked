
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ttm_object_file {int dummy; } ;
struct ttm_base_object {scalar_t__ refcount_release; } ;


 int VAR_0 ;
 struct ttm_base_object* FUNC_0 (int ) ;
 int FUNC_1 (char*,unsigned long) ;
 struct ttm_base_object* FUNC_2 (struct ttm_object_file*,scalar_t__) ;
 int FUNC_3 (struct ttm_base_object**) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static struct ttm_base_object *
FUNC_4(struct ttm_object_file *VAR_2, u32 VAR_3)
{
 struct ttm_base_object *VAR_4 = FUNC_2(VAR_2, VAR_3);

 if (!VAR_4) {
  FUNC_1("Invalid fence object handle 0x%08lx.\n",
         (unsigned long)VAR_3);
  return FUNC_0(-VAR_0);
 }

 if (VAR_4->refcount_release != VAR_1) {
  FUNC_1("Invalid fence object handle 0x%08lx.\n",
         (unsigned long)VAR_3);
  FUNC_3(&VAR_4);
  return FUNC_0(-VAR_0);
 }

 return VAR_4;
}
