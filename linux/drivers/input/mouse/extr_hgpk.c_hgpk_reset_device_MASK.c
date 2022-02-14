
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps2dev {int dummy; } ;
struct psmouse {struct ps2dev ps2dev; } ;


 int FUNC_0 (struct psmouse*) ;
 int FUNC_1 (struct psmouse*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct ps2dev*,int *,int) ;
 int FUNC_4 (struct psmouse*,char*) ;
 int FUNC_5 (struct psmouse*) ;

__attribute__((used)) static int FUNC_6(struct psmouse *VAR_0, bool VAR_1)
{
 int VAR_2;

 FUNC_5(VAR_0);

 if (VAR_1) {
  struct ps2dev *VAR_3 = &VAR_0->ps2dev;


  if (FUNC_3(VAR_3, ((void*)0), 0xf5) ||
      FUNC_3(VAR_3, ((void*)0), 0xf5) ||
      FUNC_3(VAR_3, ((void*)0), 0xe6) ||
      FUNC_3(VAR_3, ((void*)0), 0xf5)) {
   return -1;
  }


  FUNC_2(150);
 }

 VAR_2 = FUNC_1(VAR_0);
 if (VAR_2) {
  FUNC_4(VAR_0, "failed to select mode\n");
  return VAR_2;
 }

 FUNC_0(VAR_0);

 return 0;
}
