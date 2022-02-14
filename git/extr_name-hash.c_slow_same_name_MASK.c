
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char FUNC_0 (unsigned char) ;

__attribute__((used)) static int FUNC_1(const char *VAR_0, int VAR_1, const char *VAR_2, int VAR_3)
{
 if (VAR_1 != VAR_3)
  return 0;

 while (VAR_1) {
  unsigned char VAR_4 = *VAR_0++;
  unsigned char VAR_5 = *VAR_2++;
  VAR_1--;
  if (VAR_4 != VAR_5) {
   VAR_4 = FUNC_0(VAR_4);
   VAR_5 = FUNC_0(VAR_5);
   if (VAR_4 != VAR_5)
    return 0;
  }
 }
 return 1;
}
