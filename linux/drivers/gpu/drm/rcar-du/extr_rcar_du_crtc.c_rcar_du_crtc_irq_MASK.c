
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rcar_du_device {TYPE_1__* info; } ;
struct rcar_du_crtc {scalar_t__ vblank_count; int crtc; int vblank_lock; int vblank_wait; struct rcar_du_device* dev; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int gen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct rcar_du_crtc*) ;
 int FUNC_2 (struct rcar_du_crtc*,int ) ;
 int FUNC_3 (struct rcar_du_crtc*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_6, void *VAR_7)
{
 struct rcar_du_crtc *VAR_8 = VAR_7;
 struct rcar_du_device *VAR_9 = VAR_8->dev;
 irqreturn_t VAR_10 = VAR_5;
 u32 VAR_11;

 FUNC_4(&VAR_8->vblank_lock);

 VAR_11 = FUNC_2(VAR_8, VAR_2);
 FUNC_3(VAR_8, VAR_0, VAR_11 & VAR_1);

 if (VAR_11 & VAR_3) {





  if (VAR_8->vblank_count) {
   if (--VAR_8->vblank_count == 0)
    FUNC_6(&VAR_8->vblank_wait);
  }
 }

 FUNC_5(&VAR_8->vblank_lock);

 if (VAR_11 & VAR_3) {
  if (VAR_9->info->gen < 3) {
   FUNC_0(&VAR_8->crtc);
   FUNC_1(VAR_8);
  }

  VAR_10 = VAR_4;
 }

 return VAR_10;
}
