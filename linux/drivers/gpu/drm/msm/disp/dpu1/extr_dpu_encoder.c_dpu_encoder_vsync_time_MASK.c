
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct drm_encoder {TYPE_2__* crtc; } ;
struct drm_display_mode {int vtotal; } ;
struct dpu_encoder_virt {TYPE_4__* cur_master; } ;
typedef int ktime_t ;
struct TYPE_7__ {int (* get_line_count ) (TYPE_4__*) ;} ;
struct TYPE_8__ {TYPE_3__ ops; } ;
struct TYPE_6__ {TYPE_1__* state; } ;
struct TYPE_5__ {struct drm_display_mode adjusted_mode; } ;


 int FUNC_0 (struct dpu_encoder_virt*,char*,int,int,int,int ,int ) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int FUNC_2 (struct dpu_encoder_virt*,struct drm_display_mode*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_4__*) ;
 struct dpu_encoder_virt* FUNC_7 (struct drm_encoder*) ;

int FUNC_8(struct drm_encoder *VAR_1, ktime_t *VAR_2)
{
 struct drm_display_mode *VAR_3;
 struct dpu_encoder_virt *VAR_4;
 u32 VAR_5;
 u32 VAR_6;
 u32 VAR_7, VAR_8;
 ktime_t VAR_9;

 VAR_4 = FUNC_7(VAR_1);

 if (!VAR_1->crtc || !VAR_1->crtc->state) {
  FUNC_1("crtc/crtc state object is NULL\n");
  return -VAR_0;
 }
 VAR_3 = &VAR_1->crtc->state->adjusted_mode;

 VAR_6 = FUNC_2(VAR_4, VAR_3);
 if (!VAR_6)
  return -VAR_0;

 VAR_5 = VAR_4->cur_master->ops.get_line_count(VAR_4->cur_master);

 VAR_7 = VAR_3->vtotal;
 if (VAR_5 >= VAR_7)
  VAR_8 = VAR_6 * VAR_7;
 else
  VAR_8 = VAR_6 * (VAR_7 - VAR_5);

 if (VAR_8 == 0) {
  FUNC_1("time to vsync should not be zero, vtotal=%d\n",
    VAR_7);
  return -VAR_0;
 }

 VAR_9 = FUNC_4();
 *VAR_2 = FUNC_3(VAR_9, VAR_8);

 FUNC_0(VAR_4,
   "cur_line=%u vtotal=%u time_to_vsync=%u, cur_time=%lld, wakeup_time=%lld\n",
   VAR_5, VAR_7, VAR_8,
   FUNC_5(VAR_9),
   FUNC_5(*VAR_2));
 return 0;
}
