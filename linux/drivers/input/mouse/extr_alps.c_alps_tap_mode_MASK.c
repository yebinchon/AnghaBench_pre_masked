
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps2dev {int dummy; } ;
struct psmouse {struct ps2dev ps2dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct psmouse*,unsigned char*) ;
 scalar_t__ FUNC_1 (struct ps2dev*,unsigned char*,int) ;

__attribute__((used)) static int FUNC_2(struct psmouse *VAR_4, int VAR_5)
{
 struct ps2dev *VAR_6 = &VAR_4->ps2dev;
 int VAR_7 = VAR_5 ? VAR_2 : VAR_3;
 unsigned char VAR_8 = VAR_5 ? 0x0A : 0x00;
 unsigned char VAR_9[4];

 if (FUNC_1(VAR_6, VAR_9, VAR_1) ||
     FUNC_1(VAR_6, ((void*)0), VAR_0) ||
     FUNC_1(VAR_6, ((void*)0), VAR_0) ||
     FUNC_1(VAR_6, &VAR_8, VAR_7))
  return -1;

 if (FUNC_0(VAR_4, VAR_9))
  return -1;

 return 0;
}
