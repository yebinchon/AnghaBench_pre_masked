
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct apei_resources {int ioport; int iomem; } ;


 int FUNC_0 (int *,unsigned long,unsigned long) ;

int FUNC_1(struct apei_resources *VAR_0,
         unsigned long VAR_1, unsigned long VAR_2,
         bool VAR_3)
{
 if (VAR_3)
  return FUNC_0(&VAR_0->iomem, VAR_1, VAR_2);
 else
  return FUNC_0(&VAR_0->ioport, VAR_1, VAR_2);
}
