
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_stats_aux {unsigned long duration_ns; scalar_t__ merged; } ;
struct dm_stat_shared {int * in_flight; } ;
struct dm_stat_percpu {int* ios; unsigned long* ticks; int * histogram; int * merges; int * sectors; } ;
struct dm_stat {int stat_flags; int n_histogram_entries; unsigned long long* histogram_boundaries; struct dm_stat_percpu** stat_percpu; struct dm_stat_shared* stat_shared; } ;
typedef scalar_t__ sector_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct dm_stat*,struct dm_stat_shared*,struct dm_stat_percpu*) ;
 unsigned long long FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 size_t FUNC_8 () ;

__attribute__((used)) static void FUNC_9(struct dm_stat *VAR_1, size_t VAR_2,
         int VAR_3, sector_t VAR_4,
         struct dm_stats_aux *VAR_5, bool VAR_6,
         unsigned long VAR_7)
{
 struct dm_stat_shared *VAR_8 = &VAR_1->stat_shared[VAR_2];
 struct dm_stat_percpu *VAR_9;
 FUNC_6();

 VAR_9 = &VAR_1->stat_percpu[FUNC_8()][VAR_2];

 if (!VAR_6) {
  FUNC_2(VAR_1, VAR_8, VAR_9);
  FUNC_1(&VAR_8->in_flight[VAR_3]);
 } else {
  unsigned long long VAR_10;
  FUNC_2(VAR_1, VAR_8, VAR_9);
  FUNC_0(&VAR_8->in_flight[VAR_3]);
  VAR_9->sectors[VAR_3] += VAR_4;
  VAR_9->ios[VAR_3] += 1;
  VAR_9->merges[VAR_3] += VAR_5->merged;
  if (!(VAR_1->stat_flags & VAR_0)) {
   VAR_9->ticks[VAR_3] += VAR_7;
   VAR_10 = FUNC_3(VAR_7);
  } else {
   VAR_9->ticks[VAR_3] += VAR_5->duration_ns;
   VAR_10 = VAR_5->duration_ns;
  }
  if (VAR_1->n_histogram_entries) {
   unsigned VAR_11 = 0, VAR_12 = VAR_1->n_histogram_entries + 1;
   while (VAR_11 + 1 < VAR_12) {
    unsigned VAR_13 = (VAR_11 + VAR_12) / 2;
    if (VAR_1->histogram_boundaries[VAR_13 - 1] > VAR_10) {
     VAR_12 = VAR_13;
    } else {
     VAR_11 = VAR_13;
    }

   }
   VAR_9->histogram[VAR_11]++;
  }
 }




 FUNC_7();

}
