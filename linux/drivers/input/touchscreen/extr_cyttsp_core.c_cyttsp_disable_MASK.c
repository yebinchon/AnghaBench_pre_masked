
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cyttsp {int irq; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct cyttsp*,int ) ;

__attribute__((used)) static int FUNC_2(struct cyttsp *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1, VAR_0);
 if (VAR_2)
  return VAR_2;

 FUNC_0(VAR_1->irq);

 return 0;
}
