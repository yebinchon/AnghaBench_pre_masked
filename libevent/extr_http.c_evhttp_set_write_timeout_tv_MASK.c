
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
struct evhttp {int timeout_write; } ;


 int FUNC_0 (int *,struct timeval const*,int) ;

void
FUNC_1(struct evhttp* VAR_0, const struct timeval* VAR_1)
{
 FUNC_0(&VAR_0->timeout_write, VAR_1, -1);
}
