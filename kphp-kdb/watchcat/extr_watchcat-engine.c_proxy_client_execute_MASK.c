
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mcc_data {int key_len; int arg_num; int response_len; } ;
struct connection {int last_response_time; } ;


 struct mcc_data* FUNC_0 (struct connection*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int,int,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

int FUNC_2 (struct connection *VAR_4, int VAR_5) {
  struct mcc_data *VAR_6 = FUNC_0(VAR_4);

  if (VAR_3 > 0) {
    FUNC_1 (VAR_2, "proxy_mc_client: op=%d, key_len=%d, arg#=%d, response_len=%d\n", VAR_5, VAR_6->key_len, VAR_6->arg_num, VAR_6->response_len);
  }

  VAR_4->last_response_time = VAR_1;
  return VAR_0;
}
