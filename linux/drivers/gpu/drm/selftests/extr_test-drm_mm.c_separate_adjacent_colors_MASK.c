
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct drm_mm_node {unsigned long color; scalar_t__ allocated; } ;


 struct drm_mm_node* FUNC_0 (struct drm_mm_node const*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(const struct drm_mm_node *VAR_1,
         unsigned long VAR_2,
         u64 *VAR_3,
         u64 *VAR_4)
{
 if (VAR_1->allocated && VAR_1->color != VAR_2)
  ++*VAR_3;

 VAR_1 = FUNC_0(VAR_1, VAR_0);
 if (VAR_1->allocated && VAR_1->color != VAR_2)
  --*VAR_4;
}
