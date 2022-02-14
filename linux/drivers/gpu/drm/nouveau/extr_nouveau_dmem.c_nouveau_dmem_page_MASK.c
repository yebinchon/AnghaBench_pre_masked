
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct nouveau_drm {scalar_t__ dmem; } ;


 scalar_t__ FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (struct page*) ;

__attribute__((used)) static inline bool
FUNC_2(struct nouveau_drm *VAR_0, struct page *VAR_1)
{
 return FUNC_0(VAR_1) && VAR_0->dmem == FUNC_1(VAR_1);
}
