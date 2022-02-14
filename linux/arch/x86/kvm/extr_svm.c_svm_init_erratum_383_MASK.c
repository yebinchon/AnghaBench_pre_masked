
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned long long) ;
 unsigned long long FUNC_1 (int ,int*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (unsigned long long) ;

__attribute__((used)) static void FUNC_5(void)
{
 u32 VAR_3, VAR_4;
 int VAR_5;
 u64 VAR_6;

 if (!FUNC_3(VAR_1))
  return;


 VAR_6 = FUNC_1(VAR_0, &VAR_5);
 if (VAR_5)
  return;

 VAR_6 |= (1ULL << 47);

 VAR_3 = FUNC_0(VAR_6);
 VAR_4 = FUNC_4(VAR_6);

 FUNC_2(VAR_0, VAR_3, VAR_4);

 VAR_2 = 1;
}
