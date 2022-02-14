
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv04_page_flip_state {int head; } ;
struct nouveau_fence_chan {int flip; } ;
struct nouveau_fence {int dummy; } ;
struct nouveau_drm {struct drm_device* dev; } ;
struct nouveau_channel {struct nouveau_drm* drm; struct nouveau_fence_chan* fence; } ;
struct nouveau_bo {int dummy; } ;
struct drm_device {int event_lock; } ;


 int FUNC_0 (struct nouveau_channel*,int ,int ,int) ;
 int FUNC_1 (struct nouveau_channel*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct nouveau_channel*,int) ;
 int FUNC_3 (struct nouveau_channel*,int) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct nouveau_channel*,int,struct nouveau_fence**) ;
 int FUNC_7 (struct nouveau_bo*,struct nouveau_channel*,int,int) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_10(struct nouveau_channel *VAR_2,
      struct nouveau_bo *VAR_3,
      struct nouveau_bo *VAR_4,
      struct nv04_page_flip_state *VAR_5,
      struct nouveau_fence **VAR_6)
{
 struct nouveau_fence_chan *VAR_7 = VAR_2->fence;
 struct nouveau_drm *VAR_8 = VAR_2->drm;
 struct drm_device *VAR_9 = VAR_8->dev;
 unsigned long VAR_10;
 int VAR_11;


 FUNC_8(&VAR_9->event_lock, VAR_10);
 FUNC_4(&VAR_5->head, &VAR_7->flip);
 FUNC_9(&VAR_9->event_lock, VAR_10);


 VAR_11 = FUNC_7(VAR_3, VAR_2, 0, 0);
 if (VAR_11)
  goto fail;


 VAR_11 = FUNC_3(VAR_2, 2);
 if (VAR_11)
  goto fail;

 FUNC_0(VAR_2, VAR_1, VAR_0, 1);
 FUNC_2 (VAR_2, 0x00000000);
 FUNC_1 (VAR_2);

 VAR_11 = FUNC_6(VAR_2, 0, VAR_6);
 if (VAR_11)
  goto fail;

 return 0;
fail:
 FUNC_8(&VAR_9->event_lock, VAR_10);
 FUNC_5(&VAR_5->head);
 FUNC_9(&VAR_9->event_lock, VAR_10);
 return VAR_11;
}
