
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int* FUNC_1 (struct sockaddr*,int*) ;

__attribute__((used)) static int
FUNC_2(struct sockaddr_storage *VAR_1, int VAR_2)
{
 u_char *VAR_3;
 int VAR_4, VAR_5, VAR_6;

 if ((VAR_3 = FUNC_1((struct sockaddr *)VAR_1, &VAR_6)) == ((void*)0))
  return (-1);
 if (VAR_2 > VAR_6 * VAR_0)
  return (-1);

 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
  VAR_4 = FUNC_0(VAR_0, VAR_2);
  *VAR_3++ = (u_char)~0 << (VAR_0 - VAR_4);
  VAR_2 -= VAR_4;
 }
 return 0;
}
