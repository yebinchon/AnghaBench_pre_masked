
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;



__attribute__((used)) static void FUNC_0(u64 *VAR_0, u64 *VAR_1, u64 VAR_2, int VAR_3)
{
 u64 VAR_4;

 if (VAR_3 > 0)
  VAR_3--;
 else
  VAR_3 = 0;

 VAR_4 = VAR_2 + VAR_3;


 if ((*VAR_0 == 0) && (*VAR_1 == 0)) {
  *VAR_0 = VAR_2;
  *VAR_1 = VAR_4;
 } else if (*VAR_0 <= *VAR_1) {

  if (VAR_2 < *VAR_0)
   *VAR_0 = VAR_2;
  if (VAR_4 > *VAR_1)
   *VAR_1 = VAR_4;
 } else {

  if (VAR_2 <= *VAR_1) {
   if (VAR_4 > *VAR_1)
    *VAR_1 = VAR_4;
  } else if (VAR_4 > *VAR_0) {
   if (VAR_2 < *VAR_0)
    *VAR_0 = VAR_2;
  }

  else if ((VAR_4 - *VAR_1) < (*VAR_0 - VAR_2))
   *VAR_1 = VAR_4;
  else
   *VAR_0 = VAR_2;
 }
}
