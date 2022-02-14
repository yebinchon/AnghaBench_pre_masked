
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int metafile_len; struct aio_connection* aio; int * metafile; } ;
typedef TYPE_1__ user ;
struct connection {int dummy; } ;
struct aio_connection {scalar_t__ basic_type; scalar_t__ extra; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,char*,...) ;
 int VAR_4 ;
 int FUNC_4 (int *,int) ;
 int VAR_5 ;
 int FUNC_5 () ;
 int VAR_6 ;

int FUNC_6 (struct connection *VAR_7, int VAR_8) {
  if (VAR_6 > 2) {
    FUNC_3 (VAR_5, "onload_user_metafile (%p,%d)\n", VAR_7, VAR_8);
  }

  struct aio_connection *VAR_9 = (struct aio_connection *)VAR_7;
  user *VAR_10 = (user *) VAR_9->extra;

  FUNC_1 (VAR_9->basic_type == VAR_2);
  FUNC_1 (VAR_10 != ((void*)0));

  if (VAR_10->aio != VAR_9) {
    FUNC_3 (VAR_5, "assertion (u->aio == a) will fail\n");
    FUNC_3 (VAR_5, "%p != %p\n", VAR_10->aio, VAR_9);
  }

  FUNC_1 (VAR_10->aio == VAR_9);

  if (VAR_8 != VAR_10->metafile_len) {
    if (VAR_6 > 0) {
      FUNC_3 (VAR_5, "ERROR reading user: read %d bytes out of %d: %m\n", VAR_8, VAR_10->metafile_len);
    }

    FUNC_4 (VAR_10->metafile, VAR_10->metafile_len);
    VAR_1 -= VAR_10->metafile_len;
    VAR_10->metafile = ((void*)0);
    VAR_10->metafile_len = -1;
    VAR_10->aio = ((void*)0);
    return 0;
  }
  FUNC_1 (VAR_8 == VAR_10->metafile_len);

  if (VAR_6 > 2) {
    FUNC_3 (VAR_5, "*** Read user: read %d bytes\n", VAR_8);
  }

  VAR_10->aio = ((void*)0);

  FUNC_2 (VAR_10);

  FUNC_0 (VAR_10);
  VAR_3++;

  while (VAR_1 > VAR_4 * VAR_0) {
    if (FUNC_5() == -1) {
      FUNC_1 (0);
    }
  }

  return 1;
}
