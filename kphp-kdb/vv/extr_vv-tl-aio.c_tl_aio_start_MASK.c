
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_saved_query {int wait_num; int attempt; struct aio_connection** restart; } ;
struct aio_connection {int dummy; } ;


 int * VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct aio_connection*,int *,double,int *,struct tl_saved_query*) ;
 int FUNC_2 (int,char*) ;

int FUNC_3 (struct aio_connection **VAR_2, int VAR_3, double VAR_4, struct tl_saved_query *VAR_5) {
  FUNC_0 (VAR_5->restart);
  VAR_5->attempt ++;

  FUNC_0 (VAR_3 >= 0);
  if (!VAR_3) {
    return 0;
  }

  int VAR_6;
  for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
    FUNC_0 (VAR_2);
    FUNC_1 (VAR_2[VAR_6], &VAR_0[0], VAR_4, &VAR_1, VAR_5);
  }
  VAR_5->wait_num += VAR_3;
  FUNC_2 (1, "Creating aio for rpc\n");
  return VAR_5->wait_num;
}
