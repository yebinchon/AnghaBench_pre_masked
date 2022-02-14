
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
struct libalias {int true_port; } ;


 int FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_2(struct libalias *VAR_0, char *VAR_1, int VAR_2)
{
 char VAR_3, VAR_4;
 int VAR_5, VAR_6;
 u_short VAR_7;




 if (VAR_2 < 11)
  return (0);

 if (FUNC_1("229 ", VAR_1, 4))
  return (0);

 VAR_7 = 0;
 VAR_4 = '|';

 VAR_6 = 0;
 for (VAR_5 = 4; VAR_5 < VAR_2; VAR_5++) {
  VAR_3 = VAR_1[VAR_5];
  switch (VAR_6) {
  case 0:
   if (VAR_3 == '(')
    VAR_6++;
   break;
  case 1:
   VAR_4 = VAR_3;
   VAR_6++;
   break;
  case 2:
  case 3:
   if (VAR_3 == VAR_4)
    VAR_6++;
   else
    return (0);
   break;
  case 4:
   if (FUNC_0(VAR_3)) {
    VAR_7 = VAR_3 - '0';
    VAR_6++;
   } else
    return (0);
   break;
  case 5:
   if (FUNC_0(VAR_3))
    VAR_7 = 10 * VAR_7 + VAR_3 - '0';
   else if (VAR_3 == VAR_4)
    VAR_6++;
   else
    return (0);
   break;
  case 6:
   if (VAR_3 == ')')
    VAR_6++;
   else
    return (0);
   break;
  }
 }

 if (VAR_6 == 7) {
  VAR_0->true_port = VAR_7;
  return (1);
 } else
  return (0);
}
