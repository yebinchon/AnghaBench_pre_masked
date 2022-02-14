
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_info {int flags; char* filename; scalar_t__ fsize; int filepath; struct file_info* peer; int fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct file_info*,int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct file_info*,struct file_info*) ;
 struct file_info* FUNC_3 (struct file_info*) ;
 struct file_info* VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct file_info*) ;
 int FUNC_5 (struct file_info*) ;
 int FUNC_6 (char*,char*,...) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_7 (int ,scalar_t__,int ) ;
 int VAR_7 ;
 int FUNC_8 (char*,char*,int const) ;
 scalar_t__ FUNC_9 (struct file_info*,struct file_info*) ;
 scalar_t__ FUNC_10 (struct file_info*,struct file_info*) ;
 scalar_t__ VAR_8 ;
 int FUNC_11 () ;
 scalar_t__ VAR_9 ;
 struct file_info* VAR_10 ;
 int VAR_11 ;
 int FUNC_12 (char*,char*) ;
 int FUNC_13 (char*) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (int,char*,int ,scalar_t__,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_16 (void) {
  struct file_info *VAR_12, *VAR_13, *VAR_14, *VAR_15, *VAR_16;
  int VAR_17, VAR_18;

  VAR_7 = 0;

  for (VAR_17 = 0, VAR_13 = VAR_12 = VAR_10; VAR_17 < VAR_11; VAR_17++, VAR_13++) {

    if (VAR_6 != VAR_9) {
      FUNC_11 ();
    }

    if (VAR_13->flags & VAR_0) {
      continue;
    }
    VAR_15 = VAR_16 = ((void*)0);
    for (VAR_18 = 0, VAR_14 = VAR_4; VAR_18 < VAR_5; VAR_18++, VAR_14++) {
      if (VAR_14->flags & VAR_0) {
        continue;
      }

      if (VAR_15 == ((void*)0) && VAR_16 == ((void*)0) && FUNC_0 (VAR_14, VAR_2 | VAR_1) && !(VAR_13->flags & VAR_2) && FUNC_9 (VAR_13, VAR_14)) {
        VAR_16 = VAR_14;
      }

      if (VAR_14->peer) {
        continue;
      }

      if (FUNC_10 (VAR_13, VAR_14) && (!VAR_15 || FUNC_2 (VAR_14, VAR_15) > 0)) {
        VAR_15 = VAR_14;
      }
    }

    if (VAR_15 == ((void*)0)) {
      if (VAR_16 != ((void*)0)) {
        FUNC_6 ("skip creating new uncompressed backup for file '%s', since there is zipped backup '%s'\n", VAR_13->filename, VAR_16->filename);
        continue;
      }
      VAR_15 = FUNC_3 (VAR_13);
      if (!VAR_15) {
        FUNC_6 ("warning: unable to create peer for %s\n", VAR_13->filepath);
        continue;
      }
    }
    VAR_7++;
    VAR_13->peer = VAR_15;
    VAR_15->peer = VAR_12;
    FUNC_1 (FUNC_7 (VAR_13->fd, VAR_15->fsize, VAR_3) == VAR_15->fsize);
    FUNC_15 (2, "found peer %s %lld -> %s %lld\n", VAR_13->filepath, VAR_13->fsize, VAR_15->filepath, VAR_15->fsize);
    *VAR_12++ = *VAR_13;
  }

  VAR_11 = VAR_7;

  for (VAR_18 = 0, VAR_14 = VAR_4; VAR_18 < VAR_5; VAR_18++, VAR_14++) {
    if (!VAR_14->peer) {
      if (VAR_8 && !(VAR_14->flags & VAR_2)) {
        for (VAR_17 = 0, VAR_13 = VAR_10; VAR_17 < VAR_11; VAR_17++, VAR_13++) {
          if (VAR_13->peer && FUNC_0 (VAR_13, VAR_2 | VAR_1) && VAR_13->fsize == VAR_13->peer->fsize && FUNC_0 (VAR_13->peer, VAR_2 | VAR_1)) {
            char *VAR_19 = VAR_14->filename, *VAR_20 = VAR_13->filename;
            const int VAR_21 = FUNC_13 (VAR_19), VAR_22 = FUNC_13 (VAR_20);
            if (VAR_21 == VAR_22 - 3 + 11 && !FUNC_8 (VAR_20, VAR_19, VAR_22 - 3) && !FUNC_12 (VAR_20 + VAR_22 - 3, ".bz")) {
              break;
            }
          }
        }
        if (VAR_17 < VAR_11) {
          FUNC_6 ("unlink useless backup '%s'\n", VAR_14->filepath);
          if (FUNC_14 (VAR_14->filepath) < 0) {
            FUNC_6 ("unlink (\"%s\") failed. %m\n", VAR_14->filepath);
          }
        }
      }
      FUNC_5 (VAR_14);
    } else {
      FUNC_4 (VAR_14);
    }
  }

  for (VAR_17 = 0, VAR_13 = VAR_10; VAR_17 < VAR_11; VAR_17++, VAR_13++) {
    FUNC_4 (VAR_13);
  }

  return VAR_7;
}
