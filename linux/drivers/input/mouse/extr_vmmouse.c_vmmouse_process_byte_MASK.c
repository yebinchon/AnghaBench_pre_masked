
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {unsigned char* packet; int pktcnt; } ;
typedef int psmouse_ret_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct psmouse*) ;

__attribute__((used)) static psmouse_ret_t FUNC_1(struct psmouse *VAR_2)
{
 unsigned char *VAR_3 = VAR_2->packet;

 switch (VAR_2->pktcnt) {
 case 1:
  return (VAR_3[0] & 0x8) == 0x8 ?
   VAR_1 : VAR_0;

 case 2:
  return VAR_1;

 default:
  return FUNC_0(VAR_2);
 }
}
