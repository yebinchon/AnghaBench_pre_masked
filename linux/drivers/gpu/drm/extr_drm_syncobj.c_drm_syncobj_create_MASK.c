
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct drm_syncobj {int lock; int cb_list; int refcount; } ;
struct dma_fence {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct drm_syncobj*) ;
 int FUNC_2 (struct drm_syncobj*,struct dma_fence*) ;
 int FUNC_3 (int *) ;
 struct drm_syncobj* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct drm_syncobj **VAR_3, uint32_t VAR_4,
         struct dma_fence *VAR_5)
{
 struct drm_syncobj *VAR_6;

 VAR_6 = FUNC_4(sizeof(struct drm_syncobj), VAR_2);
 if (!VAR_6)
  return -VAR_1;

 FUNC_3(&VAR_6->refcount);
 FUNC_0(&VAR_6->cb_list);
 FUNC_5(&VAR_6->lock);

 if (VAR_4 & VAR_0)
  FUNC_1(VAR_6);

 if (VAR_5)
  FUNC_2(VAR_6, VAR_5);

 *VAR_3 = VAR_6;
 return 0;
}
