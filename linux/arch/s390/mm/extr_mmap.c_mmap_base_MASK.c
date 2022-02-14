
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit {unsigned long rlim_cur; } ;


 unsigned long FUNC_0 (int) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_1 () ;

__attribute__((used)) static inline unsigned long FUNC_2(unsigned long VAR_2,
          struct rlimit *VAR_3)
{
 unsigned long VAR_4 = VAR_3->rlim_cur;
 unsigned long VAR_5 = FUNC_1() + VAR_1;
 unsigned long VAR_6, VAR_7;


 if (VAR_4 + VAR_5 > VAR_4)
  VAR_4 += VAR_5;





 VAR_6 = 32 * 1024 * 1024UL;
 VAR_7 = (VAR_0 / 6) * 5;

 if (VAR_4 < VAR_6)
  VAR_4 = VAR_6;
 else if (VAR_4 > VAR_7)
  VAR_4 = VAR_7;

 return FUNC_0(VAR_0 - VAR_4 - VAR_2);
}
