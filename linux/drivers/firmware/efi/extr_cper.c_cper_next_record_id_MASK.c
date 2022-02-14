
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int time64_t ;
typedef int atomic64_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 () ;

u64 FUNC_4(void)
{
 static atomic64_t VAR_0;

 if (!FUNC_1(&VAR_0)) {
  time64_t VAR_1 = FUNC_3();







  if (VAR_1 < 0x80000000)
   FUNC_2(&VAR_0, (FUNC_3()) << 32);
  else
   FUNC_2(&VAR_0, 0x8000000000000000ull |
        FUNC_3() << 24);
 }

 return FUNC_0(&VAR_0);
}
