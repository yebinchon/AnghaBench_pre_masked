
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char) ;

__attribute__((used)) static int FUNC_1(char *VAR_0)
{
 char *VAR_1 = VAR_0;
 char *VAR_2 = VAR_0;
 unsigned char VAR_3;

 while ((VAR_3 = *VAR_1++) != '\0') {
  if (!FUNC_0(VAR_3))
   *VAR_2++ = VAR_3;
 }
 return VAR_2 - VAR_0;
}
