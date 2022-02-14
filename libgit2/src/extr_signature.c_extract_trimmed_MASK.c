
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,size_t) ;
 scalar_t__ FUNC_1 (unsigned char) ;

__attribute__((used)) static char *FUNC_2(const char *VAR_0, size_t VAR_1)
{
 while (VAR_1 && FUNC_1((unsigned char)VAR_0[0])) {
  VAR_0++; VAR_1--;
 }

 while (VAR_1 && FUNC_1((unsigned char)VAR_0[VAR_1 - 1])) {
  VAR_1--;
 }

 return FUNC_0(VAR_0, VAR_1);
}
