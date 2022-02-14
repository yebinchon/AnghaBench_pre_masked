
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct stat {scalar_t__ st_size; int st_mode; } ;
typedef scalar_t__ off_t ;
typedef int gzFile ;
struct TYPE_6__ {char const* const filename; struct stat st; struct TYPE_6__* next; } ;
typedef TYPE_1__ file_t ;
typedef int dyn_mark_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (char*,TYPE_1__**,int,int) ;
 int FUNC_8 (int ,char*,int) ;
 int FUNC_9 (char*,char*,int) ;
 int FUNC_10 (char*,int ,int) ;
 int FUNC_11 (char*,int ) ;
 int FUNC_12 (int,char*,int) ;
 int FUNC_13 (char*,char*,int) ;
 TYPE_1__* FUNC_14 (TYPE_1__*,char*) ;
 int FUNC_15 (char*,int,char*,char const* const,...) ;
 scalar_t__ FUNC_16 (int ,char*,struct stat*,char const* const) ;
 int FUNC_17 (char*,int,char) ;
 scalar_t__ FUNC_18 (int ,char*) ;
 int FUNC_19 (int,char*,char const* const) ;
 char* FUNC_20 (int) ;

__attribute__((used)) static int FUNC_21 (gzFile VAR_7, const char *const VAR_8, const char *const VAR_9, struct stat *VAR_10) {
  FUNC_19 (3, "rec_tar_pack (path = %s)\n", VAR_9);
  char VAR_11[VAR_1], VAR_12[VAR_1], VAR_13[512];
  if (FUNC_1 (VAR_10->st_mode)) {
    if (FUNC_15 (VAR_11, VAR_1, "%s/%s", VAR_8, VAR_9) >= VAR_1) {
      return VAR_5;
    }
    int VAR_14 = FUNC_13 (VAR_11, VAR_12, VAR_1);
    if (VAR_14 < 0 || VAR_14 >= VAR_1) {
      return -4;
    }
    VAR_12[VAR_14] = 0;
    if (VAR_14 > 100) {
      FUNC_17 (VAR_13, VAR_14, 'K');
      if (FUNC_18 (VAR_7, VAR_13) < 0) {
        return VAR_6;
      }
      int VAR_15;
      for (VAR_15 = 0; VAR_15 < VAR_14 + 1; VAR_15 += 512) {
        int VAR_16 = VAR_14 + 1 - VAR_15;
        if (VAR_16 > 512) {
          VAR_16 = 512;
        }
        FUNC_10 (VAR_13, 0, 512);
        FUNC_9 (VAR_13, VAR_12 + VAR_15, VAR_16);
        if (FUNC_8 (VAR_7, VAR_13, 512) != 512) {
          return VAR_3;
        }
      }
      VAR_14 = 100;
    }
    if (FUNC_16 (VAR_7, VAR_13, VAR_10, VAR_9) < 0) {
      return VAR_2;
    }
    FUNC_9 (VAR_13 + 157, VAR_12, VAR_14);
    if (FUNC_18 (VAR_7, VAR_13) < 0) {
      return VAR_6;
    }
  } else if (FUNC_0 (VAR_10->st_mode)) {
    if (VAR_9[0]) {
      char VAR_17[VAR_1];
      FUNC_2 (FUNC_15 (VAR_17, VAR_1, "%s/", VAR_9) < VAR_1);
      if (FUNC_16 (VAR_7, VAR_13, VAR_10, VAR_17) < 0) {
        return VAR_2;
      }
      if (FUNC_18 (VAR_7, VAR_13) < 0) {
        return VAR_6;
      }
    }
    if (FUNC_15 (VAR_11, VAR_1, "%s/%s", VAR_8, VAR_9) >= VAR_1) {
      return VAR_5;
    }
    file_t *VAR_18, *VAR_19;
    int VAR_20 = FUNC_7 (VAR_11, &VAR_18, 1, 1);
    if (VAR_20 < 0) {
      return -2;
    }

    if (!VAR_9[0]) {
      VAR_18 = FUNC_14 (VAR_18, ".filesys-xfs-engine.pid");
    }

    for (VAR_19 = VAR_18; VAR_19 != ((void*)0); VAR_19 = VAR_19->next) {
      if (VAR_9[0]) {
        if (FUNC_15 (VAR_11, VAR_1, "%s/%s", VAR_9, VAR_19->filename) >= VAR_1) {
          return VAR_5;
        }
      } else {
        if (FUNC_15 (VAR_11, VAR_1, "%s", VAR_19->filename) >= VAR_1) {
          return VAR_5;
        }
      }
      int VAR_21 = FUNC_21 (VAR_7, VAR_8, VAR_11, &VAR_19->st);
      if (VAR_21 < 0) {
        return VAR_21;
      }
    }
    FUNC_6 (VAR_18);
  } else {
    if (FUNC_15 (VAR_11, VAR_1, "%s/%s", VAR_8, VAR_9) >= VAR_1) {
      return VAR_5;
    }
    if (FUNC_16 (VAR_7, VAR_13, VAR_10, VAR_9) < 0) {
      return VAR_2;
    }
    if (FUNC_18 (VAR_7, VAR_13) < 0) {
      return VAR_6;
    }
    int VAR_22 = FUNC_11 (VAR_11, VAR_0);
    if (VAR_22 < 0) {
      return VAR_4;
    }
    int VAR_23 = 16 << 20;
    dyn_mark_t VAR_24;
    FUNC_4 (VAR_24);
    char *VAR_25 = FUNC_20 (VAR_23);
    off_t VAR_26 = 0;
    while (VAR_26 < VAR_10->st_size) {
      int VAR_27 = VAR_10->st_size - VAR_26;
      if (VAR_27 > VAR_23) { VAR_27 = VAR_23; }
      int VAR_28 = (VAR_27 + 511) & -512;
      FUNC_2 (VAR_27 == FUNC_12 (VAR_22, VAR_25, VAR_27));
      if (VAR_28 != VAR_27) {
        FUNC_10 (VAR_25 + VAR_27, 0, VAR_28 - VAR_27);
      }
      if (FUNC_8 (VAR_7, VAR_25, VAR_28) != VAR_28) {
        FUNC_5 (VAR_24);
        return VAR_3;
      }
      VAR_26 += VAR_28;
    }
    FUNC_5 (VAR_24);
    FUNC_3 (VAR_22);
  }
  return 0;
}
