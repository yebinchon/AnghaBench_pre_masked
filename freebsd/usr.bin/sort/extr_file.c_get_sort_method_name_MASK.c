
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sort_method; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static const char *
FUNC_0(int VAR_4)
{

 if (VAR_4 == VAR_1)
  return "mergesort";
 else if (VAR_3.sort_method == VAR_2)
  return "radixsort";
 else if (VAR_3.sort_method == VAR_0)
  return "heapsort";
 else
  return "quicksort";
}
