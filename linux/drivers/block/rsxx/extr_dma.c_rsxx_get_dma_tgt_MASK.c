
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u64 ;
struct TYPE_2__ {unsigned int target_shift; unsigned int target_mask; } ;
struct rsxx_cardinfo {TYPE_1__ _stripe; } ;



__attribute__((used)) static unsigned int FUNC_0(struct rsxx_cardinfo *VAR_0, u64 VAR_1)
{
 unsigned int VAR_2;

 VAR_2 = (VAR_1 >> VAR_0->_stripe.target_shift) & VAR_0->_stripe.target_mask;

 return VAR_2;
}
