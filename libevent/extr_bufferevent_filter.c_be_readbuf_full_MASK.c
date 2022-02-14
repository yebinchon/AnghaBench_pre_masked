
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bufferevent_filtered {int dummy; } ;
struct TYPE_2__ {scalar_t__ high; } ;
struct bufferevent {TYPE_1__ wm_read; int input; } ;
typedef enum bufferevent_flush_mode { ____Placeholder_bufferevent_flush_mode } bufferevent_flush_mode ;


 int VAR_0 ;
 struct bufferevent* FUNC_0 (struct bufferevent_filtered*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct bufferevent_filtered *VAR_1,
    enum bufferevent_flush_mode VAR_2)
{
 struct bufferevent *VAR_3 = FUNC_0(VAR_1);
 return VAR_2 == VAR_0 &&
     VAR_3->wm_read.high &&
     FUNC_1(VAR_3->input) >= VAR_3->wm_read.high;
}
