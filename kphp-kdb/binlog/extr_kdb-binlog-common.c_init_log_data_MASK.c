
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int orig_file_size; } ;
typedef TYPE_2__ kfs_binlog_zip_header_t ;
struct TYPE_7__ {TYPE_1__* info; int fd; } ;
struct TYPE_5__ {int flags; int file_size; scalar_t__ start; int filename; } ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (long long,int,unsigned int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int ,int ) ;

void FUNC_3 (long long VAR_6, int VAR_7, unsigned VAR_8) {
  FUNC_0 (VAR_0);
  VAR_1 = VAR_0->info->flags & 16;
  VAR_2 = VAR_0->info->filename;
  FUNC_2 (VAR_0->fd, VAR_1 ? ((kfs_binlog_zip_header_t *) VAR_0->info->start)->orig_file_size : VAR_0->info->file_size);
  FUNC_1 (VAR_6, VAR_7, VAR_8);
  VAR_5 = VAR_3 + VAR_4;
}
