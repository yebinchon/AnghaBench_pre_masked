
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ tv_sec; } ;
struct event_base {int flags; TYPE_1__ tv_cache; } ;


 int VAR_0 ;
 int FUNC_0 (struct event_base*,TYPE_1__*) ;

__attribute__((used)) static inline void
FUNC_1(struct event_base *VAR_1)
{
 VAR_1->tv_cache.tv_sec = 0;
 if (!(VAR_1->flags & VAR_0))
     FUNC_0(VAR_1, &VAR_1->tv_cache);
}
