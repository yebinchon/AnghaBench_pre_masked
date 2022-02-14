
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ) ;
 int VAR_4 ;

__attribute__((used)) static u64 FUNC_3(u64 *VAR_5, int VAR_6)
{
 u64 VAR_7, VAR_8;
 u64 VAR_9 = VAR_4 ? VAR_4 >> 5 : VAR_2;
 int VAR_10;

 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
  VAR_7 = FUNC_1();
  if (VAR_6)
   *VAR_5 = FUNC_2(VAR_0) & 0xFFFFFFFF;
  else
   *VAR_5 = FUNC_0();
  VAR_8 = FUNC_1();
  if ((VAR_8 - VAR_7) < VAR_9)
   return VAR_8;
 }
 return VAR_3;
}
