
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct metafile {TYPE_1__* header; scalar_t__ local_offsets; struct aio_connection* aio; scalar_t__ data; } ;
struct connection {int dummy; } ;
struct aio_connection {scalar_t__ basic_type; scalar_t__ extra; } ;
struct TYPE_2__ {int metafile_size; int crc32; } ;


 int FUNC_0 (struct metafile*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,int,int *,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int ,char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (scalar_t__,int) ;

int FUNC_5 (struct connection *VAR_10, int VAR_11) {
  if (VAR_9 > 2) {
    FUNC_3 (VAR_6, "onload_metafile(%p,%d)\n", VAR_10, VAR_11);
  }

  struct aio_connection *VAR_12 = (struct aio_connection *)VAR_10;
  struct metafile *VAR_13 = (struct metafile *) VAR_12->extra;

  FUNC_1 (VAR_12->basic_type == VAR_1);
  FUNC_1 (VAR_13 != ((void*)0));

  if (VAR_13->aio != VAR_12) {
    FUNC_3 (VAR_6, "assertion (meta->aio == a) will fail\n");
    FUNC_3 (VAR_6, "%p != %p\n", VAR_13->aio, VAR_12);
  }

  FUNC_1 (VAR_13->aio == VAR_12);

  if (VAR_11 != VAR_13->header->metafile_size) {
    if (VAR_9 > 0) {
      FUNC_3 (VAR_6, "ERROR reading metafile: read %d bytes out of %d: %m\n", VAR_11, VAR_13->header->metafile_size);
    }
  }
  if (VAR_9 > 2) {
    FUNC_3 (VAR_6, "*** Read metafile: read %d bytes\n", VAR_11);
  }

  if (VAR_11 != VAR_13->header->metafile_size) {
    VAR_13->aio = ((void*)0);
    VAR_13->data = 0;
    FUNC_4 (VAR_13->local_offsets, VAR_13->header->metafile_size);
    VAR_13->local_offsets = 0;
    VAR_0 -= VAR_13->header->metafile_size;
    VAR_3 ++;
  } else {
    VAR_13->aio = ((void*)0);
    VAR_5 ++;
    FUNC_0 (VAR_13 - VAR_2);
    VAR_4 ++;
    if (VAR_8) {
      FUNC_2 (VAR_13->local_offsets, VAR_13->header->metafile_size, &VAR_13->header->crc32, 1);
    }
    VAR_7 += VAR_11;
  }
  return 1;
}
