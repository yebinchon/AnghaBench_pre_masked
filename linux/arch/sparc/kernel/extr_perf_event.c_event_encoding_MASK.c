
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int lower_shift; int upper_shift; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static u64 FUNC_0(u64 VAR_2, int VAR_3)
{
 if (VAR_3 == VAR_0)
  VAR_2 <<= VAR_1->upper_shift;
 else
  VAR_2 <<= VAR_1->lower_shift;
 return VAR_2;
}
