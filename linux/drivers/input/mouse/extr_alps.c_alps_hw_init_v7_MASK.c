
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps2dev {int dummy; } ;
struct psmouse {struct ps2dev ps2dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct psmouse*,int) ;
 int FUNC_1 (struct psmouse*,int) ;
 scalar_t__ FUNC_2 (struct psmouse*,int,int) ;
 scalar_t__ FUNC_3 (struct psmouse*) ;
 int FUNC_4 (struct psmouse*) ;
 scalar_t__ FUNC_5 (struct psmouse*,int) ;
 int FUNC_6 (struct ps2dev*,int *,int ) ;

__attribute__((used)) static int FUNC_7(struct psmouse *VAR_1)
{
 struct ps2dev *VAR_2 = &VAR_1->ps2dev;
 int VAR_3, VAR_4 = -1;

 if (FUNC_3(VAR_1) ||
     FUNC_1(VAR_1, 0xc2d9) == -1)
  goto error;

 if (FUNC_5(VAR_1, 0xc397))
  goto error;

 if (FUNC_2(VAR_1, 0xc2c9, 0x64))
  goto error;

 VAR_3 = FUNC_1(VAR_1, 0xc2c4);
 if (VAR_3 == -1)
  goto error;
 if (FUNC_0(VAR_1, VAR_3 | 0x02))
  goto error;

 FUNC_4(VAR_1);
 return FUNC_6(VAR_2, ((void*)0), VAR_0);

error:
 FUNC_4(VAR_1);
 return VAR_4;
}
