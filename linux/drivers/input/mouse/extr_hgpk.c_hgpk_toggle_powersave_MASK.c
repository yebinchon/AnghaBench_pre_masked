
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps2dev {int dummy; } ;
struct psmouse {scalar_t__ model; struct ps2dev ps2dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct psmouse*,int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct ps2dev*,int *,int) ;
 int FUNC_3 (struct ps2dev*,int,int) ;
 int FUNC_4 (struct psmouse*) ;
 int FUNC_5 (struct psmouse*,char*) ;
 int FUNC_6 (struct psmouse*,char*) ;
 int FUNC_7 (struct psmouse*,int ) ;

__attribute__((used)) static int FUNC_8(struct psmouse *VAR_4, int VAR_5)
{
 struct ps2dev *VAR_6 = &VAR_4->ps2dev;
 int VAR_7;
 int VAR_8;


 if (VAR_4->model < VAR_0)
  return 0;

 if (VAR_5) {
  FUNC_7(VAR_4, VAR_3);
  for (VAR_7 = 20; VAR_7 > 0; VAR_7--) {
   if (!FUNC_3(VAR_6, VAR_1, 20))
    break;
   FUNC_1(25);
  }

  VAR_8 = FUNC_0(VAR_4, 0);
  if (VAR_8) {
   FUNC_6(VAR_4, "Failed to reset device!\n");
   return VAR_8;
  }


  FUNC_4(VAR_4);
  FUNC_5(VAR_4, "Touchpad powered up.\n");
 } else {
  FUNC_5(VAR_4, "Powering off touchpad.\n");

  if (FUNC_2(VAR_6, ((void*)0), 0xec) ||
      FUNC_2(VAR_6, ((void*)0), 0xec) ||
      FUNC_2(VAR_6, ((void*)0), 0xea)) {
   return -1;
  }

  FUNC_7(VAR_4, VAR_2);


  FUNC_3(VAR_6, 0xec, 20);
 }

 return 0;
}
