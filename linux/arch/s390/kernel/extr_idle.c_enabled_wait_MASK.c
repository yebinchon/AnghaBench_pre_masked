
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s390_idle_data {unsigned long long clock_idle_exit; unsigned long long clock_idle_enter; unsigned long long idle_time; int seqcount; int idle_count; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned long long) ;
 int FUNC_3 (struct s390_idle_data*,unsigned long) ;
 int VAR_7 ;
 struct s390_idle_data* FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

void FUNC_9(void)
{
 struct s390_idle_data *VAR_8 = FUNC_4(&VAR_7);
 unsigned long long VAR_9;
 unsigned long VAR_10;

 FUNC_6();


 VAR_10 = VAR_1 | VAR_6 | VAR_2 |
  VAR_4 | VAR_3 | VAR_5;
 FUNC_1(VAR_0);


 FUNC_3(VAR_8, VAR_10);

 FUNC_5();


 FUNC_7(&VAR_8->seqcount);
 VAR_9 = VAR_8->clock_idle_exit - VAR_8->clock_idle_enter;
 VAR_8->clock_idle_enter = VAR_8->clock_idle_exit = 0ULL;
 VAR_8->idle_time += VAR_9;
 VAR_8->idle_count++;
 FUNC_0(FUNC_2(VAR_9));
 FUNC_8(&VAR_8->seqcount);
}
