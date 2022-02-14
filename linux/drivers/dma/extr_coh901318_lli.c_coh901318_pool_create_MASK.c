
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct coh901318_pool {int dmapool; struct device* dev; int lock; } ;


 int FUNC_0 (struct coh901318_pool*) ;
 int FUNC_1 (char*,struct device*,size_t,size_t,int ) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct coh901318_pool *VAR_0,
     struct device *VAR_1,
     size_t VAR_2, size_t VAR_3)
{
 FUNC_2(&VAR_0->lock);
 VAR_0->dev = VAR_1;
 VAR_0->dmapool = FUNC_1("lli_pool", VAR_1, VAR_2, VAR_3, 0);

 FUNC_0(VAR_0);
 return 0;
}
