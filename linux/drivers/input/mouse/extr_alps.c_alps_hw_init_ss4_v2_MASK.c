
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps2dev {int dummy; } ;
struct psmouse {struct ps2dev ps2dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct psmouse*,int,int) ;
 scalar_t__ FUNC_1 (struct psmouse*) ;
 scalar_t__ FUNC_2 (struct psmouse*) ;
 int FUNC_3 (struct ps2dev*,char*,int ) ;

__attribute__((used)) static int FUNC_4(struct psmouse *VAR_3)
{
 struct ps2dev *VAR_4 = &VAR_3->ps2dev;
 char VAR_5[2] = {0x64, 0x28};
 int VAR_6 = -1;


 if (FUNC_3(VAR_4, ((void*)0), VAR_2) ||
     FUNC_3(VAR_4, ((void*)0), VAR_2) ||
     FUNC_3(VAR_4, &VAR_5[0], VAR_1) ||
     FUNC_3(VAR_4, &VAR_5[1], VAR_1)) {
  goto error;
 }


 if (FUNC_2(VAR_3) ||
     FUNC_1(VAR_3) ||
     FUNC_0(VAR_3, 0x001D, 0x20)) {
  goto error;
 }
 FUNC_2(VAR_3);

 return FUNC_3(VAR_4, ((void*)0), VAR_0);

error:
 FUNC_2(VAR_3);
 return VAR_6;
}
