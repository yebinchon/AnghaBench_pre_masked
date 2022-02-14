
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sti_mixer {int id; } ;





const char *FUNC_0(struct sti_mixer *VAR_0)
{
 switch (VAR_0->id) {
 case 128:
  return "MAIN_MIXER";
 case 129:
  return "AUX_MIXER";
 default:
  return "<UNKNOWN MIXER>";
 }
}
