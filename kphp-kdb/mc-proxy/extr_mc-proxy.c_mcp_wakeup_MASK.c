
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcs_data {int query_type; } ;
struct connection {int Out; int queries_ok; int status; scalar_t__ pending_queries; scalar_t__ generation; } ;


 struct mcs_data* FUNC_0 (struct connection*) ;
 int FUNC_1 (struct connection*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct connection*) ;







 int FUNC_3 (int *,char*,int) ;

int FUNC_4 (struct connection *VAR_2) {
  struct mcs_data *VAR_3 = FUNC_0(VAR_2);

  VAR_2->generation = ++VAR_1;
  VAR_2->pending_queries = 0;
  VAR_2->status = VAR_0;

  switch (VAR_3->query_type & 0x2fff) {
  case 131:
    FUNC_3 (&VAR_2->Out, "END\r\n", 5);
    break;
  case 130:
  case 133:
  case 132:
    if (!VAR_2->queries_ok) {
      FUNC_3 (&VAR_2->Out, "NOT_FOUND\r\n", 11);
    }
    break;
  case 134:
  case 129:
  case 128:
    if (!VAR_2->queries_ok) {
      FUNC_3 (&VAR_2->Out, "NOT_STORED\r\n", 12);
    }
    break;
  }
  FUNC_1 (VAR_2);
  FUNC_2 (VAR_2);
  return 0;
}
