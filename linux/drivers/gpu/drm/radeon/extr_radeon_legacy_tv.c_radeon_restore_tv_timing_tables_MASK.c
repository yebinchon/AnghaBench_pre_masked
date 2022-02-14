
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_4__ {scalar_t__* h_code_timing; scalar_t__* v_code_timing; int tv_uv_adr; } ;
struct radeon_encoder_tv_dac {TYPE_2__ tv; } ;
struct TYPE_3__ {struct drm_device* dev; } ;
struct radeon_encoder {struct radeon_encoder_tv_dac* enc_priv; TYPE_1__ base; } ;
struct radeon_device {int dummy; } ;
struct drm_device {struct radeon_device* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct radeon_encoder*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct radeon_encoder *VAR_3)
{
 struct drm_device *VAR_4 = VAR_3->base.dev;
 struct radeon_device *VAR_5 = VAR_4->dev_private;
 struct radeon_encoder_tv_dac *VAR_6 = VAR_3->enc_priv;
 uint16_t VAR_7, VAR_8;
 uint32_t VAR_9;
 int VAR_10;

 FUNC_0(VAR_2, VAR_6->tv.tv_uv_adr);
 VAR_7 = FUNC_1(VAR_6->tv.tv_uv_adr);
 VAR_8 = FUNC_2(VAR_6->tv.tv_uv_adr);

 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10 += 2, VAR_7--) {
  VAR_9 = ((uint32_t)VAR_6->tv.h_code_timing[VAR_10] << 14) | ((uint32_t)VAR_6->tv.h_code_timing[VAR_10+1]);
  FUNC_3(VAR_3, VAR_7, VAR_9);
  if (VAR_6->tv.h_code_timing[VAR_10] == 0 || VAR_6->tv.h_code_timing[VAR_10 + 1] == 0)
   break;
 }
 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10 += 2, VAR_8++) {
  VAR_9 = ((uint32_t)VAR_6->tv.v_code_timing[VAR_10+1] << 14) | ((uint32_t)VAR_6->tv.v_code_timing[VAR_10]);
  FUNC_3(VAR_3, VAR_8, VAR_9);
  if (VAR_6->tv.v_code_timing[VAR_10] == 0 || VAR_6->tv.v_code_timing[VAR_10 + 1] == 0)
   break;
 }
}
