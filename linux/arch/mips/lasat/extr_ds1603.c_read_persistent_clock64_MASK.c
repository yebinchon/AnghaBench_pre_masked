
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec64 {unsigned long tv_sec; scalar_t__ tv_nsec; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_1 ;
 unsigned long FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

void FUNC_6(struct timespec64 *VAR_2)
{
 unsigned long VAR_3;
 unsigned long VAR_4;

 FUNC_4(&VAR_1, VAR_4);
 FUNC_1();
 FUNC_3(VAR_0);
 VAR_3 = FUNC_2();
 FUNC_0();
 FUNC_5(&VAR_1, VAR_4);

 VAR_2->tv_sec = VAR_3;
 VAR_2->tv_nsec = 0;
}
