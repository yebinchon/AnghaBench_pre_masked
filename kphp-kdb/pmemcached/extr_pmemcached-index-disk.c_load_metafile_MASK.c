
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct metafile {char* data; long long* local_offsets; int * aio; TYPE_1__* header; } ;
struct TYPE_2__ {int metafile_size; int nrecords; scalar_t__ local_offset; scalar_t__ global_offset; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ,long long*,scalar_t__,int,int *,struct metafile*) ;
 int VAR_1 ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 () ;
 int VAR_2 ;
 int VAR_3 ;
 struct metafile* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_7 (int) ;

void FUNC_8 (int VAR_7) {

  FUNC_1 ();

  FUNC_2 (VAR_7 < VAR_3);

  struct metafile *VAR_8 = &VAR_4[VAR_7];

  if (VAR_6 >= 3) {
    FUNC_5 (VAR_5, "loading metafile %d in aio mode\n", VAR_7);
  }


  if (VAR_8->aio != ((void*)0)) {
    FUNC_3 (VAR_8->aio);
    if (VAR_8->aio != ((void*)0)) {

      FUNC_0 (VAR_8->aio);
      return;
    }

    if (VAR_8->data) {
      return;
    } else {
      FUNC_5 (VAR_5, "Previous AIO query failed at %p, scheduling a new one\n", VAR_8);
    }
  } else {
    if (VAR_6 >= 4) {
      FUNC_5 (VAR_5, "No previous aio found for this metafile\n");
    }
  }

  if (VAR_8->data) {
    FUNC_5 (VAR_5, "Error: memory leak at load_metafile.\n");
    return;
  }

  FUNC_6 ();



  while (1) {
    VAR_8->local_offsets = (long long *)FUNC_7 (VAR_8->header->metafile_size);
    if (VAR_8->local_offsets != ((void*)0)) {
      VAR_8->data = (char *)(VAR_8->local_offsets + VAR_8->header->nrecords);
      break;
    }
    FUNC_5 (VAR_5, "no space to load metafile - cannot allocate %d bytes\n", VAR_8->header->metafile_size);
  }

  VAR_0 += VAR_8->header->metafile_size;

  if (VAR_6 >= 4) {
    FUNC_5 (VAR_5, "AIO query creating...\n");
  }
  VAR_8->aio = FUNC_4 (VAR_2, VAR_8->local_offsets, VAR_8->header->global_offset + VAR_8->header->local_offset, VAR_8->header->metafile_size, &VAR_1, VAR_8);
  if (VAR_6 >= 4) {
    FUNC_5 (VAR_5, "AIO query created\n");
  }
  FUNC_2 (VAR_8->aio != ((void*)0));

  FUNC_0 (VAR_8->aio);

  return;
}
