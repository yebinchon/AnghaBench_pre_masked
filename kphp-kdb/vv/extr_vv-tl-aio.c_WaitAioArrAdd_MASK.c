
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aio_connection {int dummy; } ;


 struct aio_connection** VAR_0 ;
 int VAR_1 ;

int FUNC_0 (struct aio_connection *VAR_2) {
  if (VAR_1 < 99) {
    VAR_0[VAR_1 ++] = VAR_2;
    return 1;
  } else {
    return 0;
  }
}
