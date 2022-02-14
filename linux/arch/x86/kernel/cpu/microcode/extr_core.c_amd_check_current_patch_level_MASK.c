
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (size_t**) ;
 size_t* VAR_2 ;
 int FUNC_2 (int ,size_t,size_t) ;

__attribute__((used)) static bool FUNC_3(void)
{
 u32 VAR_3, VAR_4, VAR_5;
 u32 *VAR_6;

 FUNC_2(VAR_1, VAR_3, VAR_4);

 if (FUNC_0(VAR_0))
  VAR_6 = (u32 *)FUNC_1(&VAR_2);
 else
  VAR_6 = VAR_2;

 for (VAR_5 = 0; VAR_6[VAR_5]; VAR_5++) {
  if (VAR_3 == VAR_6[VAR_5])
   return 1;
 }
 return 0;
}
