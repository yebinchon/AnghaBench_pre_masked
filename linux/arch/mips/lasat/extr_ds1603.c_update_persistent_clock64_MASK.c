
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time64_t ;
struct timespec64 {scalar_t__ tv_sec; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

int FUNC_6(struct timespec64 VAR_2)
{
 time64_t VAR_3 = VAR_2.tv_sec;
 unsigned long VAR_4;

 FUNC_4(&VAR_1, VAR_4);
 FUNC_1();
 FUNC_2(VAR_0);




 FUNC_3((unsigned long)VAR_3);
 FUNC_0();
 FUNC_5(&VAR_1, VAR_4);

 return 0;
}
