
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct metafile {char* data; scalar_t__ local_offsets; TYPE_1__* header; scalar_t__ aio; } ;
struct TYPE_4__ {int key_len; int data_len; char* data; } ;
struct TYPE_3__ {scalar_t__ global_offset; scalar_t__ local_offset; scalar_t__ metafile_size; scalar_t__ nrecords; int crc32; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,scalar_t__,int *,int) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 () ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int ,scalar_t__,int ) ;
 TYPE_2__* FUNC_6 (int,int) ;
 int FUNC_7 () ;
 struct metafile* VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_8 (int ,scalar_t__,scalar_t__) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 void* FUNC_9 (scalar_t__) ;

int FUNC_10 (int VAR_9) {
  if (VAR_8 >= 3) {
    FUNC_3 (VAR_6, "loading metafile %d\n", VAR_9);
  }
  FUNC_1 (0 <= VAR_9 && VAR_9 < VAR_0);
  struct metafile *VAR_10 = &VAR_4[VAR_9];
  if (VAR_10->aio) {
    FUNC_3 (VAR_6, "meta->aio != 0. Dropping data\n");
    VAR_10->aio = 0;
    VAR_10->data = 0;
    VAR_10->local_offsets = 0;
  }
  if (VAR_10->data != 0) {
    return 1;
  }





  FUNC_4 ();

  FUNC_1 (FUNC_5 (VAR_3, VAR_10->header->global_offset + VAR_10->header->local_offset, VAR_1) == VAR_10->header->global_offset + VAR_10->header->local_offset);
  FUNC_1 (VAR_10->local_offsets == 0);

  VAR_10->local_offsets = FUNC_9 (VAR_10->header->metafile_size);
  while (!VAR_10->local_offsets) {
    if (!FUNC_7()) {
      FUNC_3 (VAR_6, "No memory\n");
      return 0;
    }
    VAR_10->local_offsets = FUNC_9 (VAR_10->header->metafile_size);
  }

  VAR_10->data = (char *) (VAR_10->local_offsets + VAR_10->header->nrecords);
  FUNC_1 (FUNC_8 (VAR_3, VAR_10->local_offsets, VAR_10->header->metafile_size) == VAR_10->header->metafile_size);
  if (VAR_7) {
    FUNC_2 (VAR_10->local_offsets, VAR_10->header->metafile_size, &VAR_10->header->crc32, 1);
  }
  if (VAR_8 >= 4 && VAR_10->data) {
    int VAR_11;
    for (VAR_11 = 0; VAR_11 < VAR_10->header->nrecords; VAR_11++) {
      FUNC_3 (VAR_6, "key/data - %d/%d - %s\n", FUNC_6 (VAR_9, VAR_11)->key_len, FUNC_6 (VAR_9, VAR_11)->data_len, FUNC_6 (VAR_9, VAR_11)->data);
    }
  }
  VAR_5++;
  VAR_2 += VAR_10->header->metafile_size;
  FUNC_0 (VAR_9);
  return 0;
}
