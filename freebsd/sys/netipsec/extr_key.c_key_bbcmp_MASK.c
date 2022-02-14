
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char const u_int8_t ;
typedef int u_int ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1, u_int VAR_2)
{
 const unsigned char *VAR_3 = VAR_0;
 const unsigned char *VAR_4 = VAR_1;





 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
  return (VAR_3 == VAR_4);

 while (VAR_2 >= 8) {
  if (*VAR_3++ != *VAR_4++)
   return 0;
  VAR_2 -= 8;
 }

 if (VAR_2 > 0) {
  u_int8_t VAR_5 = ~((1<<(8-VAR_2))-1);
  if ((*VAR_3 & VAR_5) != (*VAR_4 & VAR_5))
   return 0;
 }
 return 1;
}
