
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int user_index_data ;
struct TYPE_3__ {int user_cnt; } ;
typedef TYPE_1__ index_header ;



long long FUNC_0 (index_header *VAR_0) {
  return sizeof (index_header) + sizeof (user_index_data) * (VAR_0->user_cnt + 1);
}
