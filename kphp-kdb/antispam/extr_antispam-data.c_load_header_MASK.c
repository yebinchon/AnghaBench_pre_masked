
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* kfs_file_handle_t ;
struct TYPE_8__ {int log_split_max; int log_split_mod; int magic; int log_split_min; int created_at; } ;
typedef TYPE_2__ index_header ;
struct TYPE_7__ {int fd; int offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int,int,int ) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 int FUNC_4 (int,TYPE_2__*,int) ;
 int VAR_7 ;
 int FUNC_5 (int *) ;
 int VAR_8 ;

__attribute__((used)) static bool FUNC_6 (kfs_file_handle_t VAR_9, index_header* VAR_10) {
  int VAR_11 = -1;
  if (VAR_9 == ((void*)0)) {
    FUNC_3 (VAR_10, 0, sizeof (index_header));
    VAR_10->created_at = FUNC_5 (((void*)0));
    VAR_10->log_split_max = 1;
    VAR_10->log_split_mod = 1;
    return VAR_3;
  }

  VAR_11 = VAR_9->fd;
  int VAR_12 = VAR_9->offset;


  if (FUNC_2 (VAR_11, VAR_12, VAR_2) != VAR_12) {
    FUNC_1 (VAR_7, "error reading header from index file: incorrect Index->offset = %d: %m\n", VAR_12);
    return VAR_1;
  }

  int VAR_13 = sizeof (index_header);
  int VAR_14 = FUNC_4 (VAR_11, VAR_10, VAR_13);
  if (VAR_14 != VAR_13) {
    FUNC_1 (VAR_7, "error reading header from index file: read %d bytes instead of %d at position %d: %m\n", VAR_14, VAR_13, VAR_12);
    return VAR_1;
  }

  if (VAR_10->magic != VAR_0) {
    FUNC_1 (VAR_7, "bad antispam index file header\n");
    FUNC_1 (VAR_7, "magic = 0x%08x instead of 0x%08x // offset = %d\n", VAR_10->magic, VAR_0, VAR_12);
    return VAR_1;
  }

  FUNC_0 (VAR_10->log_split_max);
  VAR_5 = VAR_10->log_split_min;
  VAR_4 = VAR_10->log_split_max;
  VAR_6 = VAR_10->log_split_mod;

  if (VAR_8 > 1) {
    FUNC_1 (VAR_7, "header loaded %d %d %d %d\n", VAR_11, VAR_5, VAR_4, VAR_6);
    FUNC_1 (VAR_7, "ok\n");
  }
  return VAR_3;
}
