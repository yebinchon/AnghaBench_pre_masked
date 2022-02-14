
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char) ;

__attribute__((used)) static size_t FUNC_1(const char *VAR_0, size_t VAR_1)
{
 while (VAR_1) {
  unsigned char VAR_2 = VAR_0[VAR_1 - 1];
  if (!FUNC_0(VAR_2))
   break;
  VAR_1--;
 }

 return VAR_1;
}
