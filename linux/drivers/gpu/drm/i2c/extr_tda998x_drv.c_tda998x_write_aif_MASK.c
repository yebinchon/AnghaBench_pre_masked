
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_audio_infoframe {int dummy; } ;
union hdmi_infoframe {struct hdmi_audio_infoframe audio; } ;
struct tda998x_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tda998x_priv*,int ,int ,union hdmi_infoframe*) ;

__attribute__((used)) static void FUNC_1(struct tda998x_priv *VAR_2,
         const struct hdmi_audio_infoframe *VAR_3)
{
 union hdmi_infoframe VAR_4;

 VAR_4.audio = *VAR_3;

 FUNC_0(VAR_2, VAR_0, VAR_1, &VAR_4);
}
