
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_tcon {int regs; } ;
struct drm_encoder {int encoder_type; } ;


 int FUNC_0 (char*) ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (struct sun4i_tcon*,int,int) ;
 int FUNC_3 (struct sun4i_tcon*,struct drm_encoder const*,int) ;

void FUNC_4(struct sun4i_tcon *VAR_2,
      const struct drm_encoder *VAR_3,
      bool VAR_4)
{
 bool VAR_5 = 0;
 int VAR_6;

 switch (VAR_3->encoder_type) {
 case 131:
  VAR_5 = 1;

 case 132:
 case 130:
  VAR_6 = 0;
  break;
 case 129:
 case 128:
  VAR_6 = 1;
  break;
 default:
  FUNC_0("Unknown encoder type, doing nothing...\n");
  return;
 }

 if (VAR_5 && !VAR_4)
  FUNC_3(VAR_2, VAR_3, 0);

 FUNC_1(VAR_2->regs, VAR_0,
      VAR_1,
      VAR_4 ? VAR_1 : 0);

 if (VAR_5 && VAR_4)
  FUNC_3(VAR_2, VAR_3, 1);

 FUNC_2(VAR_2, VAR_6, VAR_4);
}
