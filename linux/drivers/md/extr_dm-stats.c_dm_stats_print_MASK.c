
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_stats {int mutex; } ;
struct TYPE_2__ {int * histogram; int * io_ticks; int time_in_queue; int io_ticks_total; int * ticks; int * sectors; int * merges; int * ios; } ;
struct dm_stat_shared {TYPE_1__ tmp; } ;
struct dm_stat {size_t n_entries; size_t step; size_t start; size_t end; int n_histogram_entries; struct dm_stat_shared* stat_shared; } ;
typedef size_t sector_t ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (struct dm_stat*,size_t,size_t,int) ;
 int FUNC_2 (struct dm_stat_shared*,struct dm_stat*,size_t) ;
 struct dm_stat* FUNC_3 (struct dm_stats*,int) ;
 int FUNC_4 (struct dm_stat*,int ) ;
 int FUNC_5 (struct dm_stat_shared*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct dm_stats *VAR_3, int VAR_4,
     size_t VAR_5, size_t VAR_6,
     bool VAR_7, char *VAR_8, unsigned VAR_9)
{
 unsigned VAR_10 = 0;
 struct dm_stat *VAR_11;
 size_t VAR_12;
 sector_t VAR_13, VAR_14, VAR_15;
 size_t VAR_16;
 struct dm_stat_shared *VAR_17;






 FUNC_6(&VAR_3->mutex);

 VAR_11 = FUNC_3(VAR_3, VAR_4);
 if (!VAR_11) {
  FUNC_7(&VAR_3->mutex);
  return -VAR_0;
 }

 VAR_16 = VAR_5 + VAR_6;
 if (VAR_16 < VAR_5 ||
     VAR_16 > VAR_11->n_entries)
  VAR_16 = VAR_11->n_entries;

 if (VAR_5 > VAR_16)
  VAR_5 = VAR_16;

 VAR_15 = VAR_11->step;
 VAR_13 = VAR_11->start + (VAR_15 * VAR_5);

 for (VAR_12 = VAR_5; VAR_12 < VAR_16; VAR_12++, VAR_13 = VAR_14) {
  VAR_17 = &VAR_11->stat_shared[VAR_12];
  VAR_14 = VAR_13 + VAR_15;
  if (FUNC_8(VAR_14 > VAR_11->end))
   VAR_14 = VAR_11->end;

  FUNC_2(VAR_17, VAR_11, VAR_12);

  FUNC_0("%llu+%llu %llu %llu %llu %llu %llu %llu %llu %llu %d %llu %llu %llu %llu",
         (unsigned long long)VAR_13,
         (unsigned long long)VAR_15,
         VAR_17->tmp.ios[VAR_1],
         VAR_17->tmp.merges[VAR_1],
         VAR_17->tmp.sectors[VAR_1],
         FUNC_4(VAR_11, VAR_17->tmp.ticks[VAR_1]),
         VAR_17->tmp.ios[VAR_2],
         VAR_17->tmp.merges[VAR_2],
         VAR_17->tmp.sectors[VAR_2],
         FUNC_4(VAR_11, VAR_17->tmp.ticks[VAR_2]),
         FUNC_5(VAR_17),
         FUNC_4(VAR_11, VAR_17->tmp.io_ticks_total),
         FUNC_4(VAR_11, VAR_17->tmp.time_in_queue),
         FUNC_4(VAR_11, VAR_17->tmp.io_ticks[VAR_1]),
         FUNC_4(VAR_11, VAR_17->tmp.io_ticks[VAR_2]));
  if (VAR_11->n_histogram_entries) {
   unsigned VAR_18;
   for (VAR_18 = 0; VAR_18 < VAR_11->n_histogram_entries + 1; VAR_18++) {
    FUNC_0("%s%llu", !VAR_18 ? " " : ":", VAR_17->tmp.histogram[VAR_18]);
   }
  }
  FUNC_0("\n");

  if (FUNC_8(VAR_10 + 1 >= VAR_9))
   goto buffer_overflow;
 }

 if (VAR_7)
  FUNC_1(VAR_11, VAR_5, VAR_16, 0);

buffer_overflow:
 FUNC_7(&VAR_3->mutex);

 return 1;
}
