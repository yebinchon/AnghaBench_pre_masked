
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
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ber*,int*) ;
 int VAR_6 ;

__attribute__((used)) static ssize_t
FUNC_1(struct ber *VAR_7, unsigned long *VAR_8, int *VAR_9, int *VAR_10)
{
 u_char VAR_11;
 size_t VAR_12 = 0;
 unsigned long VAR_13 = 0;

 if (FUNC_0(VAR_7, &VAR_11) == -1)
  return -1;

 *VAR_9 = (VAR_11 >> VAR_1) & VAR_0;
 *VAR_10 = (VAR_11 & VAR_4) == VAR_4;

 if ((VAR_11 & VAR_2) != VAR_2) {
  *VAR_8 = VAR_11 & VAR_2;
  return 1;
 }

 do {
  if (FUNC_0(VAR_7, &VAR_11) == -1)
   return -1;
  VAR_13 = (VAR_13 << 7) | (VAR_11 & ~VAR_3);
  VAR_12++;
 } while (VAR_11 & VAR_3);

 if (VAR_12 > sizeof(unsigned long)) {
  VAR_6 = VAR_5;
  return -1;
 }

 *VAR_8 = VAR_13;
 return VAR_12 + 1;
}
