
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bufferevent_rate_limit_group {int n_members; } ;
struct bufferevent_private {TYPE_1__* rate_limiting; } ;
struct bufferevent {int dummy; } ;
struct TYPE_4__ {int next_in_group; } ;
struct TYPE_3__ {struct bufferevent_rate_limit_group* group; } ;


 int FUNC_0 (struct bufferevent*) ;
 int VAR_0 ;
 int FUNC_1 (struct bufferevent*) ;
 struct bufferevent_private* FUNC_2 (struct bufferevent*) ;
 int FUNC_3 (struct bufferevent_private*,int ) ;
 int FUNC_4 (struct bufferevent_rate_limit_group*) ;
 int FUNC_5 (struct bufferevent_rate_limit_group*) ;
 int FUNC_6 (struct bufferevent*,int ) ;
 int FUNC_7 (struct bufferevent*,int ) ;
 TYPE_2__* VAR_1 ;

int
FUNC_8(struct bufferevent *VAR_2,
    int VAR_3)
{
 struct bufferevent_private *VAR_4 = FUNC_2(VAR_2);
 FUNC_0(VAR_2);
 if (VAR_4->rate_limiting && VAR_4->rate_limiting->group) {
  struct bufferevent_rate_limit_group *VAR_5 =
      VAR_4->rate_limiting->group;
  FUNC_4(VAR_5);
  VAR_4->rate_limiting->group = ((void*)0);
  --VAR_5->n_members;
  FUNC_3(VAR_4, VAR_1->next_in_group);
  FUNC_5(VAR_5);
 }
 if (VAR_3) {
  FUNC_6(VAR_2, VAR_0);
  FUNC_7(VAR_2, VAR_0);
 }
 FUNC_1(VAR_2);
 return 0;
}
