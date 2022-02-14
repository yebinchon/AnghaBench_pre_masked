
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
struct TYPE_7__ {int size; long long shift; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 struct aio_connection* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct aio_connection*) ;
 struct aio_connection* FUNC_2 (int,int *,long long,int,int *,TYPE_2__*) ;
 void* VAR_5 ;
 int VAR_6 ;
 int FUNC_3 () ;
 int * FUNC_4 (int) ;
 int* VAR_7 ;
 int FUNC_5 (int ,char*,...) ;
 double FUNC_6 (int ) ;
 TYPE_5__ VAR_8 ;
 long long FUNC_7 (int,long long,int ) ;
 int FUNC_8 (struct connection*,int) ;
 int FUNC_9 (int,int *,int) ;
 int VAR_9 ;
 scalar_t__ FUNC_10 (TYPE_2__*) ;
 int VAR_10 ;

void FUNC_11 (user *VAR_11, int VAR_12, int VAR_13) {
  static struct aio_connection VAR_14;

  VAR_3 = ((void*)0);

  if (FUNC_10 (VAR_11)) {
    return;
  }

  if (VAR_12 > VAR_8.user_cnt || VAR_8.user_index[VAR_12].size <= 4) {
    VAR_11->metafile = VAR_1;
    VAR_11->metafile_len = 0;

    VAR_14.extra = VAR_11;
    VAR_14.basic_type = VAR_5;
    VAR_11->aio = &VAR_14;

    FUNC_8 ((struct connection *)(&VAR_14), VAR_11->metafile_len);
    return;
  }

  if (VAR_11->aio != ((void*)0)) {
    FUNC_1 (VAR_11->aio);
    if (VAR_11->aio != ((void*)0)) {
      VAR_3 = VAR_11->aio;
      return;
    }

    if (VAR_11->metafile != ((void*)0)) {
      return;
    } else {
      FUNC_5 (VAR_9, "Previous AIO query failed for user at %p, scheduling a new one\n", VAR_11);
    }
  }

  VAR_11->metafile_len = VAR_8.user_index[VAR_12].size;
  VAR_11->metafile = FUNC_4 (VAR_11->metafile_len);
  if (VAR_11->metafile == ((void*)0)) {
    FUNC_5 (VAR_9, "no space to load metafile - cannot allocate %d bytes (%d currently used)\n", VAR_11->metafile_len, FUNC_3());
    FUNC_0 (0);
  }
  VAR_4 += VAR_11->metafile_len;

  if (VAR_10 > 2) {
    FUNC_5 (VAR_9, "*** Scheduled reading user data from index %d at position %lld, %d bytes, no_aio = %d\n", VAR_7[0], VAR_8.user_index[VAR_12].shift, VAR_11->metafile_len, VAR_13);
  }

  FUNC_0 (1 <= VAR_12 && VAR_12 <= VAR_8.user_cnt);
  if (VAR_13) {
    double VAR_15 = -FUNC_6 (VAR_0);

    long long VAR_16 = FUNC_7 (VAR_7[0], VAR_8.user_index[VAR_12].shift, VAR_2);
    FUNC_0 (VAR_16 == VAR_8.user_index[VAR_12].shift);
    int VAR_17 = VAR_8.user_index[VAR_12].size;
    int VAR_18 = FUNC_9 (VAR_7[0], VAR_11->metafile, VAR_17);
    if (VAR_18 != VAR_17) {
      FUNC_5 (VAR_9, "error reading user %d from index file: read %d bytes instead of %d at position %lld: %m\n", VAR_12, VAR_18, VAR_17, VAR_8.user_index[VAR_12].shift);
      FUNC_0 (VAR_18 == VAR_17);
    }

    VAR_15 += FUNC_6 (VAR_0);
    if (VAR_10 > 2) {
      FUNC_5 (VAR_9, "  disk time = %.6lf\n", VAR_15);
    }

    VAR_14.extra = VAR_11;
    VAR_14.basic_type = VAR_5;
    VAR_11->aio = &VAR_14;

    FUNC_0 (VAR_11->aio != ((void*)0));

    FUNC_8 ((struct connection *)(&VAR_14), VAR_11->metafile_len);
  } else {
    VAR_11->aio = FUNC_2 (VAR_7[0], VAR_11->metafile, VAR_8.user_index[VAR_12].shift, VAR_11->metafile_len, &VAR_6, VAR_11);
    FUNC_0 (VAR_11->aio != ((void*)0));
    VAR_3 = VAR_11->aio;
  }

  return;
}
