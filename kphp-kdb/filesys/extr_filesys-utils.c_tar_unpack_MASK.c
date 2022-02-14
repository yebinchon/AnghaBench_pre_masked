
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void* uid_t ;
typedef void* time_t ;
struct TYPE_4__ {struct tar_unpack_dir_mtime_entry** e; } ;
typedef TYPE_1__ tar_unpack_dir_mtime_t ;
struct stat {int st_mode; int st_size; void* st_mtime; void* st_atime; void* st_gid; void* st_uid; } ;
struct tar_unpack_dir_mtime_entry {char* dirname; struct stat st; struct tar_unpack_dir_mtime_entry* next; } ;
typedef int off_t ;
typedef int mode_t ;
typedef int gzFile ;
typedef void* gid_t ;
typedef int dyn_mark_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 void* FUNC_6 (char*,int,int) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int,char*) ;
 int FUNC_9 (int ,char*,int) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (char*,struct stat*) ;
 int FUNC_12 (char*,char*,int) ;
 int FUNC_13 (char*,char*,int) ;
 int FUNC_14 (char*,int) ;
 int FUNC_15 (char*,int,int) ;
 int FUNC_16 (char*,int,char*,char const* const,char*) ;
 int FUNC_17 (char*,char*) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (char*,char*) ;
 int FUNC_20 (char*) ;
 int FUNC_21 (TYPE_1__*,char*,struct stat*) ;
 int FUNC_22 (TYPE_1__*) ;
 int FUNC_23 (int,char*,char*,int,void*,void*,long long,unsigned int,char) ;
 int FUNC_24 (int,char*,int) ;
 char* FUNC_25 (int) ;

