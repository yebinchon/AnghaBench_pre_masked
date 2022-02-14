
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps2dev {int dummy; } ;
struct psmouse {struct ps2dev ps2dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ps2dev*,unsigned char*,int ) ;
 unsigned char FUNC_1 (int) ;
 unsigned char FUNC_2 (int) ;
 int FUNC_3 (struct ps2dev*) ;
 int FUNC_4 (struct ps2dev*) ;
 scalar_t__ FUNC_5 (struct ps2dev*,unsigned char,int ) ;
 int FUNC_6 (struct psmouse*) ;
 int FUNC_7 (struct psmouse*,char*,int,int,int) ;
 int FUNC_8 (struct psmouse*) ;

__attribute__((used)) static int FUNC_9(struct psmouse *VAR_3, int VAR_4, int *VAR_5)
{
 struct ps2dev *VAR_6 = &VAR_3->ps2dev;
 unsigned char VAR_7[3];
 unsigned char VAR_8;
 int VAR_9 = -1;







 FUNC_8(VAR_3);

 FUNC_3(VAR_6);

 if (FUNC_5(VAR_6, 0xf3, VAR_0) < 0)
  goto out;


 FUNC_5(VAR_6, 0x66, VAR_1);

 FUNC_5(VAR_6, 0x88, VAR_1);

 if (FUNC_5(VAR_6, 0xf3, VAR_0) < 0)
  goto out;

 if ((VAR_8 = FUNC_1(VAR_4)) != VAR_4) {
  FUNC_5(VAR_6, 0x68, VAR_1);
 } else if ((VAR_8 = FUNC_2(VAR_4)) != VAR_4) {

  FUNC_5(VAR_6, 0xcc, VAR_1);

 } else {

  FUNC_5(VAR_6, 0x66, VAR_1);

 }

 FUNC_5(VAR_6, VAR_8, VAR_0);

 if (FUNC_0(VAR_6, VAR_7, VAR_2) < 0)
  goto out;

 *VAR_5 = VAR_7[2];
 VAR_9 = 0;

 out:
 FUNC_4(VAR_6);
 FUNC_6(VAR_3);
 FUNC_7(VAR_3,
      "READ REG: 0x%02x is 0x%02x (rc = %d)\n",
      VAR_4, *VAR_5, VAR_9);
 return VAR_9;
}
