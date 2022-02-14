
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct index_header_v2 {scalar_t__ magic; scalar_t__ log_pos1_crc32; scalar_t__ log_pos1; scalar_t__ log_timestamp; } ;
typedef TYPE_1__* kfs_file_handle_t ;
struct TYPE_3__ {int fd; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int,struct index_header_v2*,int) ;
 int VAR_6 ;

int FUNC_2 (kfs_file_handle_t VAR_7) {
  if (VAR_7 == ((void*)0)) {
    VAR_5 = 0;
    VAR_4 = 0;
    VAR_3 = 0;
    return 0;
  }
  int VAR_8 = VAR_7->fd;
  struct index_header_v2 VAR_9;
  FUNC_1 (VAR_8, &VAR_9, sizeof (struct index_header_v2));
  if (VAR_9.magic != VAR_1 && VAR_9.magic != VAR_0 && VAR_9.magic != VAR_1 + 1 && VAR_9.magic != VAR_2 && VAR_9.magic != VAR_2) {
    FUNC_0 (VAR_6, "index file is not for statsx\n");
    return -1;
  }

  VAR_5 = VAR_9.log_timestamp;
  VAR_4 = VAR_9.log_pos1;
  VAR_3 = VAR_9.log_pos1_crc32;
  return 1;
}
