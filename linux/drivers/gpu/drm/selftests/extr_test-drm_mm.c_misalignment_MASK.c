
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct drm_mm_node {int start; } ;


 int FUNC_0 (int ,int ,int *) ;

__attribute__((used)) static u64 FUNC_1(struct drm_mm_node *VAR_0, u64 VAR_1)
{
 u64 VAR_2;

 if (!VAR_1)
  return 0;

 FUNC_0(VAR_0->start, VAR_1, &VAR_2);
 return VAR_2;
}
