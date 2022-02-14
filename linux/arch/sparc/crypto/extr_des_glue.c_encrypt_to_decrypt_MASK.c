
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(u64 *VAR_1, const u64 *VAR_2)
{
 const u64 *VAR_3 = VAR_2 + (VAR_0 / 2) - 1;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0 / 2; VAR_4++)
  *VAR_1++ = *VAR_3--;
}
