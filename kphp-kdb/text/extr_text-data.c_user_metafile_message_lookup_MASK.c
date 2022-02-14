
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int user_id; } ;
typedef TYPE_1__ user_t ;
struct file_user_header {int user_first_local_id; int user_last_local_id; int directory_offset; int data_offset; int extra_offset; } ;
struct file_message {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct file_message*,int,int ) ;
 int FUNC_2 (int ,char*,char*,int,int,TYPE_1__*,int) ;
 int VAR_0 ;

struct file_message *FUNC_3 (char *VAR_1, int VAR_2, int VAR_3, user_t *VAR_4) {
  struct file_user_header *VAR_5 = (struct file_user_header *) VAR_1;
  struct file_message *VAR_6;
  if (!VAR_1 || VAR_2 <= 0) {
    FUNC_2 (VAR_0, "user_metafile_message_lookup (%p, %d, %d, %p [%d])\n", VAR_1, VAR_2, VAR_3, VAR_4, VAR_4->user_id);
  }
  FUNC_0 (VAR_1 && VAR_2 > 0);
  if (VAR_3 < VAR_5->user_first_local_id || VAR_3 > VAR_5->user_last_local_id) {
    return 0;
  }
  int *VAR_7 = (int *) (VAR_1 + VAR_5->directory_offset) + (VAR_3 - VAR_5->user_first_local_id);
  if (VAR_7[0] == VAR_7[1]) {
    return 0;
  }
  FUNC_0 (VAR_7[0] >= VAR_5->data_offset && VAR_7[0] < VAR_7[1] && VAR_7[1] <= VAR_5->extra_offset);
  VAR_6 = (struct file_message *) (VAR_1 + VAR_7[0]);
  FUNC_1 (VAR_6, VAR_7[1] - VAR_7[0], 0);
  return VAR_6;
}
