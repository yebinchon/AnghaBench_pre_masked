
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dsi_data {int is_enabled; int irq; } ;
struct device {int dummy; } ;


 struct dsi_data* FUNC_0 (struct device*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0)
{
 struct dsi_data *VAR_1 = FUNC_0(VAR_0);

 VAR_1->is_enabled = 0;

 FUNC_1();

 FUNC_2(VAR_1->irq);

 return 0;
}
