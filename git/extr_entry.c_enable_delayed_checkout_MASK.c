
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct checkout {TYPE_1__* delayed_checkout; } ;
struct TYPE_2__ {int paths; int filters; int state; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 TYPE_1__* FUNC_1 (int) ;

void FUNC_2(struct checkout *VAR_1)
{
 if (!VAR_1->delayed_checkout) {
  VAR_1->delayed_checkout = FUNC_1(sizeof(*VAR_1->delayed_checkout));
  VAR_1->delayed_checkout->state = VAR_0;
  FUNC_0(&VAR_1->delayed_checkout->filters, 0);
  FUNC_0(&VAR_1->delayed_checkout->paths, 0);
 }
}
