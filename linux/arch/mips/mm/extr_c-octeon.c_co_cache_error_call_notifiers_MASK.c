
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_0 () ;
 int FUNC_1 (char*,unsigned long long) ;
 int FUNC_2 (int *,unsigned long,int *) ;
 unsigned long long FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(unsigned long VAR_4)
{
 int VAR_5 = FUNC_2(&VAR_3, VAR_4, ((void*)0));
 if ((VAR_5 & ~VAR_1) != VAR_0) {
  u64 VAR_6;
  unsigned long VAR_7 = FUNC_0();
  u64 VAR_8 = FUNC_5();

  if (VAR_4) {
   VAR_6 = VAR_2[VAR_7];
   VAR_2[VAR_7] = 0;
  } else {
   VAR_6 = FUNC_4();
  }

  FUNC_1("Core%lu: Cache error exception:\n", VAR_7);
  FUNC_1("cp0_errorepc == %lx\n", FUNC_3());
  if (VAR_8 & 1) {
   FUNC_1("CacheErr (Icache) == %llx\n",
          (unsigned long long)VAR_8);
   FUNC_6(0);
  }
  if (VAR_6 & 1) {
   FUNC_1("CacheErr (Dcache) == %llx\n",
          (unsigned long long)VAR_6);
  }
 }
}
