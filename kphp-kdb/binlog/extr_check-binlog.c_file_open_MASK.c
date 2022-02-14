
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_11__ ;


struct TYPE_20__ {int orig_file_size; TYPE_3__* F; } ;
struct TYPE_18__ {TYPE_5__* backups; TYPE_6__ S; TYPE_9__* binlog; } ;
typedef TYPE_4__ file_t ;
struct TYPE_19__ {char* filename; TYPE_6__ S; int status; struct TYPE_19__* next; } ;
typedef TYPE_5__ backup_file_t ;
struct TYPE_21__ {TYPE_1__* info; } ;
struct TYPE_17__ {TYPE_2__* info; } ;
struct TYPE_16__ {int filename; int preloaded_bytes; int start; } ;
struct TYPE_15__ {int filename; } ;
struct TYPE_14__ {scalar_t__ max_errors_limit; scalar_t__ errors; } ;


 int FUNC_0 (int) ;
 char* VAR_0 ;
 char* FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 () ;
 TYPE_5__* FUNC_3 (char*,int,int ) ;
 int FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (char*,long long,...) ;
 int FUNC_6 (char*,int ,int ,...) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_7 (int ,int ,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (char*,int,char*,char*,char*) ;
 TYPE_11__ VAR_7 ;
 scalar_t__ FUNC_10 (TYPE_6__*) ;
 scalar_t__ FUNC_11 (TYPE_6__*,TYPE_9__*,char*,int) ;
 scalar_t__ FUNC_12 (TYPE_6__*,TYPE_6__*) ;
 int FUNC_13 (char*) ;
 char* FUNC_14 (int) ;

__attribute__((used)) static int FUNC_15 (file_t *VAR_8) {
  backup_file_t *VAR_9;
  FUNC_8 ();
  if (VAR_6) {
    VAR_7.max_errors_limit = VAR_7.errors + VAR_6;
    if (VAR_7.max_errors_limit < 0) {
      FUNC_8 ();
    }
  }

  FUNC_2 ();

  char *VAR_10 = FUNC_1 (VAR_8->binlog->info->filename);
  VAR_8->backups = FUNC_3 (VAR_10, FUNC_13 (VAR_10), 0);
  for (VAR_9 = VAR_8->backups; VAR_9 != ((void*)0); VAR_9 = VAR_9->next) {
    int VAR_11 = FUNC_13 (VAR_9->filename) + FUNC_13 (VAR_0) + 1;
    char *VAR_12 = FUNC_14 (VAR_11 + 1);
    FUNC_0 (FUNC_9 (VAR_12, VAR_11 + 1, "%s/%s", VAR_0, VAR_9->filename) == VAR_11);
    if (FUNC_11 (&VAR_9->S, 0, VAR_12, 1) < 0) {
      VAR_9->status |= VAR_2;
    }
  }

  if (FUNC_11 (&VAR_8->S, VAR_8->binlog, 0, 0) < 0) {
    FUNC_5 ("openning binlog file '%s' in read-only mode failed.", VAR_8->binlog->info->filename);
    return -1;
  }

  if (VAR_8->S.orig_file_size % 4) {
    FUNC_5 ("size(%lld) of '%s' isn't multiple of 4.", (long long) VAR_8->S.orig_file_size, VAR_8->S.F->info->filename);
    return -1;
  }

  for (VAR_9 = VAR_8->backups; VAR_9 != ((void*)0); VAR_9 = VAR_9->next) {
    if (!VAR_9->status) {
      if (FUNC_12 (&VAR_8->S, &VAR_9->S)) {
        FUNC_4 ("backup '%s' and binlog '%s' have equal inodes.", VAR_9->S.F->info->filename, VAR_8->S.F->info->filename);
        VAR_9->status |= VAR_5;
      }
      if (VAR_9->S.orig_file_size > VAR_8->S.orig_file_size) {
        VAR_9->status |= VAR_3;
      }
      if (VAR_9->status == VAR_4 && FUNC_10 (&VAR_9->S) && FUNC_10 (&VAR_8->S)) {
        if (VAR_9->S.orig_file_size != VAR_8->S.orig_file_size) {
          FUNC_6 ("backup '%s' and binlog '%s' have different original file size (%lld and %lld).", VAR_9->S.F->info->filename, VAR_8->S.F->info->filename, VAR_9->S.orig_file_size, VAR_8->S.orig_file_size);
          VAR_9->status |= VAR_1;
        } else if (VAR_9->S.F->info->preloaded_bytes != VAR_8->S.F->info->preloaded_bytes) {
          FUNC_6 ("backup '%s' and binlog '%s' have different header size (%d and %d).", VAR_9->S.F->info->filename, VAR_8->S.F->info->filename, VAR_9->S.F->info->preloaded_bytes, VAR_8->S.F->info->preloaded_bytes);
          VAR_9->status |= VAR_1;
        } else if (FUNC_7 (VAR_9->S.F->info->start, VAR_8->S.F->info->start, VAR_8->S.F->info->preloaded_bytes)) {
          FUNC_6 ("backup '%s' and binlog '%s' have different headers.", VAR_9->S.F->info->filename, VAR_8->S.F->info->filename);
          VAR_9->status |= VAR_1;
        }
      }
    }
  }

  for (VAR_9 = VAR_8->backups; VAR_9 != ((void*)0); VAR_9 = VAR_9->next) {
    if (VAR_9->status != VAR_4) {
      continue;
    }
    backup_file_t *VAR_13;
    for (VAR_13 = VAR_9->next; VAR_13 != ((void*)0); VAR_13 = VAR_13->next) {
      if (VAR_13->status == VAR_4 && FUNC_12 (&VAR_9->S, &VAR_13->S)) {
        VAR_9->status |= VAR_5;
        VAR_13->status |= VAR_5;
        FUNC_4 ("backup '%s' and backup '%s' have equal inodes.", VAR_9->S.F->info->filename, VAR_13->S.F->info->filename);
      }
    }
  }

  return 0;
}
