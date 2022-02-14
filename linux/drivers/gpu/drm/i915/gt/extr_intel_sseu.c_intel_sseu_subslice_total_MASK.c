
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sseu_dev_info {int * subslice_mask; } ;


 unsigned int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;

unsigned int
FUNC_2(const struct sseu_dev_info *VAR_0)
{
 unsigned int VAR_1, VAR_2 = 0;

 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0->subslice_mask); VAR_1++)
  VAR_2 += FUNC_1(VAR_0->subslice_mask[VAR_1]);

 return VAR_2;
}
