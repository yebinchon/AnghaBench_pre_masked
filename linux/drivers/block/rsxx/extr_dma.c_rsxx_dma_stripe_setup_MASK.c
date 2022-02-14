
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int lower_mask; unsigned int upper_mask; unsigned int upper_shift; unsigned int target_mask; unsigned int target_shift; } ;
struct rsxx_cardinfo {unsigned int n_targets; TYPE_1__ _stripe; } ;


 int FUNC_0 (struct rsxx_cardinfo*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,unsigned int) ;
 int FUNC_2 (int ,char*) ;
 void* FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int) ;

__attribute__((used)) static int FUNC_5(struct rsxx_cardinfo *VAR_1,
         unsigned int VAR_2)
{
 if (!FUNC_4(VAR_2)) {
  FUNC_2(FUNC_0(VAR_1),
   "stripe_size is NOT a power of 2!\n");
  return -VAR_0;
 }

 VAR_1->_stripe.lower_mask = VAR_2 - 1;

 VAR_1->_stripe.upper_mask = ~(VAR_1->_stripe.lower_mask);
 VAR_1->_stripe.upper_shift = FUNC_3(VAR_1->n_targets) - 1;

 VAR_1->_stripe.target_mask = VAR_1->n_targets - 1;
 VAR_1->_stripe.target_shift = FUNC_3(VAR_2) - 1;

 FUNC_1(FUNC_0(VAR_1), "_stripe.lower_mask   = x%016llx\n",
  VAR_1->_stripe.lower_mask);
 FUNC_1(FUNC_0(VAR_1), "_stripe.upper_shift  = x%016llx\n",
  VAR_1->_stripe.upper_shift);
 FUNC_1(FUNC_0(VAR_1), "_stripe.upper_mask   = x%016llx\n",
  VAR_1->_stripe.upper_mask);
 FUNC_1(FUNC_0(VAR_1), "_stripe.target_mask  = x%016llx\n",
  VAR_1->_stripe.target_mask);
 FUNC_1(FUNC_0(VAR_1), "_stripe.target_shift = x%016llx\n",
  VAR_1->_stripe.target_shift);

 return 0;
}
