
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct bad_image_cache_entry {unsigned long long binlog_file_id; scalar_t__ offset; int cached_time; scalar_t__ timeout; } ;
struct TYPE_5__ {unsigned long long binlog_file_id; } ;
typedef TYPE_1__ storage_binlog_file_t ;
struct TYPE_6__ {scalar_t__ offset; scalar_t__ cancelled; } ;
typedef TYPE_2__ metafile_t ;


 unsigned long long VAR_0 ;
 struct bad_image_cache_entry* VAR_1 ;
 int FUNC_0 (int) ;
 void* VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_1 (storage_binlog_file_t *VAR_5, metafile_t *VAR_6) {
  int VAR_7 = (VAR_5->binlog_file_id ^ (unsigned long long) VAR_6->offset) % VAR_0;
  FUNC_0 (VAR_7 >= 0 && VAR_7 < VAR_0);
  struct bad_image_cache_entry *VAR_8 = &VAR_1[VAR_7];
  if (VAR_6->cancelled) {
    if (VAR_8->binlog_file_id == VAR_5->binlog_file_id && VAR_8->offset == VAR_6->offset) {
      VAR_8->cached_time <<= 1;
      if (VAR_8->cached_time > VAR_2) {
        VAR_8->cached_time = VAR_2;
      }
    } else {
      VAR_8->cached_time = VAR_3;
    }
  } else {
    VAR_8->cached_time = VAR_2;
  }
  VAR_8->binlog_file_id = VAR_5->binlog_file_id;
  VAR_8->offset = VAR_6->offset;
  VAR_8->timeout = VAR_4 + VAR_8->cached_time;
}
