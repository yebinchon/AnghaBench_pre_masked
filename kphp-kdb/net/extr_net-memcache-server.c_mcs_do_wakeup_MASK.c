
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcs_data {scalar_t__ query_type; } ;
struct connection {int Out; } ;


 struct mcs_data* FUNC_0 (struct connection*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,char*,int) ;

int FUNC_2 (struct connection *VAR_1) {
  struct mcs_data *VAR_2 = FUNC_0(VAR_1);
  if (VAR_2->query_type == VAR_0) {
    FUNC_1 (&VAR_1->Out, "END\r\n", 5);
  }
  return 0;
}
