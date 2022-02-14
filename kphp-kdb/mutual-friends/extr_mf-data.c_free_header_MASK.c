
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int user_index_data ;
struct TYPE_3__ {int user_cnt; int * user_index; } ;
typedef TYPE_1__ index_header ;


 int FUNC_0 (int *,int) ;

void FUNC_1 (index_header *VAR_0) {
  if (VAR_0->user_index != ((void*)0)) {
    FUNC_0 (VAR_0->user_index, sizeof (user_index_data) * (VAR_0->user_cnt + 1));
  }
}
