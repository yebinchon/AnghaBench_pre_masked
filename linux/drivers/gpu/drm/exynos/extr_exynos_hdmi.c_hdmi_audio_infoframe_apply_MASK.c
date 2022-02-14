
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct hdmi_audio_infoframe {int dummy; } ;
struct TYPE_2__ {struct hdmi_audio_infoframe infoframe; } ;
struct hdmi_context {TYPE_1__ audio; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct hdmi_audio_infoframe*,int *,int) ;
 int FUNC_2 (struct hdmi_context*,int ,int *,int) ;
 int FUNC_3 (struct hdmi_context*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct hdmi_context *VAR_4)
{
 struct hdmi_audio_infoframe *VAR_5 = &VAR_4->audio.infoframe;
 u8 VAR_6[FUNC_0(VAR_0)];
 int VAR_7;

 VAR_7 = FUNC_1(VAR_5, VAR_6, sizeof(VAR_6));
 if (VAR_7 < 0)
  return VAR_7;

 FUNC_3(VAR_4, VAR_1, VAR_2);
 FUNC_2(VAR_4, VAR_3, VAR_6, VAR_7);

 return 0;
}
