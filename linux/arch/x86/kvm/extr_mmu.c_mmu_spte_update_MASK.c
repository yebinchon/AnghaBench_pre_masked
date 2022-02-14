
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static bool FUNC_9(u64 *VAR_0, u64 VAR_1)
{
 bool VAR_2 = 0;
 u64 VAR_3 = FUNC_6(VAR_0, VAR_1);

 if (!FUNC_2(VAR_3))
  return 0;






 if (FUNC_7(VAR_3) &&
       !FUNC_3(VAR_1))
  VAR_2 = 1;






 if (FUNC_0(VAR_3) && !FUNC_0(VAR_1)) {
  VAR_2 = 1;
  FUNC_4(FUNC_8(VAR_3));
 }

 if (FUNC_1(VAR_3) && !FUNC_1(VAR_1)) {
  VAR_2 = 1;
  FUNC_5(FUNC_8(VAR_3));
 }

 return VAR_2;
}
