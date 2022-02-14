
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sun4i_tcon {int id; int regs; } ;
struct drm_encoder {int encoder_type; int dev; } ;



 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,int) ;
 struct sun4i_tcon* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct sun4i_tcon *VAR_2,
         const struct drm_encoder *VAR_3)
{
 struct sun4i_tcon *VAR_4 = FUNC_1(VAR_3->dev);
 u32 VAR_5;

 if (!VAR_4)
  return -VAR_0;

 switch (VAR_3->encoder_type) {
 case 128:

  VAR_5 = 8;
  break;
 default:

  return -VAR_0;
 }

 FUNC_0(VAR_4->regs, VAR_1,
      0x3 << VAR_5, VAR_2->id << VAR_5);

 return 0;
}
