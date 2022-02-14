
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gather_data {int magic; int tot_num; scalar_t__ size; scalar_t__ new_key_len; struct gather_data* new_key; scalar_t__ orig_key_len; struct gather_data* orig_key; TYPE_1__* List; scalar_t__ extra; } ;
struct TYPE_2__ {scalar_t__ res_bytes; struct gather_data* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,struct gather_data*) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct gather_data*,scalar_t__) ;

__attribute__((used)) static void FUNC_4 (struct gather_data *VAR_5) {
  if (!VAR_5) {
    return;
  }
  FUNC_0 ((VAR_5->magic & VAR_1) == VAR_0);
  if (VAR_5->extra) {
    FUNC_2 (VAR_5->extra);
  }

  VAR_5->magic = 0;
  FUNC_0 (VAR_2 > 0);
  if (VAR_4 >= 2) {
    FUNC_1 (VAR_3, "Gather structure %p freed.\n", VAR_5);
  }

  int VAR_6;
  for (VAR_6 = 0; VAR_6 < VAR_5->tot_num; VAR_6++) {
    if (VAR_5->List[VAR_6].res_bytes) {
      FUNC_3 (VAR_5->List[VAR_6].data, VAR_5->List[VAR_6].res_bytes + 4);
    }
  }
  FUNC_3 (VAR_5->orig_key, VAR_5->orig_key_len + 1);
  FUNC_3 (VAR_5->new_key, VAR_5->new_key_len + 1);
  FUNC_3 (VAR_5, VAR_5->size);
  VAR_2--;
}
