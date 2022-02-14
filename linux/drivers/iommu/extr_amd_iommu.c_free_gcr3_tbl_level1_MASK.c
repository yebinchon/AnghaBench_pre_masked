
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int* FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(u64 *VAR_2)
{
 u64 *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < 512; ++VAR_4) {
  if (!(VAR_2[VAR_4] & VAR_0))
   continue;

  VAR_3 = FUNC_1(VAR_2[VAR_4] & VAR_1);

  FUNC_0((unsigned long)VAR_3);
 }
}
