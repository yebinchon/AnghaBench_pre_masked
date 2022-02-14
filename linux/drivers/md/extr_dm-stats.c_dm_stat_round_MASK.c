
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_stat_shared {unsigned long long stamp; int * in_flight; } ;
struct dm_stat_percpu {unsigned long long* io_ticks; unsigned long long io_ticks_total; unsigned int time_in_queue; } ;
struct dm_stat {int stat_flags; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 unsigned long long VAR_3 ;
 int FUNC_1 () ;
 unsigned long long FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct dm_stat *VAR_4, struct dm_stat_shared *VAR_5,
     struct dm_stat_percpu *VAR_6)
{



 unsigned long long VAR_7, VAR_8;
 unsigned VAR_9, VAR_10;

 if (FUNC_3(!(VAR_4->stat_flags & VAR_1)))
  VAR_7 = VAR_3;
 else
  VAR_7 = FUNC_2(FUNC_1());

 VAR_8 = VAR_7 - VAR_5->stamp;
 if (!VAR_8)
  return;

 VAR_9 = (unsigned)FUNC_0(&VAR_5->in_flight[VAR_0]);
 VAR_10 = (unsigned)FUNC_0(&VAR_5->in_flight[VAR_2]);
 if (VAR_9)
  VAR_6->io_ticks[VAR_0] += VAR_8;
 if (VAR_10)
  VAR_6->io_ticks[VAR_2] += VAR_8;
 if (VAR_9 + VAR_10) {
  VAR_6->io_ticks_total += VAR_8;
  VAR_6->time_in_queue += (VAR_9 + VAR_10) * VAR_8;
 }
 VAR_5->stamp = VAR_7;
}
