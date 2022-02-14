
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sockaddr {int dummy; } ;


 int* FUNC_0 (struct sockaddr*,int*) ;

__attribute__((used)) static int
FUNC_1(struct sockaddr *VAR_0)
{
 u_char *VAR_1;
 int VAR_2, VAR_3;

 if ((VAR_1 = FUNC_0(VAR_0, &VAR_3)) == ((void*)0))
  return (-1);

 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++)
  if (VAR_1[VAR_2] != 0xff)
   break;
 if (VAR_2 < VAR_3) {
  if (~VAR_1[VAR_2] & (u_char)(~VAR_1[VAR_2] + 1))
   return (-1);
  VAR_2++;
 }
 for (; VAR_2 < VAR_3; VAR_2++)
  if (VAR_1[VAR_2] != 0)
   return (-1);
 return (0);
}
