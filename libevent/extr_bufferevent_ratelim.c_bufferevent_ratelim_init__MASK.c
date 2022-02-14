
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int input; } ;
struct bufferevent_private {int max_single_read; TYPE_1__ bev; int max_single_write; int * rate_limiting; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;

int
FUNC_1(struct bufferevent_private *VAR_2)
{
 VAR_2->rate_limiting = ((void*)0);
 VAR_2->max_single_read = VAR_0;
 VAR_2->max_single_write = VAR_1;

 if (FUNC_0(VAR_2->bev.input, VAR_2->max_single_read))
  return -1;

 return 0;
}
