
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct metafile {int size; int flags; struct aio_connection* aio; scalar_t__ data; int cnt; } ;
struct connection {int dummy; } ;
struct aio_connection {scalar_t__ basic_type; scalar_t__ extra; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (scalar_t__,int,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (scalar_t__,int) ;

int FUNC_4 (struct connection *VAR_7, int VAR_8) {
  if (VAR_6 > 2) {
    FUNC_1 (VAR_1, "onload_metafile(%p,%d)\n", VAR_7, VAR_8);
  }

  struct aio_connection *VAR_9 = (struct aio_connection *)VAR_7;
  struct metafile *VAR_10 = (struct metafile *) VAR_9->extra;

  FUNC_0 (VAR_9->basic_type == VAR_0);
  FUNC_0 (VAR_10 != ((void*)0));

  if (VAR_10->aio != VAR_9) {
    FUNC_1 (VAR_1, "assertion (meta->aio == a) will fail\n");
    FUNC_1 (VAR_1, "%p != %p\n", VAR_10->aio, VAR_9);
  }

  FUNC_0 (VAR_10->aio == VAR_9);

  if (VAR_8 != VAR_10->size) {
    if (VAR_6 >= 0) {
      FUNC_1 (VAR_1, "ERROR reading metafile (counter %d): read %d bytes out of %d: %m\n", VAR_10->cnt, VAR_8, VAR_10->size);
    }
    FUNC_3 (VAR_10->data, VAR_10->size);
    VAR_10->data = 0;
    VAR_10->aio = 0;
    VAR_2 ++;
    VAR_10->flags |= 1;
    return 0;
  }
  FUNC_0(VAR_8 == VAR_10->size);

  VAR_3 += VAR_8;



  if (VAR_6 > 2) {
    FUNC_1 (VAR_1, "*** Read metafile: read %d bytes\n", VAR_8);
  }

  FUNC_2 (VAR_10->data, VAR_10->size, VAR_10->cnt, 0);

  FUNC_3(VAR_10->data, VAR_10->size);
  VAR_10->data = 0;

  VAR_10->aio = ((void*)0);
  VAR_10->flags &= ~1;

  VAR_4 += VAR_10->size;
  VAR_5++;

  return 1;
}
