
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* mr_op; } ;
struct TYPE_4__ {int (* initAP ) (TYPE_2__*) ;} ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;

void
FUNC_1(void)
{

 if (VAR_0.mr_op && VAR_0.mr_op->initAP)
  VAR_0.mr_op->initAP(&VAR_0);
}
