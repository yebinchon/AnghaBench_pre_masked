
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drbd_socket {void* sbuf; void* rbuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct drbd_socket *VAR_2)
{
 VAR_2->rbuf = (void *) FUNC_0(VAR_1);
 if (!VAR_2->rbuf)
  return -VAR_0;
 VAR_2->sbuf = (void *) FUNC_0(VAR_1);
 if (!VAR_2->sbuf)
  return -VAR_0;
 return 0;
}
