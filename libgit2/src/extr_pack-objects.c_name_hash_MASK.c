
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned int) ;

__attribute__((used)) static unsigned FUNC_1(const char *VAR_0)
{
 unsigned VAR_1, VAR_2 = 0;

 if (!VAR_0)
  return 0;






 while ((VAR_1 = *VAR_0++) != 0) {
  if (FUNC_0(VAR_1))
   continue;
  VAR_2 = (VAR_2 >> 2) + (VAR_1 << 24);
 }
 return VAR_2;
}
