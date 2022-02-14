
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ssize_t ;



__attribute__((used)) static void FUNC_0(void **VAR_0, ssize_t VAR_1, ssize_t VAR_2)
{
 while (VAR_1 < VAR_2) {
  void *VAR_3 = VAR_0[VAR_1];
  VAR_0[VAR_1] = VAR_0[VAR_2];
  VAR_0[VAR_2] = VAR_3;

  VAR_1++;
  VAR_2--;
 }
}
