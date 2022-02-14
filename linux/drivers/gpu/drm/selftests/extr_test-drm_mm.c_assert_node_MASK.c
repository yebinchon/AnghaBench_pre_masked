
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct drm_mm_node {scalar_t__ size; unsigned long color; int start; struct drm_mm* mm; } ;
struct drm_mm {int dummy; } ;


 int FUNC_0 (struct drm_mm_node*) ;
 scalar_t__ FUNC_1 (struct drm_mm_node*,scalar_t__) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static bool FUNC_3(struct drm_mm_node *VAR_0, struct drm_mm *VAR_1,
   u64 VAR_2, u64 VAR_3, unsigned long VAR_4)
{
 bool VAR_5 = 1;

 if (!FUNC_0(VAR_0) || VAR_0->mm != VAR_1) {
  FUNC_2("node not allocated\n");
  VAR_5 = 0;
 }

 if (VAR_0->size != VAR_2) {
  FUNC_2("node has wrong size, found %llu, expected %llu\n",
         VAR_0->size, VAR_2);
  VAR_5 = 0;
 }

 if (FUNC_1(VAR_0, VAR_3)) {
  FUNC_2("node is misaligned, start %llx rem %llu, expected alignment %llu\n",
         VAR_0->start, FUNC_1(VAR_0, VAR_3), VAR_3);
  VAR_5 = 0;
 }

 if (VAR_0->color != VAR_4) {
  FUNC_2("node has wrong color, found %lu, expected %lu\n",
         VAR_0->color, VAR_4);
  VAR_5 = 0;
 }

 return VAR_5;
}
