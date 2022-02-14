
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct metafile {int next; int prev; int num; int data; int * aio; } ;
struct TYPE_6__ {scalar_t__ metafile_index; } ;
typedef TYPE_1__ list_t ;
struct TYPE_8__ {int tot_lists; } ;
struct TYPE_7__ {int fd; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_5__ VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int,long long) ;
 scalar_t__ VAR_4 ;
 int * FUNC_7 (int ,int,long long,long long,int *,struct metafile*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,char*,...) ;
 long long FUNC_10 (int) ;
 long long FUNC_11 (int) ;
 long long FUNC_12 (TYPE_2__*,int,long long) ;
 long long FUNC_13 (int ,long long,int ) ;
 struct metafile** VAR_7 ;
 int VAR_8 ;
 scalar_t__* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 long long VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_14 (int,char*,...) ;
 struct metafile* FUNC_15 (int) ;
 void* FUNC_16 (long long) ;

int FUNC_17 (int VAR_15, int VAR_16) {

  if (VAR_14 >= 4) {
    FUNC_9 (VAR_11, "load_metafile_aio. x = %d, use_aio = %d\n", VAR_15, VAR_16);
  }
  FUNC_4 (VAR_15 >= 0);
  if (!VAR_7[VAR_15]) {
    VAR_7[VAR_15] = FUNC_15 (sizeof (struct metafile));
    VAR_7[VAR_15]->next = -1;
    VAR_7[VAR_15]->prev = -1;
  }
  long long VAR_17, VAR_18;
  if (VAR_15 <= VAR_1.tot_lists) {
    VAR_17 = FUNC_10 (VAR_15);
    FUNC_4 (VAR_17 >= 0);
    VAR_18 = FUNC_10 (VAR_15 + 1) - VAR_17;
    FUNC_4 (VAR_18 >= 4);
  } else {
    FUNC_4 (VAR_15 <= VAR_1.tot_lists + VAR_13);
    VAR_17 = FUNC_11 (VAR_15 - VAR_1.tot_lists - 1);
    FUNC_4 (VAR_17 >= 0);
    VAR_18 = FUNC_11 (VAR_15 - VAR_1.tot_lists) - VAR_17;
    FUNC_4 (VAR_18 >= 4);
  }
  VAR_7[VAR_15]->num = VAR_15;
  if (!VAR_7[VAR_15]->data) {

    VAR_7[VAR_15]->data = FUNC_16 (VAR_18);
    FUNC_4 (VAR_7[VAR_15]->data);
    VAR_12 += VAR_18;
  }
  if (VAR_16 == 0 && !VAR_7[VAR_15]->aio) {
    FUNC_4 (FUNC_13 (VAR_3->fd, VAR_17, VAR_2) == VAR_17);
    FUNC_4 (FUNC_12 (VAR_3, VAR_7[VAR_15]->data, VAR_18) == VAR_18);
    if (VAR_4) {
      if (VAR_15 <= VAR_1.tot_lists) {
        FUNC_4 (FUNC_6 (VAR_7[VAR_15]->data, VAR_18 - 4) == *(((unsigned *)(VAR_7[VAR_15]->data)) + (VAR_18 >> 2) - 1));
      } else {
        FUNC_4 (FUNC_6 (VAR_7[VAR_15]->data, VAR_18) == VAR_9[VAR_15 - VAR_1.tot_lists - 1]);
      }
    }
    FUNC_3 (VAR_15);
    FUNC_14 (4, "load success #%d. memory %lld\n", VAR_15, VAR_12);

    if (VAR_15 < VAR_1.tot_lists) {
      FUNC_4 (*(int *)(VAR_7[VAR_15]->data) == VAR_0);

      list_t *VAR_19 = FUNC_2 (FUNC_0 (VAR_15), -1);
      FUNC_14 (4, "L = %p\n", VAR_19);
      if (!VAR_19 || VAR_19->metafile_index >= 0) {
        FUNC_4 (!VAR_19 || VAR_19->metafile_index == VAR_15);
        FUNC_8 (VAR_15);
      }
      VAR_6 ++;
    } else {
      VAR_10 ++;
    }
    VAR_8 ++;
    return 1;
  } else {
    struct metafile *VAR_20 = VAR_7[VAR_15];
    if (VAR_20->aio) {
      FUNC_5 (VAR_20->aio);
      if (VAR_20->aio != ((void*)0)) {

        FUNC_1 (VAR_20->aio);
        return -2;
      }
      if (VAR_20->data) {
        return 1;
      } else {
        FUNC_9 (VAR_11, "Previous AIO query failed at %p (metafile_num = %d), scheduling a new one\n", VAR_20, VAR_20->num);
        VAR_20->data = FUNC_16 (VAR_18);
        VAR_12 += VAR_18;
      }
    }
    VAR_20->aio = FUNC_7 (VAR_3->fd, VAR_20->data, VAR_17, VAR_18, &VAR_5, VAR_20);
    FUNC_14 (4, "AIO query created\n");
    FUNC_4 (VAR_20->aio != ((void*)0));

    FUNC_1 (VAR_20->aio);

    return -2;
  }
}
