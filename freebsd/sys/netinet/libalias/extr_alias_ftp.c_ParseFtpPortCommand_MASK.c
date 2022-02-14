
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_short ;
typedef int u_int8_t ;
typedef int u_int32_t ;
struct TYPE_2__ {int s_addr; } ;
struct libalias {int true_port; TYPE_1__ true_addr; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char) ;
 int FUNC_2 (char) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_4(struct libalias *VAR_0, char *VAR_1, int VAR_2)
{
 char VAR_3;
 int VAR_4, VAR_5;
 u_int32_t VAR_6;
 u_short VAR_7;
 u_int8_t VAR_8;




 if (VAR_2 < 18)
  return (0);

 if (FUNC_3("PORT ", VAR_1, 5))
  return (0);

 VAR_6 = VAR_7 = VAR_8 = 0;
 VAR_5 = 0;
 for (VAR_4 = 5; VAR_4 < VAR_2; VAR_4++) {
  VAR_3 = VAR_1[VAR_4];
  switch (VAR_5) {
  case 0:
   if (FUNC_2(VAR_3))
    break;
   else
    VAR_5++;
  case 1:
  case 3:
  case 5:
  case 7:
  case 9:
  case 11:
   if (FUNC_1(VAR_3)) {
    VAR_8 = VAR_3 - '0';
    VAR_5++;
   } else
    return (0);
   break;
  case 2:
  case 4:
  case 6:
  case 8:
   if (FUNC_1(VAR_3))
    VAR_8 = 10 * VAR_8 + VAR_3 - '0';
   else if (VAR_3 == ',') {
    VAR_6 = (VAR_6 << 8) + VAR_8;
    VAR_5++;
   } else
    return (0);
   break;
  case 10:
  case 12:
   if (FUNC_1(VAR_3))
    VAR_8 = 10 * VAR_8 + VAR_3 - '0';
   else if (VAR_3 == ',' || VAR_5 == 12) {
    VAR_7 = (VAR_7 << 8) + VAR_8;
    VAR_5++;
   } else
    return (0);
   break;
  }
 }

 if (VAR_5 == 13) {
  VAR_0->true_addr.s_addr = FUNC_0(VAR_6);
  VAR_0->true_port = VAR_7;
  return (1);
 } else
  return (0);
}
