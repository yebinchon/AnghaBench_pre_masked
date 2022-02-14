
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int read_suspended; } ;
struct bufferevent_pair {TYPE_1__ bev; } ;
struct TYPE_4__ {int enabled; int output; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (struct bufferevent_pair*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static inline int
FUNC_2(struct bufferevent_pair *VAR_2,
    struct bufferevent_pair *VAR_3)
{
 return (FUNC_0(VAR_2)->enabled & VAR_1) &&
     (FUNC_0(VAR_3)->enabled & VAR_0) &&
     !VAR_3->bev.read_suspended &&
     FUNC_1(FUNC_0(VAR_2)->output);
}
