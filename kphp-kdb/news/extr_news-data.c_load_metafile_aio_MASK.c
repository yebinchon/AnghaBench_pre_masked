
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct metafile {int data; int * aio; } ;
struct TYPE_2__ {int user_id; int offset; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ,int,long long,long,int *,struct metafile*) ;
 int VAR_0 ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 () ;
 int VAR_1 ;
 int VAR_2 ;
 struct metafile* VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (long) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_8 (int VAR_8) {
  FUNC_1 ();


  FUNC_2 (0 <= VAR_8 && VAR_8 < VAR_5);
  FUNC_2 (VAR_3[VAR_8].data);

  struct metafile *VAR_9 = &VAR_3[VAR_8];
  int VAR_10 = VAR_4[VAR_8].user_id;
  long VAR_11 = sizeof (long long) * (VAR_4[VAR_8 + 1].offset - VAR_4[VAR_8].offset);
  long long VAR_12 = VAR_2 + sizeof (long long) * (long long)VAR_4[VAR_8].offset;

  if (VAR_7 >= 2) {
    FUNC_5 (VAR_6, "loading metafile %d for user %d (%ld bytes at position %lld) in aio mode\n", VAR_8, VAR_10, VAR_11, VAR_12);
  }

  if (VAR_9->aio != ((void*)0)) {
    FUNC_3 (VAR_9->aio);
    if (VAR_9->aio != ((void*)0)) {

      FUNC_0 (VAR_9->aio);
      return;
    }

    if (VAR_9->data) {
      return;
    } else {
      FUNC_5 (VAR_6, "Previous AIO query failed at %p, scheduling a new one\n", VAR_9);
      while (!(VAR_9->data = FUNC_7 (VAR_11))) {
        FUNC_2 (FUNC_6 ());
      }
    }
  } else {
    if (VAR_7 >= 4) {
      FUNC_5 (VAR_6, "No previous aio found for this metafile\n");
    }
  }

  if (VAR_7 >= 4) {
    FUNC_5 (VAR_6, "AIO query creating...\n");
  }
  FUNC_2 (VAR_9->data);
  VAR_9->aio = FUNC_4 (VAR_1, VAR_9->data, VAR_12, VAR_11, &VAR_0, VAR_9);
  if (VAR_7 >= 4) {
    FUNC_5 (VAR_6, "AIO query created\n");
  }
  FUNC_2 (VAR_9->aio != ((void*)0));

  FUNC_0 (VAR_9->aio);

  return;
}
