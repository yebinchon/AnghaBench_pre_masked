
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct notifier_block {int dummy; } ;
struct TYPE_4__ {int hw; } ;
struct TYPE_6__ {TYPE_1__ clkr; } ;
struct TYPE_5__ {int (* set_parent ) (int *,int ) ;} ;


 unsigned long VAR_0 ;
 TYPE_3__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int
FUNC_2(struct notifier_block *VAR_4,
    unsigned long VAR_5, void *VAR_6)
{
 int VAR_7 = 0;

 if (VAR_5 == VAR_0)
  VAR_7 = VAR_2.set_parent(&VAR_1.clkr.hw,
           VAR_3);

 return FUNC_0(VAR_7);
}
