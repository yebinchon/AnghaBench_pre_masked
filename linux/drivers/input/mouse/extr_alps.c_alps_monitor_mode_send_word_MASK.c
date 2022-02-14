
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct psmouse {int dummy; } ;


 scalar_t__ FUNC_0 (struct psmouse*,int) ;

__attribute__((used)) static int FUNC_1(struct psmouse *VAR_0, u16 VAR_1)
{
 int VAR_2, VAR_3;





 for (VAR_2 = 0; VAR_2 <= 8; VAR_2 += 4) {
  VAR_3 = (VAR_1 >> VAR_2) & 0xf;
  if (FUNC_0(VAR_0, VAR_3))
   return -1;
 }

 return 0;
}
