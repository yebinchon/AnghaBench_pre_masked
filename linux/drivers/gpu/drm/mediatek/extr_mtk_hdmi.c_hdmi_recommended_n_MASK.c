
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_acr_n {unsigned int clock; unsigned int* n; } ;


 int FUNC_0 (struct hdmi_acr_n*) ;
 struct hdmi_acr_n* VAR_0 ;

__attribute__((used)) static unsigned int FUNC_1(unsigned int VAR_1, unsigned int VAR_2)
{
 const struct hdmi_acr_n *VAR_3;
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0) - 1; VAR_4++) {
  if (VAR_2 == VAR_0[VAR_4].clock)
   break;
 }
 VAR_3 = VAR_0 + VAR_4;

 switch (VAR_1) {
 case 32000:
  return VAR_3->n[0];
 case 44100:
  return VAR_3->n[1];
 case 48000:
  return VAR_3->n[2];
 case 88200:
  return VAR_3->n[1] * 2;
 case 96000:
  return VAR_3->n[2] * 2;
 case 176400:
  return VAR_3->n[1] * 4;
 case 192000:
  return VAR_3->n[2] * 4;
 default:
  return (128 * VAR_1) / 1000;
 }
}
