
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int st_mode; } ;
struct TYPE_12__ {int filename; struct TYPE_12__* next; TYPE_6__ st; } ;
typedef TYPE_1__ file_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_3 (scalar_t__*,int,int) ;
 int FUNC_4 (int,TYPE_1__*,int) ;
 int VAR_0 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_6__*,TYPE_6__*) ;
 int FUNC_7 (scalar_t__*,TYPE_1__**,int,int) ;
 int FUNC_8 (char*,scalar_t__*,int,int) ;
 scalar_t__* VAR_1 ;
 scalar_t__* VAR_2 ;
 int VAR_3 ;
 int FUNC_9 (int,TYPE_1__*) ;
 TYPE_1__* FUNC_10 (TYPE_1__*,int *) ;
 int ** VAR_4 ;
 int FUNC_11 (int,int) ;
 int FUNC_12 (int,char*,int,int,...) ;

__attribute__((used)) static void FUNC_13 (int VAR_5, int VAR_6, int *VAR_7) {
  FUNC_12 (3, "rec_scan (old_dir = %s, new_dir = %s)\n", VAR_2, VAR_1);
  *VAR_7 = 0;
  int VAR_8;
  file_t *VAR_9, *VAR_10, *VAR_11, *VAR_12;
  int VAR_13 = FUNC_7 (VAR_2, &VAR_11, 1, 1);
  int VAR_14 = FUNC_7 (VAR_1, &VAR_12, 1, 1);
  FUNC_12 (3, "l1 = %d, l2 = %d, nx = %d, ny = %d, px = %p, py = %p\n", VAR_5, VAR_6, VAR_13, VAR_14, VAR_11, VAR_12);

  if (VAR_5 == VAR_3) {
    for (VAR_8 = 0; VAR_4[VAR_8] != ((void*)0); VAR_8++) {
      VAR_11 = FUNC_10 (VAR_11, VAR_4[VAR_8]);
      VAR_12 = FUNC_10 (VAR_12, VAR_4[VAR_8]);
    }
  }

  VAR_9 = VAR_11;
  VAR_10 = VAR_12;
  while (VAR_9 != ((void*)0) && VAR_10 != ((void*)0)) {
    FUNC_12 (4, "x->filename = %s, y->filename = %s\n", VAR_9->filename, VAR_10->filename);
    int VAR_15 = FUNC_11 (VAR_9->filename, VAR_10->filename);
    if (VAR_15 < 0) {
      *VAR_7 = 1;
      FUNC_9 (VAR_5, VAR_9);
      VAR_9 = VAR_9->next;
    } else if (VAR_15 > 0) {
      *VAR_7 = 1;
      FUNC_2 (VAR_6, VAR_10, ((void*)0), 0);
      VAR_10 = VAR_10->next;
    } else {
      int VAR_16 = FUNC_0 (VAR_9->st.st_mode) && !FUNC_1 (VAR_9->st.st_mode);
      int VAR_17 = FUNC_0 (VAR_10->st.st_mode) && !FUNC_1 (VAR_10->st.st_mode);
      if (VAR_16) {
        if (VAR_17) {
          int VAR_18;
          FUNC_13 (FUNC_3 (VAR_2, VAR_5, VAR_9->filename), FUNC_3 (VAR_1, VAR_6, VAR_10->filename), &VAR_18);
          int VAR_19 = FUNC_6 (&VAR_9->st, &VAR_10->st);
          if ((VAR_19 & ~8) || VAR_18) {
            VAR_8 = FUNC_4 (VAR_6, VAR_10, VAR_19);
            if (VAR_8 < 0) {
              FUNC_8 ("change_attrs (%s/%s) returns error code %d.\n", VAR_1, VAR_10->filename, VAR_8);
              VAR_0++;
            }
          }
        } else {
          *VAR_7 = 1;
          FUNC_9 (VAR_5, VAR_9);
          FUNC_2 (VAR_6, VAR_10, ((void*)0), 0);
        }
      } else {
        if (VAR_17) {
          *VAR_7 = 1;
          FUNC_9 (VAR_5, VAR_9);
          FUNC_2 (VAR_6, VAR_10, ((void*)0), 0);
        } else {
          int VAR_20 = FUNC_6 (&VAR_9->st, &VAR_10->st);
          if (VAR_20) {
            *VAR_7 = 1;
            FUNC_2 (VAR_6, VAR_10, VAR_9, VAR_20);
          }
        }
      }
      VAR_9 = VAR_9->next;
      VAR_10 = VAR_10->next;
    }
  }

  if (VAR_9 != ((void*)0) || VAR_10 != ((void*)0)) {
    *VAR_7 = 1;
  }

  while (VAR_9 != ((void*)0)) {
    FUNC_9 (VAR_5, VAR_9);
    VAR_9 = VAR_9->next;
  }
  while (VAR_10 != ((void*)0)) {
    FUNC_2 (VAR_6, VAR_10, ((void*)0), 0);
    VAR_10 = VAR_10->next;
  }

  VAR_2[VAR_5] = 0;
  VAR_1[VAR_6] = 0;
  FUNC_5 (VAR_11);
  FUNC_5 (VAR_12);
  FUNC_12 (3, "rec_scan (%d, %d) succesfully ended.\n", VAR_5, VAR_6);
}
