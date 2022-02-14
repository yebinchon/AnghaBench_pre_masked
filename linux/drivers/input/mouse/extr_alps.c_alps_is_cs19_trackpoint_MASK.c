
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct psmouse {int ps2dev; } ;


 int FUNC_0 (int ,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int*,int ) ;

__attribute__((used)) static bool FUNC_2(struct psmouse *VAR_2)
{
 u8 VAR_3[2] = { 0 };

 if (FUNC_1(&VAR_2->ps2dev,
   VAR_3, FUNC_0(0, 2, VAR_0)))
  return 0;







 return VAR_3[0] == VAR_1 && ((VAR_3[1] & 0xf0) == 0x20);
}
