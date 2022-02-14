
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct ber {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ber*,int*) ;
 int VAR_3 ;

__attribute__((used)) static ssize_t
FUNC_1(struct ber *VAR_4, ssize_t *VAR_5)
{
 u_char VAR_6, VAR_7;
 ssize_t VAR_8, VAR_9;

 if (FUNC_0(VAR_4, &VAR_6) == -1)
  return -1;
 if ((VAR_6 & VAR_0) == 0) {

  *VAR_5 = VAR_6;
  return 1;
 }

 VAR_7 = VAR_6 & ~VAR_0;
 if (sizeof(ssize_t) < VAR_7) {
  VAR_3 = VAR_2;
  return -1;
 }
 VAR_9 = VAR_7 + 1;

 for (VAR_8 = 0; VAR_7 > 0; VAR_7--) {
  if (FUNC_0(VAR_4, &VAR_6) == -1)
   return -1;
  VAR_8 = (VAR_8 << 8) | VAR_6;
 }

 if (VAR_8 < 0) {

  VAR_3 = VAR_2;
  return -1;
 }

 if (VAR_8 == 0) {

  VAR_3 = VAR_1;
  return -1;
 }

 *VAR_5 = VAR_8;
 return VAR_9;
}
