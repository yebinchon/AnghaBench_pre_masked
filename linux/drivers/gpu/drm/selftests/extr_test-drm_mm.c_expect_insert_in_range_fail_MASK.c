
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct drm_mm_node {int size; int start; } ;
struct drm_mm {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_mm*,struct drm_mm_node*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct drm_mm_node*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*,int,int,int ,int ,...) ;

__attribute__((used)) static bool FUNC_4(struct drm_mm *VAR_1,
     u64 VAR_2,
     u64 VAR_3,
     u64 VAR_4)
{
 struct drm_mm_node VAR_5 = {};
 int VAR_6;

 VAR_6 = FUNC_0(VAR_1, &VAR_5,
       VAR_2, 0, 0,
       VAR_3, VAR_4,
       0);
 if (FUNC_2(VAR_6 == -VAR_0))
  return 1;

 if (!VAR_6) {
  FUNC_3("impossible insert succeeded, node %llx + %llu, range [%llx, %llx]\n",
         VAR_5.start, VAR_5.size, VAR_3, VAR_4);
  FUNC_1(&VAR_5);
 } else {
  FUNC_3("impossible insert failed with wrong error %d [expected %d], size %llu, range [%llx, %llx]\n",
         VAR_6, -VAR_0, VAR_2, VAR_3, VAR_4);
 }

 return 0;
}
