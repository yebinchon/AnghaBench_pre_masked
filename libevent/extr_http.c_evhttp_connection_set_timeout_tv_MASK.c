
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
struct evhttp_connection {int timeout_write; int timeout_read; int bufev; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (int *,struct timeval const*,int ) ;

void
FUNC_2(struct evhttp_connection *VAR_3,
    const struct timeval* VAR_4)
{
 if (VAR_4) {
  VAR_3->flags |= VAR_0;
 } else {
  VAR_3->flags &= ~VAR_0;
 }
 FUNC_1(&VAR_3->timeout_read, VAR_4, VAR_1);
 FUNC_1(&VAR_3->timeout_write, VAR_4, VAR_2);
 FUNC_0(VAR_3->bufev,
     &VAR_3->timeout_read, &VAR_3->timeout_write);
}
