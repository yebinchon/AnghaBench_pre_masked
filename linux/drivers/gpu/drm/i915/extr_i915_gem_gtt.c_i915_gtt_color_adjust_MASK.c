
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct drm_mm_node {unsigned long color; scalar_t__ allocated; } ;


 scalar_t__ VAR_0 ;
 struct drm_mm_node* FUNC_0 (struct drm_mm_node const*,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(const struct drm_mm_node *VAR_2,
      unsigned long VAR_3,
      u64 *VAR_4,
      u64 *VAR_5)
{
 if (VAR_2->allocated && VAR_2->color != VAR_3)
  *VAR_4 += VAR_0;






 VAR_2 = FUNC_0(VAR_2, VAR_1);
 if (VAR_2->color != VAR_3)
  *VAR_5 -= VAR_0;
}
