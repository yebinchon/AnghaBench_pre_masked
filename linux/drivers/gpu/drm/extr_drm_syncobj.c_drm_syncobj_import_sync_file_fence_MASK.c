
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_syncobj {int dummy; } ;
struct drm_file {int dummy; } ;
struct dma_fence {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dma_fence*) ;
 struct drm_syncobj* FUNC_1 (struct drm_file*,int) ;
 int FUNC_2 (struct drm_syncobj*) ;
 int FUNC_3 (struct drm_syncobj*,struct dma_fence*) ;
 struct dma_fence* FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct drm_file *VAR_2,
           int VAR_3, int VAR_4)
{
 struct dma_fence *VAR_5 = FUNC_4(VAR_3);
 struct drm_syncobj *VAR_6;

 if (!VAR_5)
  return -VAR_0;

 VAR_6 = FUNC_1(VAR_2, VAR_4);
 if (!VAR_6) {
  FUNC_0(VAR_5);
  return -VAR_1;
 }

 FUNC_3(VAR_6, VAR_5);
 FUNC_0(VAR_5);
 FUNC_2(VAR_6);
 return 0;
}
