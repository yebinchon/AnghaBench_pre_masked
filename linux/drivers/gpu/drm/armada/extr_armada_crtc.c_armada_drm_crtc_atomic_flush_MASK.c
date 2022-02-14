
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_crtc_state {int dummy; } ;
struct TYPE_2__ {int id; } ;
struct drm_crtc {int state; int name; TYPE_1__ base; } ;
struct armada_crtc {int update_pending; int irq_lock; int regs; int regs_idx; } ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct armada_crtc*,int ) ;
 int FUNC_2 (struct drm_crtc*) ;
 int FUNC_3 (struct armada_crtc*,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 struct armada_crtc* FUNC_6 (struct drm_crtc*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct drm_crtc *VAR_1,
      struct drm_crtc_state *VAR_2)
{
 struct armada_crtc *VAR_3 = FUNC_6(VAR_1);

 FUNC_0("[CRTC:%d:%s]\n", VAR_1->base.id, VAR_1->name);

 FUNC_4(VAR_3->regs, VAR_3->regs_idx);





 if (!FUNC_5(VAR_1->state)) {
  VAR_3->update_pending = 1;
  FUNC_2(VAR_1);
  FUNC_7(&VAR_3->irq_lock);
  FUNC_1(VAR_3, VAR_0);
  FUNC_8(&VAR_3->irq_lock);
 } else {
  FUNC_7(&VAR_3->irq_lock);
  FUNC_3(VAR_3, VAR_3->regs);
  FUNC_8(&VAR_3->irq_lock);
 }
}
