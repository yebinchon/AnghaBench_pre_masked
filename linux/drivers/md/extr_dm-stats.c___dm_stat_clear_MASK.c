
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* histogram; scalar_t__ time_in_queue; scalar_t__ io_ticks_total; scalar_t__* io_ticks; scalar_t__* ticks; scalar_t__* merges; scalar_t__* ios; scalar_t__* sectors; } ;
struct dm_stat_shared {TYPE_1__ tmp; } ;
struct dm_stat_percpu {int * histogram; int time_in_queue; int io_ticks_total; int * io_ticks; int * ticks; int * merges; int * ios; int * sectors; } ;
struct dm_stat {int n_histogram_entries; struct dm_stat_percpu** stat_percpu; struct dm_stat_shared* stat_shared; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct dm_stat_shared*,struct dm_stat*,size_t) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 size_t FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct dm_stat *VAR_2, size_t VAR_3, size_t VAR_4,
       bool VAR_5)
{
 size_t VAR_6;
 struct dm_stat_shared *VAR_7;
 struct dm_stat_percpu *VAR_8;

 for (VAR_6 = VAR_3; VAR_6 < VAR_4; VAR_6++) {
  VAR_7 = &VAR_2->stat_shared[VAR_6];
  if (VAR_5)
   FUNC_0(VAR_7, VAR_2, VAR_6);
  FUNC_1();
  VAR_8 = &VAR_2->stat_percpu[FUNC_3()][VAR_6];
  VAR_8->sectors[VAR_0] -= VAR_7->tmp.sectors[VAR_0];
  VAR_8->sectors[VAR_1] -= VAR_7->tmp.sectors[VAR_1];
  VAR_8->ios[VAR_0] -= VAR_7->tmp.ios[VAR_0];
  VAR_8->ios[VAR_1] -= VAR_7->tmp.ios[VAR_1];
  VAR_8->merges[VAR_0] -= VAR_7->tmp.merges[VAR_0];
  VAR_8->merges[VAR_1] -= VAR_7->tmp.merges[VAR_1];
  VAR_8->ticks[VAR_0] -= VAR_7->tmp.ticks[VAR_0];
  VAR_8->ticks[VAR_1] -= VAR_7->tmp.ticks[VAR_1];
  VAR_8->io_ticks[VAR_0] -= VAR_7->tmp.io_ticks[VAR_0];
  VAR_8->io_ticks[VAR_1] -= VAR_7->tmp.io_ticks[VAR_1];
  VAR_8->io_ticks_total -= VAR_7->tmp.io_ticks_total;
  VAR_8->time_in_queue -= VAR_7->tmp.time_in_queue;
  FUNC_2();
  if (VAR_2->n_histogram_entries) {
   unsigned VAR_9;
   for (VAR_9 = 0; VAR_9 < VAR_2->n_histogram_entries + 1; VAR_9++) {
    FUNC_1();
    VAR_8 = &VAR_2->stat_percpu[FUNC_3()][VAR_6];
    VAR_8->histogram[VAR_9] -= VAR_7->tmp.histogram[VAR_9];
    FUNC_2();
   }
  }
 }
}
