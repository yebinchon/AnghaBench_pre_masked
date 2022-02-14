
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dispc_device {int is_enabled; int irq; } ;
struct device {int dummy; } ;


 struct dispc_device* FUNC_0 (struct device*) ;
 int FUNC_1 (struct dispc_device*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0)
{
 struct dispc_device *VAR_1 = FUNC_0(VAR_0);

 VAR_1->is_enabled = 0;

 FUNC_2();

 FUNC_3(VAR_1->irq);

 FUNC_1(VAR_1);

 return 0;
}
