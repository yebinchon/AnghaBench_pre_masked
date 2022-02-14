
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {int dummy; } ;


 int FUNC_0 (struct psmouse*,int ) ;
 int FUNC_1 (struct psmouse*) ;
 int FUNC_2 (struct psmouse*,char*,...) ;
 int FUNC_3 (struct psmouse*,char*) ;
 int FUNC_4 (struct psmouse*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct psmouse *VAR_0)
{
 int VAR_1 = 0, VAR_2 = 0;

 FUNC_2(VAR_0, "Reconnect\n");
 do {
  FUNC_4(VAR_0);
  if (VAR_1)
   FUNC_5(1);
  VAR_2 = FUNC_0(VAR_0, 0);
 } while (VAR_2 && ++VAR_1 < 3);

 if (VAR_2)
  return VAR_2;

 FUNC_2(VAR_0, "Reconnected after %d attempts\n", VAR_1);

 VAR_2 = FUNC_1(VAR_0);
 if (VAR_2) {
  FUNC_3(VAR_0, "Unable to initialize device\n");
  return VAR_2;
 }

 return 0;
}
