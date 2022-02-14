
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bufferevent_filtered {struct bufferevent* underlying; } ;
struct TYPE_2__ {scalar_t__ high; } ;
struct bufferevent {TYPE_1__ wm_write; int output; } ;
typedef enum bufferevent_flush_mode { ____Placeholder_bufferevent_flush_mode } bufferevent_flush_mode ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(struct bufferevent_filtered *VAR_1,
    enum bufferevent_flush_mode VAR_2)
{
 struct bufferevent *VAR_3 = VAR_1->underlying;
 return VAR_2 == VAR_0 &&
     VAR_3->wm_write.high &&
     FUNC_0(VAR_3->output) >= VAR_3->wm_write.high;
}
