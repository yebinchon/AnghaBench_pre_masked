
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,char const*,int) ;

__attribute__((used)) static int FUNC_1(const char *VAR_0, unsigned long VAR_1)
{



 int VAR_2 = 0;
 char VAR_3;

 while (VAR_1) {
  VAR_3 = *VAR_0++;
  VAR_1--;
  if (VAR_3 != '$')
   continue;
  if (VAR_1 < 3)
   break;
  if (FUNC_0("Id", VAR_0, 2))
   continue;
  VAR_3 = VAR_0[2];
  VAR_0 += 3;
  VAR_1 -= 3;
  if (VAR_3 == '$')
   VAR_2++;
  if (VAR_3 != ':')
   continue;




  while (VAR_1) {
   VAR_3 = *VAR_0++;
   VAR_1--;
   if (VAR_3 == '$') {
    VAR_2++;
    break;
   }
   if (VAR_3 == '\n')
    break;
  }
 }
 return VAR_2;
}
