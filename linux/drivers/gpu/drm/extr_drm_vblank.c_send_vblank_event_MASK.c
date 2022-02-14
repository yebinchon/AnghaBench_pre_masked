
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* u64 ;
struct timespec64 {int tv_nsec; int tv_sec; } ;
struct TYPE_10__ {int file_priv; } ;
struct TYPE_8__ {int time_ns; void* sequence; } ;
struct TYPE_7__ {int tv_usec; int tv_sec; void* sequence; } ;
struct TYPE_6__ {int type; } ;
struct TYPE_9__ {TYPE_3__ seq; TYPE_2__ vbl; TYPE_1__ base; } ;
struct drm_pending_vblank_event {TYPE_5__ base; int pipe; TYPE_4__ event; } ;
struct drm_device {int dummy; } ;
typedef int ktime_t ;





 int FUNC_0 (struct drm_device*,TYPE_5__*) ;
 int FUNC_1 (int ) ;
 struct timespec64 FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,void*) ;

__attribute__((used)) static void FUNC_4(struct drm_device *VAR_0,
  struct drm_pending_vblank_event *VAR_1,
  u64 VAR_2, ktime_t VAR_3)
{
 struct timespec64 VAR_4;

 switch (VAR_1->event.base.type) {
 case 128:
 case 129:
  VAR_4 = FUNC_2(VAR_3);
  VAR_1->event.vbl.sequence = VAR_2;





  VAR_1->event.vbl.tv_sec = VAR_4.tv_sec;
  VAR_1->event.vbl.tv_usec = VAR_4.tv_nsec / 1000;
  break;
 case 130:
  if (VAR_2)
   VAR_1->event.seq.sequence = VAR_2;
  VAR_1->event.seq.time_ns = FUNC_1(VAR_3);
  break;
 }
 FUNC_3(VAR_1->base.file_priv, VAR_1->pipe, VAR_2);
 FUNC_0(VAR_0, &VAR_1->base);
}
