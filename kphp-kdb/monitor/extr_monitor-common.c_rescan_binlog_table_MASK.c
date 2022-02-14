
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct proc_data {TYPE_3__* minfo; TYPE_2__* uinfo; } ;
struct mon_binlog {int dummy; } ;
struct TYPE_12__ {scalar_t__ magic; } ;
struct binlog_timepos_heap_entry {int refcnt; long long binlog_name_hash; void* writer_pid; TYPE_4__ hdr; scalar_t__ wptr; scalar_t__ rptr; } ;
struct TYPE_9__ {scalar_t__ rescan_binlog_table; } ;
struct TYPE_14__ {TYPE_1__ e_hdr; } ;
struct TYPE_13__ {int mult; long long binlog_name_hash; int binlog_data_offset; } ;
struct TYPE_11__ {int binlog_data_offset; } ;
struct TYPE_10__ {long long binlog_name_hash; } ;


 scalar_t__ VAR_0 ;
 TYPE_8__* VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int) ;
 void* VAR_6 ;
 struct binlog_timepos_heap_entry* FUNC_1 (int) ;
 struct proc_data* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_5__*,TYPE_5__*,int) ;
 TYPE_5__* VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct proc_data*,int) ;
 int FUNC_7 (int,char*,...) ;

int FUNC_8 (void) {
  int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
  FUNC_7 (3, "monitor: rescanning binlog table\n");
  if (VAR_5) {
    VAR_1->e_hdr.rescan_binlog_table = 0;
  }
  for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
    VAR_7[VAR_9].mult = 0;
  }
  for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
    struct proc_data *VAR_14 = FUNC_2 (VAR_3[VAR_9]);
    long long VAR_15 = VAR_14->uinfo[0].binlog_name_hash;
    if (!VAR_15 || VAR_15 != VAR_14->uinfo[1].binlog_name_hash) {
      continue;
    }
    VAR_11 = -1;
    VAR_12 = VAR_8;
    while (VAR_12 - VAR_11 > 1) {
      VAR_13 = (VAR_11 + VAR_12) >> 1;
      if (VAR_7[VAR_13].binlog_name_hash <= VAR_15) {
 VAR_11 = VAR_13;
      } else {
 VAR_12 = VAR_13;
      }
    }
    int VAR_16 = VAR_14->minfo[0].binlog_data_offset;
    if (VAR_11 >= 0 && VAR_7[VAR_11].binlog_name_hash == VAR_15) {
      VAR_7[VAR_11].mult++;
      int VAR_17 = VAR_7[VAR_11].binlog_data_offset;
      if (VAR_16) {
 if (VAR_17) {
   if (VAR_17 != VAR_16 && VAR_5) {
     FUNC_6 (VAR_14, VAR_17);
   }
   continue;
 }
 FUNC_0 (!VAR_5);
 VAR_7[VAR_11].binlog_data_offset = VAR_16;
      } else if (VAR_5) {
 FUNC_0 (VAR_17);
 FUNC_6 (VAR_14, VAR_17);
 FUNC_7 (3, "monitor: updating binlog info for process %d, binlog name hash %016llx to %d\n", VAR_3[VAR_9], VAR_15, VAR_17);
      }
    } else {
      FUNC_0 (VAR_8 < VAR_2);
      FUNC_3 (VAR_7 + VAR_12 + 1, VAR_7 + VAR_12, (VAR_8 - VAR_12) * sizeof (struct mon_binlog));
      VAR_8++;
      VAR_7[VAR_12].binlog_name_hash = VAR_15;
      VAR_7[VAR_12].mult = 1;
      if (VAR_16) {
 struct binlog_timepos_heap_entry *VAR_18 = FUNC_1 (VAR_16);
 if (!VAR_18 || VAR_18->hdr.magic != VAR_0) {
   VAR_16 = 0;
 } else if (VAR_5) {
   VAR_18->writer_pid = VAR_6;
 }
      }
      VAR_7[VAR_12].binlog_data_offset = VAR_16;
      if (VAR_5) {
 if (!VAR_16) {
   VAR_7[VAR_12].binlog_data_offset = VAR_16 = FUNC_4 (sizeof (struct binlog_timepos_heap_entry));
   FUNC_0 (VAR_16);
   struct binlog_timepos_heap_entry *VAR_19 = FUNC_1 (VAR_16);
   VAR_19->refcnt = 1;
   VAR_19->binlog_name_hash = VAR_15;
   VAR_19->rptr = VAR_19->wptr = 0;
   VAR_19->hdr.magic = VAR_0;
   VAR_19->writer_pid = VAR_6;
   FUNC_6 (VAR_14, VAR_16);
   FUNC_7 (3, "monitor: allocating binlog info (process %d) for binlog name hash %016llx at %d\n", VAR_3[VAR_9], VAR_15, VAR_16);
 }
      }
    }
  }
  VAR_10 = 0;
  for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
    if (!VAR_7[VAR_9].mult) {
      int VAR_20 = VAR_7[VAR_9].binlog_data_offset;
      FUNC_7 (3, "monitor: forgetting unused binlog name hash %016llx (data at %d)\n", VAR_7[VAR_9].binlog_name_hash, VAR_20);
      if (VAR_5) {
 FUNC_0 (VAR_20);
 FUNC_5 (VAR_20);
      }
    } else {
      if (VAR_9 != VAR_10) {
 VAR_7[VAR_10] = VAR_7[VAR_9];
      }
      VAR_10++;
    }
  }
  FUNC_7 (3, "monitor: %d active binlogs found\n", VAR_10);
  return VAR_8 = VAR_10;
}
