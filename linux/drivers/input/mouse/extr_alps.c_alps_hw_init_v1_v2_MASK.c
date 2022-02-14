
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {int ps2dev; struct alps_data* private; } ;
struct alps_data {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct psmouse*) ;
 scalar_t__ FUNC_1 (struct psmouse*,int) ;
 scalar_t__ FUNC_2 (struct psmouse*,int) ;
 scalar_t__ FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (struct psmouse*,char*) ;
 int FUNC_5 (struct psmouse*,char*) ;

__attribute__((used)) static int FUNC_6(struct psmouse *VAR_2)
{
 struct alps_data *VAR_3 = VAR_2->private;

 if ((VAR_3->flags & VAR_0) &&
     FUNC_1(VAR_2, 1)) {
  return -1;
 }

 if (FUNC_2(VAR_2, 1)) {
  FUNC_5(VAR_2, "Failed to enable hardware tapping\n");
  return -1;
 }

 if (FUNC_0(VAR_2)) {
  FUNC_4(VAR_2, "Failed to enable absolute mode\n");
  return -1;
 }

 if ((VAR_3->flags & VAR_0) &&
     FUNC_1(VAR_2, 0)) {
  return -1;
 }


 if (FUNC_3(&VAR_2->ps2dev, ((void*)0), VAR_1)) {
  FUNC_4(VAR_2, "Failed to enable stream mode\n");
  return -1;
 }

 return 0;
}
