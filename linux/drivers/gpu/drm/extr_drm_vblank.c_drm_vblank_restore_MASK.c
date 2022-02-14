
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct drm_vblank_crtc {int framedur_ns; scalar_t__ last; int time; } ;
struct drm_device {unsigned int num_crtcs; struct drm_vblank_crtc* vblank; int vblank_time_lock; int vbl_lock; } ;
typedef int ktime_t ;


 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (char*,scalar_t__,int ,int,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int,char*) ;
 scalar_t__ FUNC_4 (struct drm_device*,unsigned int) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;
 int FUNC_6 (struct drm_device*,unsigned int,int *,int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct drm_device*,unsigned int,scalar_t__,int ,scalar_t__) ;

void FUNC_10(struct drm_device *VAR_3, unsigned int VAR_4)
{
 ktime_t VAR_5;
 struct drm_vblank_crtc *VAR_6;
 int VAR_7;
 u64 VAR_8;
 u32 VAR_9, VAR_10 = 1;
 int VAR_11 = VAR_0;

 if (FUNC_2(VAR_4 >= VAR_3->num_crtcs))
  return;

 FUNC_5(&VAR_3->vbl_lock);
 FUNC_5(&VAR_3->vblank_time_lock);

 VAR_6 = &VAR_3->vblank[VAR_4];
 FUNC_3((VAR_2 & VAR_1) && !VAR_6->framedur_ns,
    "Cannot compute missed vblanks without frame duration\n");
 VAR_7 = VAR_6->framedur_ns;

 do {
  VAR_9 = FUNC_4(VAR_3, VAR_4);
  FUNC_6(VAR_3, VAR_4, &VAR_5, 0);
 } while (VAR_9 != FUNC_4(VAR_3, VAR_4) && --VAR_11 > 0);

 VAR_8 = FUNC_8(FUNC_7(VAR_5, VAR_6->time));
 if (VAR_7)
  VAR_10 = FUNC_0(VAR_8, VAR_7);


 FUNC_1("missed %d vblanks in %lld ns, frame duration=%d ns, hw_diff=%d\n",
        VAR_10, VAR_8, VAR_7, VAR_9 - VAR_6->last);
 FUNC_9(VAR_3, VAR_4, VAR_10, VAR_5, VAR_9);
}
