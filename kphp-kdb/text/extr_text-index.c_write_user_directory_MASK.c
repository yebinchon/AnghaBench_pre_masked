
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t tot_users; int user_list_offset; void* data_end_offset; void* extra_data_offset; } ;
struct TYPE_3__ {void* user_data_offset; } ;


 TYPE_2__ VAR_0 ;
 TYPE_1__** VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 size_t VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;

void FUNC_4 (void) {
  VAR_0.extra_data_offset = VAR_5;
  VAR_0.data_end_offset = VAR_5;
  VAR_0.tot_users = VAR_3;

  VAR_1[VAR_3]->user_data_offset = VAR_5;

  FUNC_1 (VAR_0.user_list_offset);
  FUNC_0 ();
  FUNC_3 (VAR_2, VAR_4);
  FUNC_2 ();
}
