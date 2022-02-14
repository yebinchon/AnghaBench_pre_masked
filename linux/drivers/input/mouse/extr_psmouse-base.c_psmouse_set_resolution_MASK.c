
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct psmouse {int resolution; int ps2dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int*,int ) ;

void FUNC_1(struct psmouse *VAR_1, unsigned int VAR_2)
{
 static const u8 VAR_3[] = { 0, 1, 2, 2, 3 };
 u8 VAR_4;

 if (VAR_2 == 0 || VAR_2 > 200)
  VAR_2 = 200;

 VAR_4 = VAR_3[VAR_2 / 50];
 FUNC_0(&VAR_1->ps2dev, &VAR_4, VAR_0);
 VAR_1->resolution = 25 << VAR_4;
}
