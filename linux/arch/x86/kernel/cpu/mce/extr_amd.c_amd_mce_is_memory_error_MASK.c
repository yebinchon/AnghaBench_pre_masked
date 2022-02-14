
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mce {int status; int bank; } ;
struct TYPE_2__ {scalar_t__ smca; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;

bool FUNC_1(struct mce *VAR_2)
{

 u8 VAR_3 = (VAR_2->status >> 16) & 0x1f;

 if (VAR_1.smca)
  return FUNC_0(VAR_2->bank) == VAR_0 && VAR_3 == 0x0;

 return VAR_2->bank == 4 && VAR_3 == 0x8;
}
