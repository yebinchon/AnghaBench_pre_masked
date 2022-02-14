
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rcar_du_group {int index; struct rcar_du_device* dev; } ;
struct rcar_du_device {struct rcar_du_crtc* crtcs; TYPE_1__* info; } ;
struct rcar_du_crtc {int dummy; } ;
struct TYPE_2__ {int channels_mask; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct rcar_du_crtc*,int,int) ;
 int FUNC_2 (struct rcar_du_group*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct rcar_du_group *VAR_3, bool VAR_4)
{
 struct rcar_du_device *VAR_5 = VAR_3->dev;
 if (VAR_5->info->channels_mask & FUNC_0(VAR_3->index * 2)) {
  struct rcar_du_crtc *VAR_6 = &VAR_3->dev->crtcs[VAR_3->index * 2];

  FUNC_1(VAR_6, VAR_2 | VAR_1,
        VAR_4 ? VAR_1 : VAR_2);
 } else {
  FUNC_2(VAR_3, VAR_0,
        VAR_4 ? VAR_1 : VAR_2);
 }
}
