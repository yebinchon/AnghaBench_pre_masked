
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {int pktcnt; int* packet; } ;



__attribute__((used)) static bool FUNC_0(struct psmouse *VAR_0)
{
 if (VAR_0->pktcnt == 4 && ((VAR_0->packet[3] & 0x08) != 0x08))
  return 0;
 if (VAR_0->pktcnt == 6 && ((VAR_0->packet[5] & 0x10) != 0x0))
  return 0;
 return 1;
}
