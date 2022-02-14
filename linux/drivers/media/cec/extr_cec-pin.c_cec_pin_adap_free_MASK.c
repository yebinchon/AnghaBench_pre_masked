
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cec_pin {TYPE_1__* ops; } ;
struct cec_adapter {struct cec_pin* pin; } ;
struct TYPE_2__ {int (* free ) (struct cec_adapter*) ;} ;


 int FUNC_0 (struct cec_pin*) ;
 int FUNC_1 (struct cec_adapter*) ;

__attribute__((used)) static void FUNC_2(struct cec_adapter *VAR_0)
{
 struct cec_pin *VAR_1 = VAR_0->pin;

 if (VAR_1->ops->free)
  VAR_1->ops->free(VAR_0);
 VAR_0->pin = ((void*)0);
 FUNC_0(VAR_1);
}
