
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hts_data {int query_flags; int * extra; } ;
struct connection {scalar_t__ status; int parse_state; int flags; scalar_t__ pending_queries; scalar_t__ generation; } ;


 int VAR_0 ;
 struct hts_data* FUNC_0 (struct connection*) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct connection*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

void FUNC_3 (struct connection *VAR_5, int VAR_6) {
  struct hts_data *VAR_7 = FUNC_0 (VAR_5);

  FUNC_2 (VAR_5);
  VAR_5->generation = ++VAR_2;
  VAR_5->pending_queries = 0;
  VAR_7->extra = ((void*)0);
  if (VAR_6 && !(VAR_7->query_flags & VAR_1)) {
    VAR_5->status = VAR_4;
    VAR_5->parse_state = -1;
  } else {
    VAR_5->flags |= VAR_0;
  }
  FUNC_1 (VAR_5->status != VAR_3);
}
