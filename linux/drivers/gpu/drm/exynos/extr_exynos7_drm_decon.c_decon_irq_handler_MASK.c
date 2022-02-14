
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct decon_context {int wait_vsync_queue; int wait_vsync_event; TYPE_1__* crtc; scalar_t__ i80_if; int drm_dev; scalar_t__ regs; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_4, void *VAR_5)
{
 struct decon_context *VAR_6 = (struct decon_context *)VAR_5;
 u32 VAR_7, VAR_8;

 VAR_7 = FUNC_3(VAR_6->regs + VAR_1);

 VAR_8 = VAR_6->i80_if ? VAR_3 : VAR_2;
 if (VAR_7 & VAR_8)
  FUNC_5(VAR_8, VAR_6->regs + VAR_1);


 if (!VAR_6->drm_dev)
  goto out;

 if (!VAR_6->i80_if) {
  FUNC_2(&VAR_6->crtc->base);


  if (FUNC_0(&VAR_6->wait_vsync_event)) {
   FUNC_1(&VAR_6->wait_vsync_event, 0);
   FUNC_4(&VAR_6->wait_vsync_queue);
  }
 }
out:
 return VAR_0;
}
