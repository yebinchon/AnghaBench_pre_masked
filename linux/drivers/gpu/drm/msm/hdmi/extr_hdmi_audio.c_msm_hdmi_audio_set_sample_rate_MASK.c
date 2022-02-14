
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_audio {int rate; } ;
struct hdmi {struct hdmi_audio audio; } ;


 int VAR_0 ;
 int FUNC_0 (struct hdmi*) ;

void FUNC_1(struct hdmi *VAR_1, int VAR_2)
{
 struct hdmi_audio *VAR_3;

 if (!VAR_1)
  return;

 VAR_3 = &VAR_1->audio;

 if ((VAR_2 < 0) || (VAR_2 >= VAR_0))
  return;

 VAR_3->rate = VAR_2;
 FUNC_0(VAR_1);
}
