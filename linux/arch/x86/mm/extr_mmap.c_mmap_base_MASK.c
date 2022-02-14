
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit {unsigned long rlim_cur; } ;


 unsigned long FUNC_0 (unsigned long) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_1 (unsigned long) ;

__attribute__((used)) static unsigned long FUNC_2(unsigned long VAR_2, unsigned long VAR_3,
          struct rlimit *VAR_4)
{
 unsigned long VAR_5 = VAR_4->rlim_cur;
 unsigned long VAR_6 = FUNC_1(VAR_3) + VAR_1;
 unsigned long VAR_7, VAR_8;


 if (VAR_5 + VAR_6 > VAR_5)
  VAR_5 += VAR_6;





 VAR_7 = VAR_0;
 VAR_8 = (VAR_3 / 6) * 5;

 if (VAR_5 < VAR_7)
  VAR_5 = VAR_7;
 else if (VAR_5 > VAR_8)
  VAR_5 = VAR_8;

 return FUNC_0(VAR_3 - VAR_5 - VAR_2);
}
