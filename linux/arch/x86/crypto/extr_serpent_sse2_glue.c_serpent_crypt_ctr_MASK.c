
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u128 ;
typedef int le128 ;
typedef int be128 ;


 int FUNC_0 (void*,int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int const*,int *) ;

__attribute__((used)) static void FUNC_4(void *VAR_0, u128 *VAR_1, const u128 *VAR_2, le128 *VAR_3)
{
 be128 VAR_4;

 FUNC_2(&VAR_4, VAR_3);
 FUNC_1(VAR_3);

 FUNC_0(VAR_0, (u8 *)&VAR_4, (u8 *)&VAR_4);
 FUNC_3(VAR_1, VAR_2, (u128 *)&VAR_4);
}
