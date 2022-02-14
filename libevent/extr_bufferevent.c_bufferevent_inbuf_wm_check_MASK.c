
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ high; } ;
struct bufferevent {int enabled; TYPE_1__ wm_read; int input; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bufferevent*,int,int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct bufferevent *VAR_2)
{
 if (!VAR_2->wm_read.high)
  return;
 if (!(VAR_2->enabled & VAR_1))
  return;
 if (FUNC_1(VAR_2->input) < VAR_2->wm_read.high)
  return;

 FUNC_0(VAR_2, VAR_1, VAR_0);
}
