
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_mm_node {int start; int size; } ;
struct drm_mm {int dummy; } ;
typedef int nodes ;


 int FUNC_0 (struct drm_mm*,int ,int) ;
 int FUNC_1 (struct drm_mm*,struct drm_mm_node*) ;
 int FUNC_2 (struct drm_mm_node*,int ,int) ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (struct drm_mm*) ;

__attribute__((used)) static int FUNC_5(void *VAR_0)
{
 struct drm_mm VAR_1;
 struct drm_mm_node VAR_2[2];
 int VAR_3;





 FUNC_0(&VAR_1, 0, 4096);

 FUNC_2(VAR_2, 0, sizeof(VAR_2));
 VAR_2[0].start = 512;
 VAR_2[0].size = 1024;
 VAR_3 = FUNC_1(&VAR_1, &VAR_2[0]);
 if (VAR_3) {
  FUNC_3("failed to reserve node[0] {start=%lld, size=%lld)\n",
         VAR_2[0].start, VAR_2[0].size);
  return VAR_3;
 }

 VAR_2[1].size = 1024;
 VAR_2[1].start = 4096 - 512 - VAR_2[1].size;
 VAR_3 = FUNC_1(&VAR_1, &VAR_2[1]);
 if (VAR_3) {
  FUNC_3("failed to reserve node[1] {start=%lld, size=%lld)\n",
         VAR_2[1].start, VAR_2[1].size);
  return VAR_3;
 }

 FUNC_4(&VAR_1);
 return 0;
}
