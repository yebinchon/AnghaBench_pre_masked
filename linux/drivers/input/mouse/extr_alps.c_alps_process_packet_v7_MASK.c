
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {unsigned char* packet; } ;


 int FUNC_0 (struct psmouse*) ;
 int FUNC_1 (struct psmouse*) ;

__attribute__((used)) static void FUNC_2(struct psmouse *VAR_0)
{
 unsigned char *VAR_1 = VAR_0->packet;

 if (VAR_1[0] == 0x48 && (VAR_1[4] & 0x47) == 0x06)
  FUNC_1(VAR_0);
 else
  FUNC_0(VAR_0);
}
