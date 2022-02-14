
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int kvm_pfn_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,unsigned long long) ;
 int FUNC_2 (int *,unsigned long long) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(u64 *VAR_0)
{
 kvm_pfn_t VAR_1;
 u64 VAR_2 = *VAR_0;

 if (!FUNC_11(VAR_2))
  FUNC_1(VAR_0, 0ull);
 else
  VAR_2 = FUNC_2(VAR_0, 0ull);

 if (!FUNC_5(VAR_2))
  return 0;

 VAR_1 = FUNC_12(VAR_2);






 FUNC_0(!FUNC_6(VAR_1) && !FUNC_9(FUNC_10(VAR_1)));

 if (FUNC_3(VAR_2))
  FUNC_7(VAR_1);

 if (FUNC_4(VAR_2))
  FUNC_8(VAR_1);

 return 1;
}
