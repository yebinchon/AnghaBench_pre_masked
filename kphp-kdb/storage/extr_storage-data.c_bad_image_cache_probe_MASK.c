
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct bad_image_cache_entry {unsigned long long binlog_file_id; long long offset; scalar_t__ timeout; } ;
struct TYPE_3__ {unsigned long long binlog_file_id; } ;
typedef TYPE_1__ storage_binlog_file_t ;


 unsigned long long VAR_0 ;
 struct bad_image_cache_entry* VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_1 (storage_binlog_file_t *VAR_3, long long VAR_4) {
  int VAR_5 = (VAR_3->binlog_file_id ^ (unsigned long long) VAR_4) % VAR_0;
  FUNC_0 (VAR_5 >= 0 && VAR_5 < VAR_0);
  struct bad_image_cache_entry *VAR_6 = &VAR_1[VAR_5];
  return VAR_6->binlog_file_id == VAR_3->binlog_file_id && VAR_6->offset == VAR_4 && VAR_2 <= VAR_6->timeout;
}
