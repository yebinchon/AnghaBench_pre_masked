
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct timespec64 {int tv_nsec; scalar_t__ tv_sec; } ;
struct drm_display_mode {scalar_t__ crtc_clock; int crtc_htotal; } ;
struct drm_vblank_crtc {struct drm_display_mode hwmode; } ;
struct drm_device {unsigned int num_crtcs; TYPE_1__* driver; struct drm_vblank_crtc* vblank; } ;
struct drm_crtc {struct drm_display_mode hwmode; } ;
typedef int ktime_t ;
struct TYPE_2__ {int (* get_scanout_position ) (struct drm_device*,unsigned int,int,int*,int*,int *,int *,struct drm_display_mode const*) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*,unsigned int,...) ;
 int FUNC_1 (char*,unsigned int,int,int,int ,int,int ,int,int,int) ;
 int FUNC_2 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (long long,scalar_t__) ;
 int FUNC_5 (struct drm_device*,int ) ;
 struct drm_crtc* FUNC_6 (struct drm_device*,unsigned int) ;
 int VAR_3 ;
 scalar_t__ FUNC_7 (struct drm_device*) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ) ;
 struct timespec64 FUNC_10 (int ) ;
 int FUNC_11 (struct drm_device*,unsigned int,int,int*,int*,int *,int *,struct drm_display_mode const*) ;

bool FUNC_12(struct drm_device *VAR_4,
        unsigned int VAR_5,
        int *VAR_6,
        ktime_t *VAR_7,
        bool VAR_8)
{
 struct timespec64 VAR_9, VAR_10;
 ktime_t VAR_11, VAR_12;
 bool VAR_13;
 struct drm_crtc *VAR_14;
 const struct drm_display_mode *VAR_15;
 struct drm_vblank_crtc *VAR_16 = &VAR_4->vblank[VAR_5];
 int VAR_17, VAR_18, VAR_19;
 int VAR_20, VAR_21;

 if (!FUNC_5(VAR_4, VAR_0))
  return 0;

 VAR_14 = FUNC_6(VAR_4, VAR_5);

 if (VAR_5 >= VAR_4->num_crtcs || !VAR_14) {
  FUNC_2("Invalid crtc %u\n", VAR_5);
  return 0;
 }


 if (!VAR_4->driver->get_scanout_position) {
  FUNC_2("Called from driver w/o get_scanout_position()!?\n");
  return 0;
 }

 if (FUNC_7(VAR_4))
  VAR_15 = &VAR_16->hwmode;
 else
  VAR_15 = &VAR_14->hwmode;




 if (VAR_15->crtc_clock == 0) {
  FUNC_0("crtc %u: Noop due to uninitialized mode.\n", VAR_5);
  FUNC_3(FUNC_7(VAR_4));

  return 0;
 }
 for (VAR_19 = 0; VAR_19 < VAR_1; VAR_19++) {




  VAR_13 = VAR_4->driver->get_scanout_position(VAR_4, VAR_5,
              VAR_8,
              &VAR_17, &VAR_18,
              &VAR_11, &VAR_12,
              VAR_15);


  if (!VAR_13) {
   FUNC_0("crtc %u : scanoutpos query failed.\n",
      VAR_5);
   return 0;
  }


  VAR_21 = FUNC_9(VAR_12) - FUNC_9(VAR_11);


  if (VAR_21 <= *VAR_6)
   break;
 }


 if (VAR_19 == VAR_1) {
  FUNC_0("crtc %u: Noisy timestamp %d us > %d us [%d reps].\n",
     VAR_5, VAR_21/1000, *VAR_6/1000, VAR_19);
 }


 *VAR_6 = VAR_21;





 VAR_20 = FUNC_4(1000000LL * (VAR_17 * VAR_15->crtc_htotal + VAR_18),
      VAR_15->crtc_clock);




 *VAR_7 = FUNC_8(VAR_12, VAR_20);

 if ((VAR_3 & VAR_2) == 0)
  return 1;

 VAR_9 = FUNC_10(VAR_12);
 VAR_10 = FUNC_10(*VAR_7);

 FUNC_1("crtc %u : v p(%d,%d)@ %lld.%06ld -> %lld.%06ld [e %d us, %d rep]\n",
        VAR_5, VAR_18, VAR_17,
        (u64)VAR_9.tv_sec, VAR_9.tv_nsec / 1000,
        (u64)VAR_10.tv_sec, VAR_10.tv_nsec / 1000,
        VAR_21 / 1000, VAR_19);

 return 1;
}