int FUNC_26 (int VAR_11, const char *const VAR_12) {
  char VAR_13[VAR_5], VAR_14[VAR_5];
  int VAR_15, VAR_16 = 0;
  dyn_mark_t VAR_17;
  FUNC_4 (VAR_17);
  tar_unpack_dir_mtime_t VAR_18;
  FUNC_22 (&VAR_18);
  gzFile VAR_19 = FUNC_8 (VAR_11, "rb");
  char VAR_20[512];
  int VAR_21 = 16 << 20;
  char *VAR_22 = FUNC_25 (VAR_21);
  FUNC_2 (VAR_22 != ((void*)0));
  int VAR_23 = 0;
  while (FUNC_9 (VAR_19, VAR_20, 512) == 512) {
    int VAR_24 = 0, VAR_25 = 0;
    VAR_23++;
    if (!FUNC_20 (VAR_20)) {
      break;
    }
    char VAR_26 = VAR_20[156];
    off_t VAR_27 = FUNC_6 (VAR_20, 124, 11);
    while (VAR_26 == 'K' || VAR_26 == 'L') {
      FUNC_2 (!FUNC_12 (VAR_20, "././@LongLink", 13));
      int VAR_28 = (VAR_27 + 511) & -512;
      if (VAR_26 == 'K') {
        VAR_24 = 1;
        FUNC_2 (VAR_28 == FUNC_9 (VAR_19, VAR_22, VAR_28));
      } else if (VAR_26 == 'L') {
        VAR_25 = 1;
        FUNC_2 (VAR_28 <= VAR_5);
        FUNC_2 (VAR_28 == FUNC_9 (VAR_19, VAR_14, VAR_28));
      }
      FUNC_2 (FUNC_9 (VAR_19, VAR_20, 512) == 512);
      FUNC_20 (VAR_20);
      VAR_26 = VAR_20[156];
      VAR_27 = FUNC_6 (VAR_20, 124, 11);
    }

    mode_t VAR_29 = FUNC_6 (VAR_20, 100, 7);
    uid_t VAR_30 = FUNC_6 (VAR_20, 108, 7);
    gid_t VAR_31 = FUNC_6 (VAR_20, 116, 7);
    time_t VAR_32 = FUNC_6 (VAR_20, 136, 11);
    char VAR_33;
    if (!VAR_25) {
      FUNC_13 (VAR_14, VAR_20 + 345, 512 - 345);
      if (VAR_14[0]) {
        FUNC_17 (VAR_14, "/");
      }
      VAR_33 = VAR_20[100];
      VAR_20[100] = 0;
      FUNC_17 (VAR_14, VAR_20);
      VAR_20[100] = VAR_33;
    }
    FUNC_2 (FUNC_16 (VAR_13, VAR_5, "%s/%s", VAR_12, VAR_14) < VAR_5);
    FUNC_23 (2, "%s %07o %d %d %lld %u %c\n", VAR_13, VAR_29, VAR_30, VAR_31, (long long) VAR_27, (unsigned) VAR_32, VAR_26);
    struct stat VAR_34;
    VAR_34.st_mode = VAR_29;
    VAR_34.st_uid = VAR_30;
    VAR_34.st_gid = VAR_31;
    VAR_34.st_size = VAR_27;
    VAR_34.st_atime = VAR_34.st_mtime = VAR_32;
    int VAR_35 = FUNC_18 (VAR_13);
    off_t VAR_36 = 0;
    int VAR_37 = -1;
    switch (VAR_26) {
      case '0':
        VAR_36 = 0;
        VAR_37 = FUNC_15 (VAR_13, VAR_1 | VAR_3 | VAR_4 | VAR_2, VAR_29);
        if (VAR_37 < 0) {
          FUNC_10 ("open (%s) failed. %m\n", VAR_13);
          VAR_16 = VAR_8;
          goto exit;
        }
        while (VAR_36 < VAR_27) {
          int VAR_38 = VAR_27 - VAR_36;
          if (VAR_38 > VAR_21) { VAR_38 = VAR_21; }
          int VAR_39 = (VAR_38 + 511) & -512;
          FUNC_2 (VAR_39 == FUNC_9 (VAR_19, VAR_22, VAR_39));
          FUNC_2 (FUNC_24 (VAR_37, VAR_22, VAR_38) == VAR_38);
          VAR_36 += VAR_39;
        }
        FUNC_2 (!FUNC_3 (VAR_37));
        if (FUNC_11 (VAR_13, &VAR_34) < 0) {
          VAR_16 = VAR_6;
          goto exit;
        }
        break;
      case '2':
        FUNC_2 (FUNC_1 (VAR_29));
        VAR_33 = VAR_20[257];
        VAR_20[257] = 0;
        char *VAR_40 = VAR_24 ? VAR_22 : VAR_20 + 157;
        if (FUNC_19 (VAR_40, VAR_13)) {
          FUNC_10 ("symlink (%s, %s) fail. %m\n", VAR_40, VAR_13);
          VAR_16 = VAR_9;
          goto exit;
        }
        VAR_20[257] = VAR_33;
        break;
      case '5':
        FUNC_2 (FUNC_0 (VAR_29));
        FUNC_2 (VAR_35 > 0 && VAR_13[VAR_35-1] == '/');
        VAR_13[VAR_35-1] = 0;
        VAR_14[FUNC_18 (VAR_14) - 1] = 0;
        if (FUNC_14 (VAR_13, VAR_29)) {
          FUNC_10 ("mkdir (%s, %07o) fail. %m\n", VAR_13, VAR_29);
          VAR_16 = VAR_7;
          goto exit;
        }
        FUNC_21 (&VAR_18, VAR_14, &VAR_34);
        break;
      default:
        FUNC_10 ("unimplemented file type %c\n", VAR_26);
        FUNC_2 (0);
        break;
    }
  }

  exit:
  FUNC_2 (FUNC_7 (VAR_19) == VAR_10);
  if (!VAR_16) {
    for (VAR_15 = VAR_0 - 1; VAR_15 >= 0; VAR_15--) {
      struct tar_unpack_dir_mtime_entry *VAR_41;
      for (VAR_41 = VAR_18.e[VAR_15]; VAR_41 != ((void*)0); VAR_41 = VAR_41->next) {
        FUNC_2 (FUNC_16 (VAR_13, VAR_5, "%s/%s", VAR_12, VAR_41->dirname) < VAR_5);
        int VAR_42 = FUNC_11 (VAR_13, &VAR_41->st);
        if (VAR_42 < 0) {
          FUNC_10 ("lcopy_attrs (%s) returns error code %d. %m\n", VAR_13, VAR_42);
          VAR_16 = -2;
          goto exit2;
        }
      }
    }
  }
  exit2:

  FUNC_5 (VAR_17);
  return VAR_16;
}
