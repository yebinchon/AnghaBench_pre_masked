
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_mm_node {int size; int start; int color; } ;
struct TYPE_2__ {int size; int start; int color; scalar_t__ allocated; } ;


 int FUNC_0 (struct drm_mm_node const*) ;
 TYPE_1__* FUNC_1 (struct drm_mm_node const*,int ) ;
 int VAR_0 ;
 int FUNC_2 (char*,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static bool FUNC_3(const struct drm_mm_node *VAR_1)
{
 if (!FUNC_0(VAR_1) &&
     FUNC_1(VAR_1, VAR_0)->allocated) {
  FUNC_2("colors abutt; %ld [%llx + %llx] is next to %ld [%llx + %llx]!\n",
         VAR_1->color, VAR_1->start, VAR_1->size,
         FUNC_1(VAR_1, VAR_0)->color,
         FUNC_1(VAR_1, VAR_0)->start,
         FUNC_1(VAR_1, VAR_0)->size);
  return 1;
 }

 return 0;
}
