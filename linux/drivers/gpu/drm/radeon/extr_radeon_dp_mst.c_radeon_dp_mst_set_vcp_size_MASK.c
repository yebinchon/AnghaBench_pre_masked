
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct radeon_encoder_mst {int fe; } ;
struct TYPE_2__ {struct drm_device* dev; } ;
struct radeon_encoder {struct radeon_encoder_mst* enc_priv; TYPE_1__ base; } ;
struct radeon_device {int dummy; } ;
struct drm_device {struct radeon_device* dev_private; } ;
typedef int s64 ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct radeon_encoder *VAR_2, s64 VAR_3)
{
 struct drm_device *VAR_4 = VAR_2->base.dev;
 struct radeon_device *VAR_5 = VAR_4->dev_private;
 struct radeon_encoder_mst *VAR_6 = VAR_2->enc_priv;
 uint32_t VAR_7, VAR_8;
 uint32_t VAR_9 = FUNC_7(VAR_6->fe);
 int VAR_10 = 0;
 uint32_t VAR_11 = FUNC_5(VAR_3);
 uint32_t VAR_12 = FUNC_6((VAR_3 - VAR_11) << 26);

 VAR_7 = FUNC_1(VAR_11) | FUNC_2(VAR_12);

 FUNC_4(VAR_0 + VAR_9, VAR_7);

 do {
  VAR_8 = FUNC_3(VAR_1 + VAR_9);
  FUNC_8(10);
 } while ((VAR_8 & 0x1) && (VAR_10++ < 10000));

 if (VAR_10 >= 10000)
  FUNC_0("timed out wait for rate cntl %d\n", VAR_6->fe);
 return 0;
}
