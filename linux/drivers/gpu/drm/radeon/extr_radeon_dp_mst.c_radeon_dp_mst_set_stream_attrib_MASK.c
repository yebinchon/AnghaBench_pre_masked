
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {struct drm_device* dev; } ;
struct radeon_encoder {scalar_t__ offset; TYPE_1__ base; } ;
struct radeon_device {int dummy; } ;
struct drm_device {struct radeon_device* dev_private; } ;


 int FUNC_0 (char*,scalar_t__,int) ;
 int FUNC_1 (char*,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct radeon_encoder *VAR_4,
        int VAR_5,
        int VAR_6,
        int VAR_7)
{
 struct drm_device *VAR_8 = VAR_4->base.dev;
 struct radeon_device *VAR_9 = VAR_8->dev_private;
 u32 VAR_10, VAR_11;
 int VAR_12 = 0;
 int VAR_13, VAR_14;

 VAR_13 = VAR_5 >> 1;
 VAR_14 = VAR_5 & 1;

 VAR_10 = FUNC_4(VAR_1 + VAR_13 + VAR_4->offset);

 VAR_11 = FUNC_2(VAR_7) | FUNC_3(VAR_6);

 VAR_11 <<= (16 * VAR_14);

 VAR_10 &= ~(0xffff << (16 * VAR_14));

 VAR_10 |= VAR_11;

 FUNC_0("writing 0x%08x 0x%08x\n", VAR_1 + VAR_13 + VAR_4->offset, VAR_10);
 FUNC_5(VAR_1 + VAR_13 + VAR_4->offset, VAR_10);

 FUNC_5(VAR_2 + VAR_4->offset, 1);

 do {
  unsigned VAR_15, VAR_16;
  FUNC_6(10);
  VAR_10 = FUNC_4(VAR_2 + VAR_4->offset);

  VAR_15 = VAR_10 & VAR_3;
  VAR_16 = VAR_10 & VAR_0;

  if (!VAR_15 && !VAR_16)
   break;
 } while (VAR_12++ < 50);

 if (VAR_12 == 10000)
  FUNC_1("timed out waitin for SAT update %d\n", VAR_4->offset);


 return 0;
}
