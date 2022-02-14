
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct psmouse {int ps2dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int FUNC_2(struct psmouse *VAR_2, u8 VAR_3)
{
 u8 VAR_4[1];
 int VAR_5;

 VAR_5 = FUNC_1(&VAR_2->ps2dev, VAR_3);
 if (VAR_5)
  return VAR_5;

 VAR_4[0] = VAR_1;
 VAR_5 = FUNC_0(&VAR_2->ps2dev, VAR_4, VAR_0);
 if (VAR_5)
  return VAR_5;

 return 0;
}
