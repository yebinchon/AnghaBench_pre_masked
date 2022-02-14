
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_13__ ;


typedef int volume_t ;
struct lev_storage_file {int dummy; } ;
struct TYPE_15__ {size_t dir_id; int fd_rdonly; } ;
typedef TYPE_1__ storage_binlog_file_t ;
struct TYPE_16__ {long long offset; int local_id; int size; scalar_t__ corrupted; int * aio; int refcnt; int * data; struct TYPE_16__* hnext; TYPE_1__* B; } ;
typedef TYPE_2__ metafile_t ;
struct TYPE_14__ {scalar_t__ pending_aio_connections; } ;


 TYPE_13__* VAR_0 ;
 TYPE_2__** VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (int *,long long,long long,int ) ;
 int * FUNC_3 (int ,int *,long long,int const,int *,TYPE_2__*) ;
 int VAR_5 ;
 TYPE_2__* FUNC_4 (long long,int,int*,int ) ;
 TYPE_2__* FUNC_5 (int const) ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (TYPE_2__*,int ,int) ;
 int VAR_7 ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int,char*,long long,int,int,long long) ;

int FUNC_10 (volume_t *VAR_8, metafile_t **VAR_9, storage_binlog_file_t **VAR_10, long long VAR_11, int VAR_12, int VAR_13, long long VAR_14) {
  *VAR_9 = ((void*)0);
  *VAR_10 = ((void*)0);
  FUNC_9 (3, "load_metafile (volume_id = %lld, local_id = %d, filesize = %d, offset = %lld)\n", VAR_11, VAR_12, VAR_13, VAR_14);
  int VAR_15;
  metafile_t *VAR_16 = FUNC_4 (VAR_11, VAR_12, &VAR_15, 0);
  if (VAR_16 != ((void*)0)) {
    *VAR_9 = VAR_16;
    FUNC_7 (VAR_16);
    if (VAR_16->aio) {
      return -2;
    }
    return 0;
  }
  storage_binlog_file_t *VAR_17 = *VAR_10 = FUNC_2 (VAR_8, VAR_14, VAR_14 + sizeof (struct lev_storage_file) + VAR_13, 0);
  if (VAR_17 == ((void*)0)) {
    return VAR_2;
  }
  if (VAR_6 && VAR_0[VAR_17->dir_id].pending_aio_connections >= VAR_6) {
    return VAR_4;
  }
  FUNC_8 (0);
  FUNC_8 (1);
  const int VAR_18 = VAR_13 + VAR_7;
  VAR_16 = FUNC_5 (VAR_18);
  if (VAR_16 == ((void*)0)) {
    return VAR_3;
  }
  FUNC_6 (VAR_16, 0, sizeof (*VAR_16));
  VAR_16->B = VAR_17;
  VAR_16->offset = VAR_14;
  VAR_16->local_id = VAR_12;
  VAR_16->size = VAR_18;

  VAR_16->hnext = VAR_1[VAR_15];
  FUNC_1 (VAR_16->corrupted == 0);
  VAR_1[VAR_15] = VAR_16;
  FUNC_0 (VAR_16);

  const int VAR_19 = VAR_13 + sizeof (struct lev_storage_file);
  VAR_16->aio = FUNC_3 (VAR_17->fd_rdonly, &VAR_16->data[0], VAR_14, VAR_19, &VAR_5, VAR_16);
  VAR_0[VAR_17->dir_id].pending_aio_connections++;
  VAR_16->refcnt++;
  FUNC_1 (VAR_16->aio != ((void*)0));

  *VAR_9 = VAR_16;
  return -2;
}
