
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct sseu_dev_info {int * eu_mask; } ;


 size_t FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static u16 FUNC_2(const struct sseu_dev_info *VAR_0)
{
 u16 VAR_1, VAR_2 = 0;

 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0->eu_mask); VAR_1++)
  VAR_2 += FUNC_1(VAR_0->eu_mask[VAR_1]);

 return VAR_2;
}
