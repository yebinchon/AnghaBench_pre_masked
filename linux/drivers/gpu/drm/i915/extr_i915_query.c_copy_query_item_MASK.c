
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_query_item {scalar_t__ length; int data_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (void*,int ,size_t) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(void *VAR_2, size_t VAR_3,
      u32 VAR_4,
      struct drm_i915_query_item *VAR_5)
{
 if (VAR_5->length == 0)
  return VAR_4;

 if (VAR_5->length < VAR_4)
  return -VAR_1;

 if (FUNC_1(VAR_2, FUNC_2(VAR_5->data_ptr),
      VAR_3))
  return -VAR_0;

 if (!FUNC_0(FUNC_2(VAR_5->data_ptr),
         VAR_4))
  return -VAR_0;

 return 0;
}
