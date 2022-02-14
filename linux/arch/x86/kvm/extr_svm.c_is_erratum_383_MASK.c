
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int VAR_2 ;
 int FUNC_2 (unsigned long long) ;
 unsigned long long FUNC_3 (int ,int*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (unsigned long long) ;

__attribute__((used)) static bool FUNC_6(void)
{
 int VAR_3, VAR_4;
 u64 VAR_5;

 if (!VAR_2)
  return 0;

 VAR_5 = FUNC_3(VAR_0, &VAR_3);
 if (VAR_3)
  return 0;


 VAR_5 &= ~(1ULL << 62);

 if (VAR_5 != 0xb600000000010015ULL)
  return 0;


 for (VAR_4 = 0; VAR_4 < 6; ++VAR_4)
  FUNC_4(FUNC_0(VAR_4), 0, 0);

 VAR_5 = FUNC_3(VAR_1, &VAR_3);
 if (!VAR_3) {
  u32 VAR_6, VAR_7;

  VAR_5 &= ~(1ULL << 2);
  VAR_6 = FUNC_2(VAR_5);
  VAR_7 = FUNC_5(VAR_5);

  FUNC_4(VAR_1, VAR_6, VAR_7);
 }


 FUNC_1();

 return 1;
}
