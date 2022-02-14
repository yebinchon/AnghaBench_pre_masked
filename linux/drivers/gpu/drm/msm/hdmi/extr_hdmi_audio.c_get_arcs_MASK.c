
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_msm_audio_arcs {unsigned long pixclock; } ;


 int FUNC_0 (struct hdmi_msm_audio_arcs*) ;
 struct hdmi_msm_audio_arcs* VAR_0 ;

__attribute__((used)) static const struct hdmi_msm_audio_arcs *FUNC_1(unsigned long int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  const struct hdmi_msm_audio_arcs *VAR_3 = &VAR_0[VAR_2];
  if (VAR_3->pixclock == VAR_1)
   return VAR_3;
 }

 return ((void*)0);
}
