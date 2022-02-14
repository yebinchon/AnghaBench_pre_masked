
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 () ;

__attribute__((used)) static u64 FUNC_9(u32 VAR_1, u64 VAR_2)
{
 u64 VAR_3, VAR_4, VAR_5, VAR_6;
 u64 VAR_7;
 u64 VAR_8 = FUNC_2();

 if (!FUNC_5(VAR_1))
  return 0;

 VAR_3 = FUNC_6(VAR_1);
 VAR_4 = FUNC_4(VAR_1);
 VAR_5 = VAR_2 >> VAR_0;


 VAR_4 = FUNC_7(VAR_4 - VAR_5, VAR_5);

 FUNC_1();
 for (VAR_7 = VAR_4; VAR_7 > VAR_3; VAR_7 -= VAR_5) {
  if (FUNC_3(VAR_1, VAR_7, VAR_5) == 1) {






   VAR_4 = VAR_7 + VAR_5;
   for (VAR_6 = VAR_7; VAR_6 < VAR_4; VAR_6 += VAR_8>> VAR_0) {
    FUNC_0(VAR_1, VAR_6 << VAR_0, VAR_8);
   }
   FUNC_8();
   return VAR_7 << VAR_0;
  }
 }
 FUNC_8();

 return 0;
}
