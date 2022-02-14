
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sun4i_tcon {int regs; } ;
struct drm_encoder {scalar_t__ encoder_type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct sun4i_tcon *VAR_2,
      const struct drm_encoder *VAR_3)
{
 u32 VAR_4;

 if (VAR_3->encoder_type == VAR_0)
  VAR_4 = 1;
 else
  VAR_4 = 0;




 return FUNC_0(VAR_2->regs, VAR_1, VAR_4);
}
