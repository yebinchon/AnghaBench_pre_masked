
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edmacc_param {int dummy; } ;
struct edma_cc {unsigned int num_slots; scalar_t__ base; } ;


 unsigned int FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__,struct edmacc_param const*,int ) ;

__attribute__((used)) static void FUNC_3(struct edma_cc *VAR_1, unsigned VAR_2,
       const struct edmacc_param *VAR_3)
{
 VAR_2 = FUNC_0(VAR_2);
 if (VAR_2 >= VAR_1->num_slots)
  return;
 FUNC_2(VAR_1->base + FUNC_1(VAR_2), VAR_3, VAR_0);
}
