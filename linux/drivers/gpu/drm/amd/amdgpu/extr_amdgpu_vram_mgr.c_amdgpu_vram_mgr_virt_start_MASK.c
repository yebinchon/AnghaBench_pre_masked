
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_mem_reg {unsigned long num_pages; int start; } ;
struct drm_mm_node {unsigned long start; unsigned long size; } ;


 int FUNC_0 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_1(struct ttm_mem_reg *VAR_0,
           struct drm_mm_node *VAR_1)
{
 unsigned long VAR_2;

 VAR_2 = VAR_1->start + VAR_1->size;
 if (VAR_2 > VAR_0->num_pages)
  VAR_2 -= VAR_0->num_pages;
 else
  VAR_2 = 0;
 VAR_0->start = FUNC_0(VAR_0->start, VAR_2);
}
