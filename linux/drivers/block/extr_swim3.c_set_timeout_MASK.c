
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void (* function ) (struct timer_list*) ;scalar_t__ expires; } ;
struct floppy_state {int timeout_pending; TYPE_1__ timeout; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_2(struct floppy_state *VAR_1, int VAR_2,
   void (*VAR_3)(struct timer_list *VAR_4))
{
 if (VAR_1->timeout_pending)
  FUNC_1(&VAR_1->timeout);
 VAR_1->timeout.expires = VAR_0 + VAR_2;
 VAR_1->timeout.function = VAR_3;
 FUNC_0(&VAR_1->timeout);
 VAR_1->timeout_pending = 1;
}
