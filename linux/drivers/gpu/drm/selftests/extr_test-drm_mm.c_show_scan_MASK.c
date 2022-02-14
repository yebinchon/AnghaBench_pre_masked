
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_mm_scan {int color; int alignment; int size; int hit_end; int hit_start; } ;


 int FUNC_0 (char*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(const struct drm_mm_scan *VAR_0)
{
 FUNC_0("scan: hit [%llx, %llx], size=%lld, align=%lld, color=%ld\n",
  VAR_0->hit_start, VAR_0->hit_end,
  VAR_0->size, VAR_0->alignment, VAR_0->color);
}
