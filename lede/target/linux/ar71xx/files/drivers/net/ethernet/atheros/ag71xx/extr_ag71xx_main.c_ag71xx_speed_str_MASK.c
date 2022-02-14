
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ag71xx {int speed; } ;






__attribute__((used)) static unsigned char *FUNC_0(struct ag71xx *VAR_0)
{
 switch (VAR_0->speed) {
 case 128:
  return "1000";
 case 129:
  return "100";
 case 130:
  return "10";
 }

 return "?";
}
