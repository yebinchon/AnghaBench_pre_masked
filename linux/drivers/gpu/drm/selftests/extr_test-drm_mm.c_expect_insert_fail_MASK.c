
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct drm_mm_node {int size; int start; } ;
struct drm_mm {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_mm*,struct drm_mm_node*,int ) ;
 int FUNC_1 (struct drm_mm_node*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*,int,int,...) ;

__attribute__((used)) static bool FUNC_4(struct drm_mm *VAR_1, u64 VAR_2)
{
 struct drm_mm_node VAR_3 = {};
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1, &VAR_3, VAR_2);
 if (FUNC_2(VAR_4 == -VAR_0))
  return 1;

 if (!VAR_4) {
  FUNC_3("impossible insert succeeded, node %llu + %llu\n",
         VAR_3.start, VAR_3.size);
  FUNC_1(&VAR_3);
 } else {
  FUNC_3("impossible insert failed with wrong error %d [expected %d], size %llu\n",
         VAR_4, -VAR_0, VAR_2);
 }
 return 0;
}
