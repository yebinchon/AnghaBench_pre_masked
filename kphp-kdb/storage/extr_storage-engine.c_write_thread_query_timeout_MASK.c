
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gather_data {int key; int key_len; } ;
struct conn_query {int dummy; } ;


 struct gather_data* FUNC_0 (struct conn_query*) ;
 int FUNC_1 (struct conn_query*) ;
 int VAR_0 ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (int,char*,struct conn_query*) ;

int FUNC_4 (struct conn_query *VAR_1) {
  FUNC_3 (3, "Query %p timeout.\n", VAR_1);
  struct gather_data *VAR_2 = FUNC_0(VAR_1);
  FUNC_2 ("Query on key %.*s timeout\n", VAR_2->key_len, VAR_2->key);
  VAR_0++;
  FUNC_1 (VAR_1);
  return 0;
}
