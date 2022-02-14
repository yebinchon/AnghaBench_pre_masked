
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edmacc_param {int dummy; } ;
struct edma_cc {unsigned int num_slots; scalar_t__ base; } ;


 unsigned int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int VAR_1 ;
 int FUNC_2 (struct edmacc_param*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_3(struct edma_cc *VAR_2, unsigned VAR_3,
      struct edmacc_param *VAR_4)
{
 VAR_3 = FUNC_0(VAR_3);
 if (VAR_3 >= VAR_2->num_slots)
  return -VAR_0;
 FUNC_2(VAR_4, VAR_2->base + FUNC_1(VAR_3), VAR_1);

 return 0;
}
