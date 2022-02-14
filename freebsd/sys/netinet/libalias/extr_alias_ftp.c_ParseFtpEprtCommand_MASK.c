
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
 char VAR_3, VAR_4;
 int VAR_5, VAR_6;
 u_int32_t VAR_7;
 u_short VAR_8;
 u_int8_t VAR_9;




 if (VAR_2 < 18)
  return (0);

 if (FUNC_3("EPRT ", VAR_1, 5))
  return (0);

 VAR_7 = VAR_8 = VAR_9 = 0;
 VAR_4 = '|';
 VAR_6 = 0;
 for (VAR_5 = 5; VAR_5 < VAR_2; VAR_5++) {
  VAR_3 = VAR_1[VAR_5];
  switch (VAR_6) {
  case 0:
   if (!FUNC_2(VAR_3)) {
    VAR_4 = VAR_3;
    VAR_6++;
   }
   break;
  case 1:
   if (VAR_3 == '1')
    VAR_6++;
   else
    return (0);
   break;
  case 2:
   if (VAR_3 == VAR_4)
    VAR_6++;
   else
    return (0);
   break;
  case 3:
  case 5:
  case 7:
  case 9:
   if (FUNC_1(VAR_3)) {
    VAR_9 = VAR_3 - '0';
    VAR_6++;
   } else
    return (0);
   break;
  case 4:
  case 6:
  case 8:
  case 10:
   if (FUNC_1(VAR_3))
    VAR_9 = 10 * VAR_9 + VAR_3 - '0';
   else if (VAR_3 == '.' || VAR_6 == 10) {
    VAR_7 = (VAR_7 << 8) + VAR_9;
    VAR_6++;
   } else
    return (0);
   break;
  case 11:
   if (FUNC_1(VAR_3)) {
    VAR_8 = VAR_3 - '0';
    VAR_6++;
   } else
    return (0);
   break;
  case 12:
   if (FUNC_1(VAR_3))
    VAR_8 = 10 * VAR_8 + VAR_3 - '0';
   else if (VAR_3 == VAR_4)
    VAR_6++;
   else
    return (0);
   break;
  }
 }

 if (VAR_6 == 13) {
  VAR_0->true_addr.s_addr = FUNC_0(VAR_7);
  VAR_0->true_port = VAR_8;
  return (1);
 } else
  return (0);
}
