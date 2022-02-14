
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct psmouse*,int) ;
 int FUNC_1 (struct psmouse*) ;
 scalar_t__ FUNC_2 (struct psmouse*) ;
 int FUNC_3 (struct psmouse*,char*) ;

__attribute__((used)) static int FUNC_4(struct psmouse *VAR_1)
{
 int VAR_2 = VAR_0;
 int VAR_3;

 do {
  FUNC_1(VAR_1);
  VAR_3 = FUNC_0(VAR_1, 0);
 } while (VAR_3 && (--VAR_2 > 0));

 if (VAR_3) {
  FUNC_3(VAR_1, "Reconnect: unable to detect trackpad.\n");
  return -1;
 }

 if (FUNC_2(VAR_1)) {
  FUNC_3(VAR_1, "Reconnect: Unable to initialize Cypress absolute mode.\n");
  return -1;
 }

 return 0;
}
