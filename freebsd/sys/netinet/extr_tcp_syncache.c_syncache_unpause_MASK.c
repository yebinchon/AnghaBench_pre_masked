
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct tcp_syncache {scalar_t__ pause_until; int paused; int pause_co; int pause_mtx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *,int) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void
FUNC_3(void *VAR_4)
{
 struct tcp_syncache *VAR_5;
 time_t VAR_6;

 VAR_5 = VAR_4;
 FUNC_2(&VAR_5->pause_mtx, VAR_1 | VAR_0);
 FUNC_0(&VAR_5->pause_co);





 if ((VAR_6 = VAR_5->pause_until - VAR_3) > 0)
  FUNC_1(&VAR_5->pause_co, VAR_6 * VAR_2);
 else
  VAR_5->paused = 0;
}
