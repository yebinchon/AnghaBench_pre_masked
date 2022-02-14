
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps2dev {int dummy; } ;
struct psmouse {struct ps2dev ps2dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct psmouse*) ;
 scalar_t__ FUNC_1 (struct psmouse*,int,int) ;
 scalar_t__ FUNC_2 (struct psmouse*) ;
 int FUNC_3 (struct psmouse*) ;
 scalar_t__ FUNC_4 (struct ps2dev*,unsigned char*,int ) ;
 int FUNC_5 (struct psmouse*,char*) ;

__attribute__((used)) static int FUNC_6(struct psmouse *VAR_3)
{
 struct ps2dev *VAR_4 = &VAR_3->ps2dev;
 unsigned char VAR_5[4];

 if (FUNC_2(VAR_3))
  goto error;

 if (FUNC_0(VAR_3)) {
  FUNC_5(VAR_3, "Failed to enter absolute mode\n");
  goto error;
 }

 if (FUNC_1(VAR_3, 0x0007, 0x8c))
  goto error;

 if (FUNC_1(VAR_3, 0x0149, 0x03))
  goto error;

 if (FUNC_1(VAR_3, 0x0160, 0x03))
  goto error;

 if (FUNC_1(VAR_3, 0x017f, 0x15))
  goto error;

 if (FUNC_1(VAR_3, 0x0151, 0x01))
  goto error;

 if (FUNC_1(VAR_3, 0x0168, 0x03))
  goto error;

 if (FUNC_1(VAR_3, 0x014a, 0x03))
  goto error;

 if (FUNC_1(VAR_3, 0x0161, 0x03))
  goto error;

 FUNC_3(VAR_3);






 VAR_5[0] = 0xc8;
 VAR_5[1] = 0x64;
 VAR_5[2] = 0x50;
 if (FUNC_4(VAR_4, &VAR_5[0], VAR_2) ||
     FUNC_4(VAR_4, &VAR_5[1], VAR_2) ||
     FUNC_4(VAR_4, &VAR_5[2], VAR_2) ||
     FUNC_4(VAR_4, VAR_5, VAR_1))
  return -1;


 VAR_5[0] = 0x64;
 if (FUNC_4(VAR_4, VAR_5, VAR_2) ||
     FUNC_4(VAR_4, ((void*)0), VAR_0)) {
  FUNC_5(VAR_3, "Failed to enable data reporting\n");
  return -1;
 }

 return 0;

error:





 FUNC_3(VAR_3);
 return -1;
}
