
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cec_pin {int adap; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* low ) (int ) ;} ;


 int FUNC_0 (struct cec_pin*,int,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct cec_pin *VAR_0)
{
 VAR_0->ops->low(VAR_0->adap);
 FUNC_0(VAR_0, 0, 0);
}
