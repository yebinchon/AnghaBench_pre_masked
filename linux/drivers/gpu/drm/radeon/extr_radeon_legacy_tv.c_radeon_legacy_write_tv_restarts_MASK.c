
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int vrestart; int hrestart; int frestart; } ;
struct radeon_encoder_tv_dac {TYPE_2__ tv; } ;
struct TYPE_3__ {struct drm_device* dev; } ;
struct radeon_encoder {struct radeon_encoder_tv_dac* enc_priv; TYPE_1__ base; } ;
struct radeon_device {int dummy; } ;
struct drm_device {struct radeon_device* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct radeon_encoder *VAR_3)
{
 struct drm_device *VAR_4 = VAR_3->base.dev;
 struct radeon_device *VAR_5 = VAR_4->dev_private;
 struct radeon_encoder_tv_dac *VAR_6 = VAR_3->enc_priv;
 FUNC_0(VAR_0, VAR_6->tv.frestart);
 FUNC_0(VAR_1, VAR_6->tv.hrestart);
 FUNC_0(VAR_2, VAR_6->tv.vrestart);
}
