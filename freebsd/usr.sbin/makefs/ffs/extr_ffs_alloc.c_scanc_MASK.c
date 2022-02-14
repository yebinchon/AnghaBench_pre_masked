
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
typedef size_t u_char ;



__attribute__((used)) static int
FUNC_0(u_int VAR_0, const u_char *VAR_1, const u_char VAR_2[], int VAR_3)
{
 const u_char *VAR_4 = &VAR_1[VAR_0];

 while (VAR_1 < VAR_4 && (VAR_2[*VAR_1] & VAR_3) == 0)
  VAR_1++;
 return (VAR_4 - VAR_1);
}
