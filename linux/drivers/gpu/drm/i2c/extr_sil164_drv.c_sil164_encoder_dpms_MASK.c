
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sil164_priv {scalar_t__ duallink_slave; } ;
struct drm_encoder {TYPE_2__* crtc; } ;
struct TYPE_3__ {int clock; } ;
struct TYPE_4__ {TYPE_1__ mode; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct drm_encoder*) ;
 int FUNC_1 (scalar_t__,int) ;
 struct sil164_priv* FUNC_2 (struct drm_encoder*) ;

__attribute__((used)) static void
FUNC_3(struct drm_encoder *VAR_1, int VAR_2)
{
 struct sil164_priv *VAR_3 = FUNC_2(VAR_1);
 bool VAR_4 = (VAR_2 == VAR_0);
 bool VAR_5 = (VAR_4 && VAR_1->crtc->mode.clock > 165000);

 FUNC_1(FUNC_0(VAR_1), VAR_4);

 if (VAR_3->duallink_slave)
  FUNC_1(VAR_3->duallink_slave, VAR_5);
}
