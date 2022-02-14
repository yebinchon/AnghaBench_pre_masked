
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct hts_data {TYPE_1__* extra; } ;
struct connection {scalar_t__ status; scalar_t__ pending_queries; } ;
struct TYPE_4__ {scalar_t__ finish_time; } ;
typedef TYPE_1__ php_worker ;


 struct hts_data* FUNC_0 (struct connection*) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct connection*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ,char*) ;
 scalar_t__ VAR_2 ;

int FUNC_5 (struct connection *VAR_3) {
  struct hts_data *VAR_4 = FUNC_0(VAR_3);

  FUNC_1 (VAR_3->status == VAR_0 || VAR_3->status == VAR_1);
  VAR_3->status = VAR_0;

  php_worker *VAR_5 = VAR_4->extra;
  if (VAR_5->finish_time < VAR_2 + 0.01) {
    FUNC_4 (VAR_5, 0, "timeout in http connection wakeup");
  }
  int VAR_6 = FUNC_3 (VAR_5);
  if (VAR_6 == 1) {
    FUNC_2 (VAR_3, 1);
  } else {
    FUNC_1 (VAR_3->pending_queries >= 0 && VAR_3->status == VAR_1);
  }
  return 0;
}
