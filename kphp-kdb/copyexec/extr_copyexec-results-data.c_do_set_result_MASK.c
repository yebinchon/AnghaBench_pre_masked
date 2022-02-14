
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct lev_copyexec_result_data {int transaction_id; unsigned int result; long long binlog_pos; int random_tag; } ;
struct connection {int dummy; } ;
struct TYPE_4__ {long long binlog_pos; int random_tag; } ;
typedef TYPE_1__ host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct lev_copyexec_result_data* FUNC_0 (int ,int,int ) ;
 TYPE_1__* FUNC_1 (struct connection*) ;
 int FUNC_2 (TYPE_1__*,struct lev_copyexec_result_data*) ;

int FUNC_3 (struct connection *VAR_3, int VAR_4, unsigned VAR_5, long long VAR_6) {
  host_t *VAR_7 = FUNC_1 (VAR_3);
  if (VAR_7 == ((void*)0)) {
    return VAR_0;
  }

  if (VAR_7->binlog_pos >= VAR_6) {
    return VAR_1;
  }

  struct lev_copyexec_result_data *VAR_8 = FUNC_0 (VAR_2, sizeof (*VAR_8), 0);
  VAR_8->random_tag = VAR_7->random_tag;
  VAR_8->transaction_id = VAR_4;
  VAR_8->result = VAR_5;
  VAR_8->binlog_pos = VAR_6;
  return FUNC_2 (VAR_7, VAR_8);
}
