
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int corr; } ;
struct drm_i915_private {TYPE_1__ ips; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,unsigned long) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int VAR_18 ;
 unsigned long FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10(struct drm_i915_private *VAR_19)
{
 u32 VAR_20;
 u8 VAR_21[16];
 int VAR_22;


 FUNC_3(VAR_3, 0);
 FUNC_5(VAR_3);


 FUNC_3(VAR_18, 0x15040d00);
 FUNC_3(VAR_0, 0x007f0000);
 FUNC_3(VAR_1, 0x1e220004);
 FUNC_3(VAR_2, 0x04000004);

 for (VAR_22 = 0; VAR_22 < 5; VAR_22++)
  FUNC_3(FUNC_4(VAR_22), 0);
 for (VAR_22 = 0; VAR_22 < 3; VAR_22++)
  FUNC_3(FUNC_0(VAR_22), 0);


 for (VAR_22 = 0; VAR_22 < 16; VAR_22++) {
  u32 VAR_23 = FUNC_2(FUNC_6(VAR_22));
  unsigned long VAR_24 = FUNC_9(VAR_23);
  unsigned long VAR_25 = (VAR_23 & VAR_16) >>
   VAR_17;
  unsigned long VAR_26;

  VAR_26 = VAR_25 * VAR_25;
  VAR_26 *= (VAR_24 / 1000);
  VAR_26 *= 255;
  VAR_26 /= (127*127*900);
  if (VAR_26 > 0xff)
   FUNC_1("bad pxval: %ld\n", VAR_26);
  VAR_21[VAR_22] = VAR_26;
 }

 VAR_21[14] = 0;
 VAR_21[15] = 0;

 for (VAR_22 = 0; VAR_22 < 4; VAR_22++) {
  u32 VAR_27 = (VAR_21[VAR_22*4] << 24) | (VAR_21[(VAR_22*4)+1] << 16) |
   (VAR_21[(VAR_22*4)+2] << 8) | (VAR_21[(VAR_22*4)+3]);
  FUNC_3(FUNC_7(VAR_22), VAR_27);
 }


 FUNC_3(VAR_14, 0);
 FUNC_3(VAR_15, 0);
 FUNC_3(VAR_4, 0x00007f00);
 FUNC_3(VAR_5, 0x0000000e);
 FUNC_3(VAR_6, 0x000e0000);
 FUNC_3(VAR_7, 0x68000300);
 FUNC_3(VAR_8, 0x42000000);
 FUNC_3(VAR_9, 0x00140031);
 FUNC_3(VAR_10, 0);
 FUNC_3(VAR_11, 0);

 for (VAR_22 = 0; VAR_22 < 8; VAR_22++)
  FUNC_3(FUNC_8(VAR_22), 0);


 FUNC_3(VAR_3, 0x80000019);

 VAR_20 = FUNC_2(VAR_12);

 VAR_19->ips.corr = (VAR_20 & VAR_13);
}
