
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int metafile_len; struct aio_connection* aio; int * metafile; } ;
typedef TYPE_1__ user ;
struct connection {int dummy; } ;
struct aio_connection {scalar_t__ basic_type; scalar_t__ extra; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int ,char*,int,...) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_8 ;

int FUNC_8 (struct connection *VAR_9, int VAR_10) {
  VAR_0;

  if (VAR_8 > 2) {
    FUNC_5 (VAR_7, "onload_user_metafile (%d,%d)\n", VAR_9, VAR_10);
  }

  struct aio_connection *VAR_11 = (struct aio_connection *)VAR_9;
  user *VAR_12 = (user *) VAR_11->extra;

  FUNC_2 (VAR_11->basic_type == VAR_3);
  FUNC_2 (VAR_12 != ((void*)0));
  FUNC_2 (VAR_12->aio == VAR_11);

  if (VAR_10 != VAR_12->metafile_len) {
    if (VAR_8 > 0) {
      FUNC_5 (VAR_7, "ERROR reading user: read %d bytes out of %d: %m\n", VAR_10, VAR_12->metafile_len);
    }

    FUNC_4 (VAR_12->metafile, VAR_12->metafile_len);
    VAR_2 -= VAR_12->metafile_len;
    VAR_12->metafile = ((void*)0);
    VAR_12->metafile_len = -1;
    VAR_12->aio = ((void*)0);
    FUNC_0(VAR_5, 0);
  }
  FUNC_2 (VAR_10 == VAR_12->metafile_len);

  if (VAR_8 > 2) {
    FUNC_5 (VAR_7, "*** Read user: read %d bytes\n", VAR_10);
  }

  VAR_12->aio = ((void*)0);

  FUNC_3 (VAR_12);
  FUNC_7 (VAR_12);

  FUNC_1 (VAR_12);
  VAR_4++;


  while (VAR_2 > VAR_6 * VAR_1 || (0 && VAR_4 > 1)) {
    FUNC_2 (FUNC_6() != -1);
  }

  FUNC_0(VAR_5, 1);
}
