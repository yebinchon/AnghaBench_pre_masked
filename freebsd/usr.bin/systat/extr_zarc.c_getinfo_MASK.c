
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int vdev_cache_stats; int arcstats_l2; int zfetchstats; int arcstats_prefetch_metadata; int arcstats_prefetch_data; int arcstats_demand_metadata; int arcstats_demand_data; int arcstats; } ;
struct TYPE_6__ {int vdev_cache_stats; int arcstats_l2; int zfetchstats; int arcstats_prefetch_metadata; int arcstats_prefetch_data; int arcstats_demand_metadata; int arcstats_demand_data; int arcstats; } ;
struct zarcstats {TYPE_2__ misses; TYPE_1__ hits; } ;
struct devinfo {int dummy; } ;
struct TYPE_9__ {int snap_time; struct devinfo* dinfo; } ;
struct TYPE_8__ {int snap_time; struct devinfo* dinfo; } ;


 int FUNC_0 (char*,int ) ;
 TYPE_4__ VAR_0 ;
 int FUNC_1 (TYPE_4__*) ;
 TYPE_3__ VAR_1 ;
 scalar_t__ FUNC_2 (char*,int *,size_t*,int *,int ) ;

__attribute__((used)) static void
FUNC_3(struct zarcstats *VAR_2)
{
 struct devinfo *VAR_3;

 VAR_3 = VAR_1.dinfo;
 VAR_1.dinfo = VAR_0.dinfo;
 VAR_0.dinfo = VAR_3;

 VAR_1.snap_time = VAR_0.snap_time;
 FUNC_1( &VAR_0 );

 size_t VAR_4 = sizeof( VAR_2->hits.arcstats );
 if ( FUNC_2("kstat.zfs.misc.arcstats.hits",
  &VAR_2->hits.arcstats, &VAR_4, ((void*)0), 0 ) != 0 )
  return;
 FUNC_0("kstat.zfs.misc.arcstats.misses",
  VAR_2->misses.arcstats);
 FUNC_0("kstat.zfs.misc.arcstats.demand_data_hits",
  VAR_2->hits.arcstats_demand_data);
 FUNC_0("kstat.zfs.misc.arcstats.demand_data_misses",
  VAR_2->misses.arcstats_demand_data);
 FUNC_0("kstat.zfs.misc.arcstats.demand_metadata_hits",
  VAR_2->hits.arcstats_demand_metadata);
 FUNC_0("kstat.zfs.misc.arcstats.demand_metadata_misses",
  VAR_2->misses.arcstats_demand_metadata);
 FUNC_0("kstat.zfs.misc.arcstats.prefetch_data_hits",
  VAR_2->hits.arcstats_prefetch_data);
 FUNC_0("kstat.zfs.misc.arcstats.prefetch_data_misses",
  VAR_2->misses.arcstats_prefetch_data);
 FUNC_0("kstat.zfs.misc.arcstats.prefetch_metadata_hits",
  VAR_2->hits.arcstats_prefetch_metadata);
 FUNC_0("kstat.zfs.misc.arcstats.prefetch_metadata_misses",
  VAR_2->misses.arcstats_prefetch_metadata);
 FUNC_0("kstat.zfs.misc.zfetchstats.hits",
  VAR_2->hits.zfetchstats);
 FUNC_0("kstat.zfs.misc.zfetchstats.misses",
  VAR_2->misses.zfetchstats);
 FUNC_0("kstat.zfs.misc.arcstats.l2_hits",
  VAR_2->hits.arcstats_l2);
 FUNC_0("kstat.zfs.misc.arcstats.l2_misses",
  VAR_2->misses.arcstats_l2);
 FUNC_0("kstat.zfs.misc.vdev_cache_stats.hits",
  VAR_2->hits.vdev_cache_stats);
 FUNC_0("kstat.zfs.misc.vdev_cache_stats.misses",
  VAR_2->misses.vdev_cache_stats);
}
