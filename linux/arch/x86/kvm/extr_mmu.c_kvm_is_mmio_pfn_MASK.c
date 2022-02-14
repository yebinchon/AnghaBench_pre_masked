
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ kvm_pfn_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,scalar_t__,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;

__attribute__((used)) static bool FUNC_8(kvm_pfn_t VAR_1)
{
 if (FUNC_7(VAR_1))
  return !FUNC_2(VAR_1) && FUNC_0(FUNC_6(VAR_1)) &&
   (!FUNC_3() || FUNC_4(VAR_1));

 return !FUNC_1(FUNC_5(VAR_1),
         FUNC_5(VAR_1 + 1) - 1,
         VAR_0);
}
