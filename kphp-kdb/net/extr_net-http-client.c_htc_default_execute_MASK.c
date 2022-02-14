
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct htc_data {int header_size; } ;
struct connection {int dummy; } ;


 struct htc_data* FUNC_0 (struct connection*) ;
 int VAR_0 ;
 int FUNC_1 (int,char*,int,int ) ;

int FUNC_2 (struct connection *VAR_1, int VAR_2) {
  struct htc_data *VAR_3 = FUNC_0(VAR_1);

  FUNC_1 (1, "http_client_execute: op=%d, header_size=%d\n", VAR_2, VAR_3->header_size);

  return VAR_0;
}
