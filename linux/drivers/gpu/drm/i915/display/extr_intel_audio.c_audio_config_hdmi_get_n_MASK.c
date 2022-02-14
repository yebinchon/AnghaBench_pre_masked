
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_crtc_state {int pipe_bpp; scalar_t__ port_clock; } ;
struct hdmi_aud_ncts {int sample_rate; scalar_t__ clock; int n; } ;


 int FUNC_0 (struct hdmi_aud_ncts*) ;
 struct hdmi_aud_ncts* VAR_0 ;
 struct hdmi_aud_ncts* VAR_1 ;
 struct hdmi_aud_ncts* VAR_2 ;

__attribute__((used)) static int FUNC_1(const struct intel_crtc_state *VAR_3,
       int VAR_4)
{
 const struct hdmi_aud_ncts *VAR_5;
 int VAR_6, VAR_7;

 if (VAR_3->pipe_bpp == 36) {
  VAR_5 = VAR_2;
  VAR_7 = FUNC_0(VAR_2);
 } else if (VAR_3->pipe_bpp == 30) {
  VAR_5 = VAR_1;
  VAR_7 = FUNC_0(VAR_1);
 } else {
  VAR_5 = VAR_0;
  VAR_7 = FUNC_0(VAR_0);
 }

 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  if (VAR_4 == VAR_5[VAR_6].sample_rate &&
      VAR_3->port_clock == VAR_5[VAR_6].clock) {
   return VAR_5[VAR_6].n;
  }
 }
 return 0;
}
