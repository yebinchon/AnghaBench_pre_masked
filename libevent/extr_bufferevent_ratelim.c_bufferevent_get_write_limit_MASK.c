
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bufferevent_private {TYPE_2__* rate_limiting; } ;
struct bufferevent {int dummy; } ;
typedef int ev_ssize_t ;
struct TYPE_3__ {int write_limit; } ;
struct TYPE_4__ {TYPE_1__ limit; scalar_t__ cfg; } ;


 int FUNC_0 (struct bufferevent*) ;
 int FUNC_1 (struct bufferevent*) ;
 struct bufferevent_private* FUNC_2 (struct bufferevent*) ;
 int VAR_0 ;
 int FUNC_3 (struct bufferevent_private*) ;

ev_ssize_t
FUNC_4(struct bufferevent *VAR_1)
{
 ev_ssize_t VAR_2;
 struct bufferevent_private *VAR_3;
 FUNC_0(VAR_1);
 VAR_3 = FUNC_2(VAR_1);
 if (VAR_3->rate_limiting && VAR_3->rate_limiting->cfg) {
  FUNC_3(VAR_3);
  VAR_2 = VAR_3->rate_limiting->limit.write_limit;
 } else {
  VAR_2 = VAR_0;
 }
 FUNC_1(VAR_1);
 return VAR_2;
}
