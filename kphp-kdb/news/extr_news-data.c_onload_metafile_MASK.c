
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct metafile {struct aio_connection* aio; scalar_t__ data; } ;
struct connection {int dummy; } ;
struct aio_connection {scalar_t__ basic_type; scalar_t__ extra; } ;
struct TYPE_2__ {int user_id; int offset; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_1 ;
 struct metafile* VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (scalar_t__,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

int FUNC_4 (struct connection *VAR_11, int VAR_12) {
  if (VAR_10 >= 2) {
    FUNC_2 (VAR_8, "onload_metafile(%p,%d)\n", VAR_11, VAR_12);
  }

  struct aio_connection *VAR_13 = (struct aio_connection *)VAR_11;
  struct metafile *VAR_14 = (struct metafile *) VAR_13->extra;

  FUNC_1 (VAR_13->basic_type == VAR_0);
  FUNC_1 (VAR_14 != ((void*)0));

  if (VAR_14->aio != VAR_13) {
    FUNC_2 (VAR_8, "assertion (meta->aio == a) will fail\n");
    FUNC_2 (VAR_8, "%p != %p\n", VAR_14->aio, VAR_13);
  }

  FUNC_1 (VAR_14->aio == VAR_13);

  int VAR_15 = VAR_14 - VAR_2;
  FUNC_1 (0 <= VAR_15 && VAR_15 < VAR_4);

  if (VAR_10 >= 2) {
    FUNC_2 (VAR_8, "*** Read metafile %d for large user %d : read %d bytes at position %lld\n", VAR_15, VAR_3[VAR_15].user_id, VAR_12, VAR_1 + sizeof (long long) * (long long)VAR_3[VAR_15].offset);
  }

  if (VAR_12 != sizeof (long long) * (VAR_3[VAR_15 + 1].offset - VAR_3[VAR_15].offset)) {
    if (VAR_10 >= 0) {
      FUNC_2 (VAR_8, "ERROR reading metafile %d for large user %d at position %lld: read %d bytes out of %ld: %m\n", VAR_15, VAR_3[VAR_15].user_id, VAR_1 + sizeof (long long) * (long long)VAR_3[VAR_15].offset, VAR_12, (long)sizeof (long long) * (VAR_3[VAR_15 + 1].offset - VAR_3[VAR_15].offset));
    }
    VAR_14->aio = ((void*)0);
    FUNC_3 (VAR_14->data, sizeof (long long) * (VAR_3[VAR_15 + 1].offset - VAR_3[VAR_15].offset));
    VAR_14->data = 0;
    VAR_5 ++;
  } else {
    VAR_14->aio = ((void*)0);
    VAR_7 ++;
    FUNC_0 (VAR_15);
    VAR_6 ++;
    VAR_9 += VAR_12;
  }
  return 1;
}
