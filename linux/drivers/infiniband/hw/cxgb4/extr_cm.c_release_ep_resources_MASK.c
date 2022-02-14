
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct c4iw_ep {int hwtid; TYPE_1__ com; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct c4iw_ep*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct c4iw_ep *VAR_1)
{
 FUNC_2(VAR_0, &VAR_1->com.flags);







 if (VAR_1->hwtid != -1)
  FUNC_1(VAR_1);
 FUNC_0(&VAR_1->com);
}
