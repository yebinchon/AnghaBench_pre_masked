
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct psmouse*,int) ;
 int FUNC_2 (struct psmouse*,int) ;
 scalar_t__ FUNC_3 (struct psmouse*) ;
 scalar_t__ FUNC_4 (struct psmouse*) ;
 scalar_t__ FUNC_5 (struct psmouse*,int,int) ;
 scalar_t__ FUNC_6 (struct psmouse*,int ,int ,unsigned char*) ;
 scalar_t__ FUNC_7 (struct psmouse*) ;
 int FUNC_8 (struct psmouse*,char*,unsigned char*) ;
 int FUNC_9 (struct psmouse*,char*) ;
 int FUNC_10 (struct psmouse*,char*) ;

__attribute__((used)) static int FUNC_11(struct psmouse *VAR_3, int VAR_4)
{
 int VAR_5 = 0;
 int VAR_6;
 unsigned char VAR_7[4];
 if (FUNC_5(VAR_3, VAR_4, 1))
  return -VAR_0;
 if (FUNC_6(VAR_3, 0, VAR_2, VAR_7)) {
  FUNC_10(VAR_3, "Failed to initialize trackstick (E7 report failed)\n");
  VAR_5 = -VAR_1;
 } else {
  FUNC_8(VAR_3, "trackstick E7 report: %3ph\n", VAR_7);
  if (FUNC_7(VAR_3)) {
   FUNC_9(VAR_3, "Failed to enter into trackstick extended mode\n");
   VAR_5 = -VAR_0;
  }
 }

 if (FUNC_5(VAR_3, VAR_4, 0))
  return -VAR_0;

 if (VAR_5)
  return VAR_5;

 if (FUNC_3(VAR_3))
  return -VAR_0;

 VAR_6 = FUNC_2(VAR_3, VAR_4 + 0x08);
 if (VAR_6 == -1) {
  VAR_5 = -VAR_0;
 } else {




  VAR_6 |= FUNC_0(1);
  if (FUNC_1(VAR_3, VAR_6))
   VAR_5 = -VAR_0;
 }

 if (FUNC_4(VAR_3))
  return -VAR_0;

 return VAR_5;
}
