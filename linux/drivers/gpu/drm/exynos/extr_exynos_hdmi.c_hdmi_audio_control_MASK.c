
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mute; } ;
struct hdmi_context {scalar_t__ dvi_mode; TYPE_1__ audio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct hdmi_context*,int ,int ) ;
 int FUNC_1 (struct hdmi_context*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct hdmi_context *VAR_7)
{
 bool VAR_8 = !VAR_7->audio.mute;

 if (VAR_7->dvi_mode)
  return;

 FUNC_0(VAR_7, VAR_3, VAR_8 ?
   VAR_5 : VAR_4);
 FUNC_1(VAR_7, VAR_6, VAR_8 ?
   VAR_1 : VAR_0, VAR_2);
}
