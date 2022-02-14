
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gather_data {char* orig_key; char* new_key; } ;
struct conn_query {int dummy; } ;


 struct gather_data* FUNC_0 (struct conn_query*) ;
 int FUNC_1 (struct conn_query*) ;
 int FUNC_2 (struct conn_query*) ;
 int FUNC_3 (int ,char*,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_4 (struct conn_query *VAR_3) {
  if (VAR_2 >= 3) {
    FUNC_3 (VAR_1, "Query %p timeout.\n", VAR_3);
  }
  struct gather_data *VAR_4 = FUNC_0(VAR_3);
  FUNC_3 (VAR_1, "Query on key %s (outbound key %s) timeout\n", VAR_4->orig_key, VAR_4->new_key);
  VAR_0++;
  FUNC_2 (VAR_3);
  FUNC_1 (VAR_3);

  return 0;
}
