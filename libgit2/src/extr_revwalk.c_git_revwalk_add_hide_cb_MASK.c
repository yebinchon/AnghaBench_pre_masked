
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ git_revwalk_hide_cb ;
struct TYPE_5__ {int limited; void* hide_cb_payload; scalar_t__ hide_cb; scalar_t__ walking; } ;
typedef TYPE_1__ git_revwalk ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

int FUNC_2(
 git_revwalk *VAR_0,
 git_revwalk_hide_cb VAR_1,
 void *VAR_2)
{
 FUNC_0(VAR_0);

 if (VAR_0->walking)
  FUNC_1(VAR_0);

 VAR_0->hide_cb = VAR_1;
 VAR_0->hide_cb_payload = VAR_2;

 if (VAR_1)
  VAR_0->limited = 1;

 return 0;
}
