
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_4__ {int next; } ;
struct TYPE_3__ {int flags; } ;
struct c4iw_ep {TYPE_2__ entry; TYPE_1__ com; } ;


 int VAR_0 ;
 struct c4iw_ep* VAR_1 ;
 struct c4iw_ep* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (int ,int *) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_6(struct timer_list *VAR_7)
{
 struct c4iw_ep *VAR_8 = FUNC_0(VAR_8, VAR_7, VAR_5);
 int VAR_9 = 0;

 FUNC_3(&VAR_4);
 if (!FUNC_5(VAR_0, &VAR_8->com.flags)) {



  if (!VAR_8->entry.next) {
   FUNC_1(&VAR_8->entry, &VAR_3);
   VAR_9 = 1;
  }
 }
 FUNC_4(&VAR_4);
 if (VAR_9)
  FUNC_2(VAR_6, &VAR_2);
}
