
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
 int FUNC_1 (struct ps2dev*) ;
 int FUNC_2 (struct ps2dev*) ;
 scalar_t__ FUNC_3 (struct ps2dev*,int,int ) ;
 int FUNC_4 (struct psmouse*) ;
 int FUNC_5 (struct psmouse*,char*,int,int) ;
 int FUNC_6 (struct psmouse*) ;

__attribute__((used)) static int FUNC_7(struct psmouse *VAR_3, int *VAR_4)
{
 struct ps2dev *VAR_5 = &VAR_3->ps2dev;
 unsigned char VAR_6[3];
 int VAR_7 = -1;

 FUNC_6(VAR_3);

 FUNC_1(VAR_5);

 if (FUNC_3(VAR_5, 0xf3, VAR_0) < 0)
  goto out;

 FUNC_3(VAR_5, 0x66, VAR_1);
 FUNC_3(VAR_5, 0x88, VAR_1);

 if (FUNC_3(VAR_5, 0xf3, VAR_0) < 0)
  goto out;

 FUNC_3(VAR_5, 0x83, VAR_1);
 FUNC_3(VAR_5, 0x88, VAR_1);


 if (FUNC_0(VAR_5, VAR_6, VAR_2))
  goto out;

 *VAR_4 = VAR_6[2];
 VAR_7 = 0;

 out:
 FUNC_2(VAR_5);
 FUNC_4(VAR_3);
 FUNC_5(VAR_3,
      "READ PAGE REG: 0x%02x (rc = %d)\n",
      *VAR_4, VAR_7);
 return VAR_7;
}
