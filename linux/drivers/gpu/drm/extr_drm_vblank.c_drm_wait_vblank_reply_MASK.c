
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct timespec64 {int tv_nsec; scalar_t__ tv_sec; } ;
struct drm_wait_vblank_reply {int tval_usec; scalar_t__ tval_sec; int sequence; } ;
struct drm_device {int dummy; } ;
typedef int ktime_t ;


 int FUNC_0 (struct drm_device*,unsigned int,int *) ;
 struct timespec64 FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct drm_device *VAR_0, unsigned int VAR_1,
      struct drm_wait_vblank_reply *VAR_2)
{
 ktime_t VAR_3;
 struct timespec64 VAR_4;






 VAR_2->sequence = FUNC_0(VAR_0, VAR_1, &VAR_3);
 VAR_4 = FUNC_1(VAR_3);
 VAR_2->tval_sec = (u32)VAR_4.tv_sec;
 VAR_2->tval_usec = VAR_4.tv_nsec / 1000;
}
