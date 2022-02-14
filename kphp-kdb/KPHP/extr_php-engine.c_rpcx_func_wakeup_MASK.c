
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpcs_data {int * extra; } ;
struct connection {scalar_t__ status; scalar_t__ pending_queries; } ;
typedef int php_worker ;


 struct rpcs_data* FUNC_0 (struct connection*) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct connection*) ;

int FUNC_4 (struct connection *VAR_2) {
  struct rpcs_data *VAR_3 = FUNC_0(VAR_2);

  FUNC_1 (VAR_2->status == VAR_0 || VAR_2->status == VAR_1);
  VAR_2->status = VAR_0;

  php_worker *VAR_4 = VAR_3->extra;
  int VAR_5 = FUNC_2 (VAR_4);
  if (VAR_5 == 1) {
    FUNC_3 (VAR_2);
  } else {
    FUNC_1 (VAR_2->pending_queries >= 0 && VAR_2->status == VAR_1);
  }
  return 0;
}
