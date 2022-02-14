
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {size_t readto_off; size_t type; TYPE_7__* F; } ;
typedef TYPE_2__ stream_t ;
typedef size_t ssize_t ;
struct TYPE_11__ {int fd; TYPE_1__* info; } ;
struct TYPE_10__ {size_t* total_bytes_read; } ;
struct TYPE_8__ {int filename; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 void* VAR_3 ;
 void* VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_7__*,size_t,void*,int*,int*) ;
 int FUNC_2 (char*,int ,size_t,...) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 size_t FUNC_4 (int ,void*,size_t) ;
 TYPE_6__ VAR_5 ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 size_t FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int,char*,int ,long long) ;

__attribute__((used)) static int FUNC_8 (stream_t *VAR_6, void *VAR_7, size_t VAR_8) {
  int VAR_9 = VAR_8;
  if (FUNC_5 (VAR_6)) {
    FUNC_0 (VAR_7 == VAR_3 || VAR_7 == &VAR_4[VAR_1] || VAR_7 == VAR_4);
    int VAR_10 = VAR_0 > VAR_8 ? VAR_0 : VAR_8;
    if (FUNC_1 (VAR_6->F, VAR_6->readto_off, VAR_7, &VAR_10, &VAR_9) < 0) {
      FUNC_2 ("kfs_bz_decode file '%s' from offset %lld failed.\n", VAR_6->F->info->filename, VAR_6->readto_off);
      return -1;
    }
    if (VAR_10 < VAR_8) {
      FUNC_2 ("kfs_bz_decode file '%s' from offset %lld retuned %d bytes, expected %d bytes.\n", VAR_6->F->info->filename, VAR_6->readto_off, VAR_10, (int) VAR_8);
      return -1;
    }
  } else {
    ssize_t VAR_11 = FUNC_4 (VAR_6->F->fd, VAR_7, VAR_8);
    if (VAR_11 != VAR_8) {
      if (VAR_11 < 0) {
        FUNC_2 ("read '%s' from offset %lld fail. %m\n", VAR_6->F->info->filename, FUNC_6 (VAR_6));
        return -1;
      } else {
        VAR_5.total_bytes_read[VAR_6->type] += VAR_11;
        FUNC_2 ("read '%s' from offset %lld. Read %lld bytes of expected %lld.\n", VAR_6->F->info->filename, FUNC_6 (VAR_6), (long long) VAR_11, (long long) VAR_8);
        FUNC_7 (2, "lseek (%d, 0, SEEK_CUR) = %lld\n", VAR_6->F->fd, (long long ) FUNC_3 (VAR_6->F->fd, 0, VAR_2));
        return -1;
      }
    }
  }
  VAR_5.total_bytes_read[VAR_6->type] += VAR_9;
  VAR_6->readto_off += VAR_8;
  return VAR_8;
}
