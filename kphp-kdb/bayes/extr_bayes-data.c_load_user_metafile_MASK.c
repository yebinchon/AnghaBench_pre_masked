
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int metafile_len; struct aio_connection* aio; int * metafile; } ;
typedef TYPE_2__ user ;
struct connection {int dummy; } ;
struct aio_connection {void* basic_type; TYPE_2__* extra; } ;
struct TYPE_9__ {int user_cnt; TYPE_1__* user_index; } ;
struct TYPE_7__ {int size; int shift; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 struct aio_connection* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct aio_connection*) ;
 struct aio_connection* FUNC_2 (int,int *,int ,int,int *,TYPE_2__*) ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int* VAR_8 ;
 int FUNC_3 (int ,char*,...) ;
 scalar_t__ FUNC_4 () ;
 double FUNC_5 (int ) ;
 TYPE_5__ VAR_9 ;
 int FUNC_6 (int,int ,int ) ;
 int FUNC_7 (struct connection*,int) ;
 int * FUNC_8 (int) ;
 int FUNC_9 (int,int *,int) ;
 int VAR_10 ;
 scalar_t__ FUNC_10 (TYPE_2__*) ;
 int VAR_11 ;

void FUNC_11 (user *VAR_12, int VAR_13, int VAR_14) {
  static struct aio_connection VAR_15;

  VAR_14 |= VAR_7;
  VAR_3 = ((void*)0);

  if (FUNC_10 (VAR_12)) {
    return;
  }

  if (VAR_13 > VAR_9.user_cnt || VAR_9.user_index[VAR_13].size == 0) {
    VAR_12->metafile = VAR_1;
    VAR_12->metafile_len = 12;

    VAR_15.extra = VAR_12;
    VAR_15.basic_type = VAR_5;
    VAR_12->aio = &VAR_15;

    FUNC_7 ((struct connection *)(&VAR_15), VAR_12->metafile_len);
    return;
  }

  if (VAR_12->aio != ((void*)0)) {
    FUNC_1 (VAR_12->aio);
    if (VAR_12->aio != ((void*)0)) {
      VAR_3 = VAR_12->aio;
      return;
    }

    if (VAR_12->metafile) {
      return;
    } else {
      FUNC_3 (VAR_10, "Previous AIO query failed for user at %p, scheduling a new one\n", VAR_12);
    }
  }

  VAR_12->metafile_len = VAR_9.user_index[VAR_13].size;
  VAR_12->metafile = FUNC_8 (VAR_12->metafile_len);
  if (VAR_12->metafile == ((void*)0)) {
    FUNC_3 (VAR_10, "no space to load metafile - cannot allocate %d bytes (%lld currently used)\n", VAR_12->metafile_len, (long long)FUNC_4());
    FUNC_0 (0);
  }
  VAR_4 += VAR_12->metafile_len;

  if (VAR_11 > 2) {
    FUNC_3 (VAR_10, "*** Scheduled reading user data from index %d at position %d, %d bytes, noaio = %d\n", VAR_8[0], VAR_9.user_index[VAR_13].shift, VAR_12->metafile_len, VAR_14);
  }

  FUNC_0 (1 <= VAR_13 && VAR_13 <= VAR_9.user_cnt);
  if (VAR_14) {
    double VAR_16 = -FUNC_5 (VAR_0);

    FUNC_0 (FUNC_6 (VAR_8[0], VAR_9.user_index[VAR_13].shift, VAR_2) == VAR_9.user_index[VAR_13].shift);
    int VAR_17 = VAR_9.user_index[VAR_13].size;
    int VAR_18 = FUNC_9 (VAR_8[0], VAR_12->metafile, VAR_17);
    if (VAR_18 != VAR_17) {
      FUNC_3 (VAR_10, "error reading user %d from index file: read %d bytes instead of %d at position %d: %m\n", VAR_13, VAR_18, VAR_17, VAR_9.user_index[VAR_13].shift);
      FUNC_0 (VAR_18 == VAR_17);
    }

    VAR_16 += FUNC_5 (VAR_0);
    if (VAR_11 > 2) {
      FUNC_3 (VAR_10, "  disk time = %.6lf\n", VAR_16);
    }

    VAR_15.extra = VAR_12;
    VAR_15.basic_type = VAR_5;
    VAR_12->aio = &VAR_15;

    FUNC_0 (VAR_12->aio != ((void*)0));

    FUNC_7 ((struct connection *)(&VAR_15), VAR_12->metafile_len);
  } else {
    VAR_12->aio = FUNC_2 (VAR_8[0], VAR_12->metafile, VAR_9.user_index[VAR_13].shift, VAR_12->metafile_len, &VAR_6, VAR_12);
    FUNC_0 (VAR_12->aio != ((void*)0));
    VAR_3 = VAR_12->aio;
  }

  return;
}
