
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(char *VAR_0, size_t VAR_1)
{
 int VAR_2;


 while (VAR_1 > 0 && (VAR_0[VAR_1 - 1] == ' ' || VAR_0[VAR_1 - 1] == '\0'))
  VAR_1--;

 while (VAR_1--) {
  VAR_2 = *VAR_0++;
  FUNC_0(VAR_2);
 }
}
