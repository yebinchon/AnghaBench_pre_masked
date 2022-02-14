
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {int ps2dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,unsigned char*,int ) ;

__attribute__((used)) static int FUNC_1(struct psmouse *VAR_2)
{
 unsigned char VAR_3[2] = {0xC8, 0x14};

 if (FUNC_0(&VAR_2->ps2dev, ((void*)0), VAR_1) ||
     FUNC_0(&VAR_2->ps2dev, ((void*)0), VAR_1) ||
     FUNC_0(&VAR_2->ps2dev, ((void*)0), VAR_1) ||
     FUNC_0(&VAR_2->ps2dev, &VAR_3[0], VAR_0) ||
     FUNC_0(&VAR_2->ps2dev, &VAR_3[1], VAR_0))
  return -1;

 return 0;
}
