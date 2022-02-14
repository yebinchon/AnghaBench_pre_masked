
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sti_plane {int desc; } ;
const char *FUNC_0(struct sti_plane *VAR_0)
{
 switch (VAR_0->desc) {
 case 132:
  return "GDP0";
 case 131:
  return "GDP1";
 case 130:
  return "GDP2";
 case 129:
  return "GDP3";
 case 128:
  return "HQVDP0";
 case 133:
  return "CURSOR";
 default:
  return "<UNKNOWN PLANE>";
 }
}
