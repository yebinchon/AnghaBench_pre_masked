
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cec_pin {int adap; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* high ) (int ) ;} ;


 int FUNC_0 (struct cec_pin*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct cec_pin *VAR_0)
{
 VAR_0->ops->high(VAR_0->adap);
 return FUNC_0(VAR_0);
}
