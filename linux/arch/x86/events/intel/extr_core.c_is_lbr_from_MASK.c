
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long lbr_from; unsigned long lbr_nr; } ;


 TYPE_1__ VAR_0 ;

__attribute__((used)) static bool FUNC_0(unsigned long VAR_1)
{
 unsigned long VAR_2 = VAR_0.lbr_from + VAR_0.lbr_nr;

 return VAR_0.lbr_from <= VAR_1 && VAR_1 < VAR_2;
}
