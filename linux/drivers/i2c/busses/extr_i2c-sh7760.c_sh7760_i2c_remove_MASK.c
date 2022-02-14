
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct cami2c {struct cami2c* ioarea; int iobase; int irq; int adap; } ;


 int FUNC_0 (int ,struct cami2c*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct cami2c*) ;
 struct cami2c* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (struct cami2c*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct cami2c *VAR_1 = FUNC_4(VAR_0);

 FUNC_1(&VAR_1->adap);
 FUNC_0(VAR_1->irq, VAR_1);
 FUNC_2(VAR_1->iobase);
 FUNC_5(VAR_1->ioarea);
 FUNC_3(VAR_1->ioarea);
 FUNC_3(VAR_1);

 return 0;
}
