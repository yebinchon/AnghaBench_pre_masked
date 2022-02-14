
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ fails; } ;
struct TYPE_5__ {double counter; scalar_t__ old_value; } ;
struct TYPE_7__ {TYPE_2__ st_read; TYPE_1__ as_read; } ;
typedef TYPE_3__ storage_binlog_file_t ;



__attribute__((used)) static void FUNC_0 (storage_binlog_file_t *VAR_0, double VAR_1) {
  VAR_0->as_read.counter *= VAR_1;
  VAR_0->as_read.counter += VAR_0->st_read.fails - VAR_0->as_read.old_value;
  VAR_0->as_read.old_value = VAR_0->st_read.fails;
}
