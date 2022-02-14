
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit {unsigned long rlim_cur; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_0 (unsigned long) ;
 unsigned long VAR_3 ;
 unsigned long FUNC_1 () ;

__attribute__((used)) static inline unsigned long FUNC_2(unsigned long VAR_4,
          struct rlimit *VAR_5)
{
 unsigned long VAR_6 = VAR_5->rlim_cur;
 unsigned long VAR_7 = FUNC_1() + VAR_3;


 if (VAR_6 + VAR_7 > VAR_6)
  VAR_6 += VAR_7;

 if (VAR_6 < VAR_2)
  VAR_6 = VAR_2;
 else if (VAR_6 > VAR_1)
  VAR_6 = VAR_1;

 return FUNC_0(VAR_0 - VAR_6 - VAR_4);
}
