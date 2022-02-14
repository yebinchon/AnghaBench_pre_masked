
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int*,int,int*,int,int) ;

__attribute__((used)) static void FUNC_1(int *VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5, VAR_6, VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
   FUNC_0(VAR_0 + VAR_5, VAR_1, VAR_0 + VAR_5 + VAR_3, VAR_1 <= VAR_2, VAR_4);
  VAR_7 = 0;
  for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5 += VAR_1)
   VAR_7 += FUNC_0(VAR_0 + VAR_5, 1, VAR_0 + VAR_5 + VAR_1, VAR_2 <= VAR_1, VAR_4);
  if (!VAR_7)
   break;
 }
}
