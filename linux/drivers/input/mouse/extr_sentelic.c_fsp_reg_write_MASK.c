
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps2dev {int dummy; } ;
struct psmouse {struct ps2dev ps2dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char FUNC_0 (int) ;
 unsigned char FUNC_1 (int) ;
 int FUNC_2 (struct ps2dev*) ;
 int FUNC_3 (struct ps2dev*) ;
 scalar_t__ FUNC_4 (struct ps2dev*,unsigned char,int ) ;
 int FUNC_5 (struct psmouse*,char*,int,int,int) ;

__attribute__((used)) static int FUNC_6(struct psmouse *VAR_2, int VAR_3, int VAR_4)
{
 struct ps2dev *VAR_5 = &VAR_2->ps2dev;
 unsigned char VAR_6;
 int VAR_7 = -1;

 FUNC_2(VAR_5);

 if (FUNC_4(VAR_5, 0xf3, VAR_0) < 0)
  goto out;

 if ((VAR_6 = FUNC_0(VAR_3)) != VAR_3) {

  FUNC_4(VAR_5, 0x74, VAR_1);
 } else {
  if ((VAR_6 = FUNC_1(VAR_3)) != VAR_3) {

   FUNC_4(VAR_5, 0x77, VAR_1);
  } else {

   FUNC_4(VAR_5, 0x55, VAR_1);
  }
 }

 FUNC_4(VAR_5, VAR_6, VAR_1);

 if (FUNC_4(VAR_5, 0xf3, VAR_0) < 0)
  goto out;

 if ((VAR_6 = FUNC_0(VAR_4)) != VAR_4) {

  FUNC_4(VAR_5, 0x47, VAR_1);
 } else if ((VAR_6 = FUNC_1(VAR_4)) != VAR_4) {

  FUNC_4(VAR_5, 0x44, VAR_1);
 } else {

  FUNC_4(VAR_5, 0x33, VAR_1);
 }


 FUNC_4(VAR_5, VAR_6, VAR_1);
 VAR_7 = 0;

 out:
 FUNC_3(VAR_5);
 FUNC_5(VAR_2,
      "WRITE REG: 0x%02x to 0x%02x (rc = %d)\n",
      VAR_3, VAR_4, VAR_7);
 return VAR_7;
}
