
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ counter; } ;
struct TYPE_7__ {TYPE_1__ as_read; } ;
typedef TYPE_2__ storage_binlog_file_t ;


 int VAR_0 ;
 double FUNC_0 (scalar_t__) ;

__attribute__((used)) static storage_binlog_file_t *FUNC_1 (void **VAR_1, storage_binlog_file_t *VAR_2, storage_binlog_file_t *VAR_3) {
  if (FUNC_0 (VAR_2->as_read.counter - VAR_3->as_read.counter) < 1.0) {
    VAR_0;
  }
  return VAR_2->as_read.counter < VAR_3->as_read.counter ? VAR_2 : VAR_3;
}
