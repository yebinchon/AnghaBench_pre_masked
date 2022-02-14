
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cec_pin {int adap; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* read ) (int ) ;} ;


 int FUNC_0 (struct cec_pin*,int,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct cec_pin *VAR_0)
{
 bool VAR_1 = VAR_0->ops->read(VAR_0->adap);

 FUNC_0(VAR_0, VAR_1, 0);
 return VAR_1;
}
