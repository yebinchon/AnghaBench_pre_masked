
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(const char *VAR_0, int VAR_1)
{
 int VAR_2, VAR_3, VAR_4 = 1, VAR_5 = 0;
 VAR_2 = 0;
 while (0 < VAR_1--) {
  VAR_3 = *VAR_0++;
  if (VAR_3 == '\n') {
   VAR_2++;
   VAR_5 = 1;
   VAR_4 = 0;
  }
  else {
   VAR_5 = 0;
   VAR_4 = 0;
  }
 }
 if (VAR_4)
  return 0;
 if (!VAR_5)
  VAR_2++;
 return VAR_2;
}
