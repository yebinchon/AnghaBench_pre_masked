
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dma_mask; } ;


 int VAR_0 ;
 int ** VAR_1 ;
 int FUNC_0 (struct device*) ;

__attribute__((used)) static bool FUNC_1(struct device *VAR_2)
{
 int VAR_3;

 if (!VAR_2 || !VAR_2->dma_mask)
  return 0;

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3 < 0)
  return 0;


 if (VAR_3 > VAR_0)
  return 0;

 if (VAR_1[VAR_3] == ((void*)0))
  return 0;

 return 1;
}
