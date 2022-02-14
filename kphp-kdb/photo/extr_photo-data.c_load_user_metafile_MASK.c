
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int metafile_len; struct aio_connection* aio; int * metafile; } ;
typedef TYPE_2__ user ;
struct connection {int dummy; } ;
struct aio_connection {void* basic_type; TYPE_2__* extra; } ;
struct TYPE_11__ {int user_cnt; TYPE_1__* user_index; } ;
struct TYPE_9__ {int size; int shift; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (struct aio_connection*) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct aio_connection*) ;
 struct aio_connection* FUNC_5 (int,int *,int ,int,int *,TYPE_2__*) ;
 void* VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 () ;
 int * FUNC_8 (int) ;
 int* VAR_5 ;
 int FUNC_9 (int ,char*,...) ;
 double FUNC_10 (int ) ;
 TYPE_5__ VAR_6 ;
 int FUNC_11 (struct connection*,int) ;
 int FUNC_12 (int,int *,int,int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_13 (TYPE_2__*) ;
 int VAR_8 ;

void FUNC_14 (user *VAR_9, int VAR_10, int VAR_11) {
  static struct aio_connection VAR_12;

  FUNC_1();

  if (FUNC_13 (VAR_9)) {
    FUNC_6 (VAR_9);
    FUNC_2 (VAR_9);
    return;
  }


  if (VAR_10 > VAR_6.user_cnt || VAR_6.user_index[VAR_10].size <= 4) {
    VAR_9->metafile = VAR_1;
    VAR_9->metafile_len = 0;

    VAR_12.extra = VAR_9;
    VAR_12.basic_type = VAR_3;
    VAR_9->aio = &VAR_12;

    FUNC_11 ((struct connection *)(&VAR_12), VAR_9->metafile_len);
    return;
  }

  if (VAR_9->aio != ((void*)0)) {
    FUNC_4 (VAR_9->aio);
    if (VAR_9->aio != ((void*)0)) {
      FUNC_0 (VAR_9->aio);
      return;
    }

    if (VAR_9->metafile != ((void*)0)) {
      return;
    } else {
      FUNC_9 (VAR_7, "Previous AIO query failed for user at %p, scheduling a new one\n", VAR_9);
    }
  }

  VAR_9->metafile_len = VAR_6.user_index[VAR_10].size;
  VAR_9->metafile = FUNC_8 (VAR_9->metafile_len);
  if (VAR_9->metafile == ((void*)0)) {
    FUNC_9 (VAR_7, "no space to load metafile - cannot allocate %d bytes (%lld currently used)\n", VAR_9->metafile_len, (long long)FUNC_7());
    FUNC_3 (0);
  }
  VAR_2 += VAR_9->metafile_len;

  if (VAR_8 > 2) {
    FUNC_9 (VAR_7, "*** Scheduled reading user data from index %d at position %d, %d bytes, noaio = %d\n", VAR_5[0], VAR_6.user_index[VAR_10].shift, VAR_9->metafile_len, VAR_11);
  }

  FUNC_3 (1 <= VAR_10 && VAR_10 <= VAR_6.user_cnt);
  if (VAR_11) {
    double VAR_13 = -FUNC_10 (VAR_0);


    int VAR_14 = VAR_6.user_index[VAR_10].size;
    int VAR_15 = FUNC_12 (VAR_5[0], VAR_9->metafile, VAR_14, VAR_6.user_index[VAR_10].shift);
    if (VAR_15 != VAR_14) {
      FUNC_9 (VAR_7, "error reading user %d from index file: read %d bytes instead of %d at position %d: %m\n", VAR_10, VAR_15, VAR_14, VAR_6.user_index[VAR_10].shift);
      FUNC_3 (VAR_15 == VAR_14);
    }

    VAR_13 += FUNC_10 (VAR_0);
    if (VAR_8 > 2) {
      FUNC_9 (VAR_7, "  disk time = %.6lf\n", VAR_13);
    }

    VAR_12.extra = VAR_9;
    VAR_12.basic_type = VAR_3;
    VAR_9->aio = &VAR_12;

    FUNC_3 (VAR_9->aio != ((void*)0));

    FUNC_11 ((struct connection *)(&VAR_12), VAR_9->metafile_len);
  } else {
    VAR_9->aio = FUNC_5 (VAR_5[0], VAR_9->metafile, VAR_6.user_index[VAR_10].shift, VAR_9->metafile_len, &VAR_4, VAR_9);
    FUNC_3 (VAR_9->aio != ((void*)0));
    FUNC_0 (VAR_9->aio);
  }

  return;
}
