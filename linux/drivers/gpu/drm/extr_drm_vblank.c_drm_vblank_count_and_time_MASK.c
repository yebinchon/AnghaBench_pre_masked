
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct drm_vblank_crtc {int time; int count; int seqlock; } ;
struct drm_device {unsigned int num_crtcs; struct drm_vblank_crtc* vblank; } ;
typedef int ktime_t ;


 scalar_t__ FUNC_0 (int) ;
 unsigned int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,unsigned int) ;

__attribute__((used)) static u64 FUNC_3(struct drm_device *VAR_0, unsigned int VAR_1,
         ktime_t *VAR_2)
{
 struct drm_vblank_crtc *VAR_3 = &VAR_0->vblank[VAR_1];
 u64 VAR_4;
 unsigned int VAR_5;

 if (FUNC_0(VAR_1 >= VAR_0->num_crtcs)) {
  *VAR_2 = 0;
  return 0;
 }

 do {
  VAR_5 = FUNC_1(&VAR_3->seqlock);
  VAR_4 = VAR_3->count;
  *VAR_2 = VAR_3->time;
 } while (FUNC_2(&VAR_3->seqlock, VAR_5));

 return VAR_4;
}
