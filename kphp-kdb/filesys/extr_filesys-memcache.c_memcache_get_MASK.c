
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_file_info {int fh; } ;
struct connection {int dummy; } ;
typedef int inode_id_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int,struct fuse_file_info*) ;
 int FUNC_1 (int ,struct fuse_file_info*) ;
 int FUNC_2 (int *,int ,unsigned int,unsigned int,struct fuse_file_info*) ;
 int FUNC_3 (struct connection*) ;
 int FUNC_4 (int ,char*,char const*) ;
 int FUNC_5 (struct connection*) ;
 int FUNC_6 (struct connection*) ;
 int FUNC_7 (struct connection*,char const*,int ,int) ;
 int FUNC_8 (struct connection*,char const*,int ) ;
 int FUNC_9 (char const*,char*,...) ;
 int VAR_1 ;
 int FUNC_10 (char const*,char*) ;
 int FUNC_11 (char const*,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_12 (struct connection *VAR_4, const char *VAR_5, int VAR_6) {
  if (VAR_3 >= 3) {
    FUNC_4 (VAR_1, "memcache_get: key='%s'\n", VAR_5);
  }
  struct fuse_file_info VAR_7;
  if (VAR_6 >= 5 && !FUNC_11 (VAR_5, "stats", 5)) {
    int VAR_8 = FUNC_3(VAR_4);
    FUNC_7 (VAR_4, VAR_5, VAR_2, VAR_8);
    return 0;
  }
  VAR_0++;
  if (VAR_6 <= 0) {
    return 0;
  }
  int VAR_9 = -11;
  int VAR_10;
  unsigned int VAR_11, VAR_12;
  inode_id_t VAR_13;

  switch (VAR_5[0]) {
    case 'c':
      if (!FUNC_11 (VAR_5, "creat", 5) && FUNC_9 (VAR_5, "creat%d", &VAR_10) >= 1 && !FUNC_6 (VAR_4)) {
        VAR_9 = FUNC_0 (VAR_2, VAR_10, &VAR_7);
        if (!VAR_9) {
          FUNC_8 (VAR_4, VAR_5, VAR_7.fh);
        }
      }
      break;
    case 'o':
      if (!FUNC_10 (VAR_5, "open") && !FUNC_6 (VAR_4)) {
        VAR_9 = FUNC_1 (VAR_2, &VAR_7);
        if (!VAR_9) {
          FUNC_8 (VAR_4, VAR_5, VAR_7.fh);
        }
      }
      break;
    case 'r':
      if (!FUNC_11 (VAR_5, "read", 4) && FUNC_9 (VAR_5, "read%u,%u,%lld", &VAR_11, &VAR_12, &VAR_13) >= 3) {
        VAR_7.fh = VAR_13;
        VAR_9 = FUNC_2 (((void*)0), VAR_2, VAR_12, VAR_11, &VAR_7);
        if (VAR_9 >= 0) {
          FUNC_7 (VAR_4, VAR_5, VAR_2, VAR_9);
        }
      }
  }

  FUNC_5 (VAR_4);
  return 0;
}
