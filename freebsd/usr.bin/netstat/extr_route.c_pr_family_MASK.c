
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;

void
FUNC_1(int VAR_0)
{
 const char *VAR_1;

 switch (VAR_0) {
 case 131:
  VAR_1 = "Internet";
  break;





 case 129:
  VAR_1 = "ISO";
  break;
 case 132:
  VAR_1 = "X.25";
  break;
 case 128:
  VAR_1 = "Netgraph";
  break;
 default:
  VAR_1 = ((void*)0);
  break;
 }
 if (VAR_1)
  FUNC_0("\n{k:address-family/%s}:\n", VAR_1);
 else
  FUNC_0("\n{L:Protocol Family} {k:address-family/%d}:\n", VAR_0);
}
