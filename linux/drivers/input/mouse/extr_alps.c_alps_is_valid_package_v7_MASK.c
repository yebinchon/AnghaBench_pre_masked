
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {int pktcnt; int* packet; } ;



__attribute__((used)) static bool FUNC_0(struct psmouse *VAR_0)
{
 switch (VAR_0->pktcnt) {
 case 3:
  return (VAR_0->packet[2] & 0x40) == 0x40;
 case 4:
  return (VAR_0->packet[3] & 0x48) == 0x48;
 case 6:
  return (VAR_0->packet[5] & 0x40) == 0x00;
 }
 return 1;
}
