
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bufferevent {int dummy; } ;
typedef int ev_ssize_t ;
struct TYPE_2__ {int max_single_write; } ;


 int FUNC_0 (struct bufferevent*) ;
 int FUNC_1 (struct bufferevent*) ;
 TYPE_1__* FUNC_2 (struct bufferevent*) ;

ev_ssize_t
FUNC_3(struct bufferevent *VAR_0)
{
 ev_ssize_t VAR_1;

 FUNC_0(VAR_0);
 VAR_1 = FUNC_2(VAR_0)->max_single_write;
 FUNC_1(VAR_0);
 return VAR_1;
}
