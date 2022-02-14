
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct psmouse {int ps2dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int FUNC_2(struct psmouse *VAR_1, u8 *VAR_2, u8 VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(&VAR_1->ps2dev, VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_0(&VAR_1->ps2dev, VAR_2, VAR_0 | 0x0300);
 if (VAR_4)
  return VAR_4;

 return 0;
}
