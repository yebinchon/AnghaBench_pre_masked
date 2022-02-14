
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u128 ;


 int VAR_0 ;
 int FUNC_0 (void*,int *,int *) ;
 int FUNC_1 (int *,int *,int *) ;

__attribute__((used)) static void FUNC_2(void *VAR_1, u128 *VAR_2, const u128 *VAR_3)
{
 u128 VAR_4[VAR_0 - 1];
 unsigned int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0 - 1; VAR_5++)
  VAR_4[VAR_5] = VAR_3[VAR_5];

 FUNC_0(VAR_1, (u8 *)VAR_2, (u8 *)VAR_3);

 for (VAR_5 = 0; VAR_5 < VAR_0 - 1; VAR_5++)
  FUNC_1(VAR_2 + (VAR_5 + 1), VAR_2 + (VAR_5 + 1), VAR_4 + VAR_5);
}
