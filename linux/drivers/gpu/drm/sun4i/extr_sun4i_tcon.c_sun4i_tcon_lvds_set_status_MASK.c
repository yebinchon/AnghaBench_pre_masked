
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sun4i_tcon {int regs; } ;
struct drm_encoder {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (struct drm_encoder const*) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct sun4i_tcon *VAR_6,
           const struct drm_encoder *VAR_7,
           bool VAR_8)
{
 if (VAR_8) {
  u8 VAR_9;

  FUNC_4(VAR_6->regs, VAR_2,
       VAR_1,
       VAR_1);






  FUNC_5(VAR_6->regs, VAR_0,
        FUNC_0(2) |
        FUNC_3(3) |
        FUNC_2(2) |
        VAR_4);
  FUNC_8(2);

  FUNC_4(VAR_6->regs, VAR_0,
       VAR_5,
       VAR_5);
  FUNC_8(2);

  FUNC_4(VAR_6->regs, VAR_0,
       VAR_3,
       VAR_3);

  if (FUNC_7(VAR_7) == 18)
   VAR_9 = 7;
  else
   VAR_9 = 0xf;

  FUNC_6(VAR_6->regs, VAR_0,
      FUNC_1(0xf),
      FUNC_1(VAR_9));
 } else {
  FUNC_4(VAR_6->regs, VAR_2,
       VAR_1, 0);
 }
}
