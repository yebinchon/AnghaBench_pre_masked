
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,int,int ) ;
 int * VAR_4 ;
 int * VAR_5 ;

__attribute__((used)) static void FUNC_1(u64 VAR_6)
{
 u32 VAR_7, VAR_8, VAR_9;

 for (VAR_7 = 0; VAR_7 < 2; VAR_7++) {
  for (VAR_8 = 0, VAR_9 = VAR_2; VAR_9 <= VAR_0; VAR_9++, VAR_8++)
   FUNC_0(VAR_6, VAR_9, VAR_7,
      VAR_4[VAR_8]);

  for (VAR_8 = 0, VAR_9 = VAR_3; VAR_9 <= VAR_1; VAR_9++, VAR_8++)
   FUNC_0(VAR_6, VAR_9, VAR_7,
      VAR_5[VAR_8]);
 }
}
