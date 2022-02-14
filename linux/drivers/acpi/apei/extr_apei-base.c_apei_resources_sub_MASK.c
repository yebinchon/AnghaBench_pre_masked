
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct apei_resources {int ioport; int iomem; } ;


 int FUNC_0 (int *,int *) ;

int FUNC_1(struct apei_resources *VAR_0,
         struct apei_resources *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(&VAR_0->iomem, &VAR_1->iomem);
 if (VAR_2)
  return VAR_2;
 return FUNC_0(&VAR_0->ioport, &VAR_1->ioport);
}
