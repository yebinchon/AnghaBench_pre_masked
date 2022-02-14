
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_file_info {int fh; } ;
struct connection {int Tmp; int In; } ;
typedef int size ;
typedef int inode_id_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (int*,int,int) ;
 int FUNC_3 (int*,int) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (int*) ;
 int FUNC_6 (int *,int*,int,unsigned int,struct fuse_file_info*) ;
 int FUNC_7 (int ,char*,int,int) ;
 int FUNC_8 (struct connection*) ;
 int VAR_2 ;
 int FUNC_9 (int *,int*,int) ;
 int FUNC_10 (char const*,char*,...) ;
 int VAR_3 ;
 int FUNC_11 (char const*,char*) ;
 int FUNC_12 (char const*,char*,int) ;
 int* VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_13 (int ,int*,int) ;

int FUNC_14 (struct connection *VAR_6, int VAR_7, const char *VAR_8, int VAR_9, int VAR_10, int VAR_11, int VAR_12) {
  VAR_1++;
  inode_id_t VAR_13;
  unsigned int VAR_14 = 0;
  int VAR_15 = 0;
  int VAR_16 = 0, VAR_17 = 0;
  struct fuse_file_info VAR_18;
  if (VAR_12 < VAR_0 && VAR_9 > 0 && VAR_7 == VAR_2) {
    switch (*VAR_8) {
      case 'c':
        if (!FUNC_12 (VAR_8, "chmod", 5) && FUNC_10 (VAR_8, "chmod%d", &VAR_16) >= 1) {
          VAR_15 = 6;
        }
        if (!FUNC_12 (VAR_8, "chown", 5) && FUNC_10 (VAR_8, "chown%d,%d", &VAR_16, &VAR_17) >= 2) {
          VAR_15 = 7;
        }
        break;
      case 'm':
        if (!FUNC_12 (VAR_8, "mkdir", 5) && FUNC_10 (VAR_8, "mkdir%d", &VAR_16) >= 1) {
          VAR_15 = 1;
        }
        break;
      case 'p':
        if (!FUNC_11 (VAR_8, "path")) {
          VAR_15 = 3;
        }
      case 'r':
        if (!FUNC_11 (VAR_8, "rmdir")) {
          VAR_15 = 4;
        }
      case 'w':
        if (FUNC_10 (VAR_8, "write%u,%lld", &VAR_14, &VAR_13) >= 2) {
          VAR_15 = 2;
        }
        break;
      case 'u':
        if (!FUNC_11 (VAR_8, "unlink")) {
          VAR_15 = 5;
        }
    }
    int VAR_19 = -11;
    if (VAR_15) {
      FUNC_0 (FUNC_9 (&VAR_6->In, VAR_4, VAR_12) == VAR_12);
      VAR_4[VAR_12] = 0;
      switch (VAR_15) {
        case 1:
          VAR_19 = FUNC_3 (VAR_4, VAR_16);
          break;
        case 2:
          VAR_18.fh = VAR_13;
          VAR_19 = FUNC_6 (((void*)0), VAR_4, VAR_12, VAR_14, &VAR_18);
          if (VAR_19 >= 0) {
            VAR_19 = 0;
          }
          break;
        case 3:
          FUNC_8 (VAR_6);
          FUNC_13 (VAR_6->Tmp, &VAR_12, sizeof (VAR_12));
          FUNC_13 (VAR_6->Tmp, VAR_4, VAR_12);
          VAR_19 = 0;
          break;
        case 4:
          VAR_19 = FUNC_4 (VAR_4);
          break;
        case 5:
          VAR_19 = FUNC_5 (VAR_4);
          break;
        case 6:
          VAR_19 = FUNC_1 (VAR_4, VAR_16);
          break;
        case 7:
          VAR_19 = FUNC_2 (VAR_4, VAR_16, VAR_17);
          break;
      }
      if (!VAR_19) {
        return 1;
      }
      if (VAR_5 > 0 && VAR_19 < 0) {
        FUNC_7 (VAR_3, "store: fail (act = %d, res = %d)\n", VAR_15, VAR_19);
      }
      return 0;
    }
  }
  return -2;
}
