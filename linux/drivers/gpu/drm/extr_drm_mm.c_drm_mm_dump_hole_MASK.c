
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct drm_printer {int dummy; } ;
struct drm_mm_node {scalar_t__ hole_size; } ;


 scalar_t__ FUNC_0 (struct drm_mm_node const*) ;
 int FUNC_1 (struct drm_printer*,char*,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static u64 FUNC_2(struct drm_printer *VAR_0, const struct drm_mm_node *VAR_1)
{
 u64 VAR_2, VAR_3;

 VAR_3 = VAR_1->hole_size;
 if (VAR_3) {
  VAR_2 = FUNC_0(VAR_1);
  FUNC_1(VAR_0, "%#018llx-%#018llx: %llu: free\n",
      VAR_2, VAR_2 + VAR_3, VAR_3);
 }

 return VAR_3;
}
