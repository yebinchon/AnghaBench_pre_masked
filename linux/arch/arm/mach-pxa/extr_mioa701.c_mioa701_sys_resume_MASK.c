
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (int ) ;
 int * VAR_5 ;

__attribute__((used)) static void FUNC_1(void)
{
 int VAR_6 = 0;
 u32 *VAR_7 = FUNC_0(VAR_4);
 u32 *VAR_8 = FUNC_0(VAR_2);
 u32 *VAR_9 = FUNC_0(VAR_1);
 u32 *VAR_10 = FUNC_0(VAR_3);

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  VAR_7[VAR_6] = VAR_5[VAR_6];
 *VAR_8 = VAR_5[VAR_6++];
 *VAR_9 = VAR_5[VAR_6++];
 *VAR_10 = VAR_5[VAR_6++];
}
