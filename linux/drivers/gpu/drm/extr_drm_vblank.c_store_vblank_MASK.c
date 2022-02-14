
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct drm_vblank_crtc {int seqlock; int count; int time; scalar_t__ last; } ;
struct drm_device {int vblank_time_lock; struct drm_vblank_crtc* vblank; } ;
typedef int ktime_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct drm_device *VAR_0, unsigned int VAR_1,
    u32 VAR_2,
    ktime_t VAR_3, u32 VAR_4)
{
 struct drm_vblank_crtc *VAR_5 = &VAR_0->vblank[VAR_1];

 FUNC_0(&VAR_0->vblank_time_lock);

 VAR_5->last = VAR_4;

 FUNC_1(&VAR_5->seqlock);
 VAR_5->time = VAR_3;
 VAR_5->count += VAR_2;
 FUNC_2(&VAR_5->seqlock);
}
