
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int * kfs_file_handle_t ;
struct TYPE_3__ {int log_pos1_crc32; int log_pos1; int log_timestamp; } ;
typedef TYPE_1__ index_header ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (char*,char*) ;
 int VAR_5 ;

__attribute__((used)) static bool FUNC_2 (kfs_file_handle_t VAR_6) {
  if (VAR_5 >= 2) {
    FUNC_1 ("$1load_index: $2started (%s)...$^\n", (VAR_6 == ((void*)0) ? "Index == 0" : "Index != 0"));
  }

  index_header VAR_7;
  if (!FUNC_0 (VAR_6, &VAR_7)) {
    return VAR_0;
  }

  VAR_4 = VAR_7.log_timestamp;
  VAR_3 = VAR_7.log_pos1;
  VAR_2 = VAR_7.log_pos1_crc32;

  if (VAR_5 >= 2) {
    FUNC_1 ("$1load_index: $2%sloaded!$^\n", (VAR_6 == ((void*)0) ? "empty index " : ""));
  }

  return VAR_1;
}
