
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpcs_data {int * extra; } ;
struct connection {scalar_t__ status; int flags; scalar_t__ pending_queries; scalar_t__ generation; } ;


 int VAR_0 ;
 struct rpcs_data* FUNC_0 (struct connection*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct connection*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 () ;
 int VAR_3 ;
 int FUNC_4 () ;

void FUNC_5 (struct connection *VAR_4) {
  struct rpcs_data *VAR_5 = FUNC_0(VAR_4);

  FUNC_2 (VAR_4);
  VAR_4->generation = ++VAR_1;
  VAR_4->pending_queries = 0;
  VAR_5->extra = ((void*)0);

  if (!FUNC_3()) {
    VAR_3 = 1;
    FUNC_4();
  }
  VAR_4->flags |= VAR_0;
  FUNC_1 (VAR_4->status != VAR_2);
}
