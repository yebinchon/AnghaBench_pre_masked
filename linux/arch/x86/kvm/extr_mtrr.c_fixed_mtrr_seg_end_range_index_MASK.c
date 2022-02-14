
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fixed_mtrr_segment {int end; int start; int range_shift; int range_start; } ;


 struct fixed_mtrr_segment* VAR_0 ;

__attribute__((used)) static int FUNC_0(int VAR_1)
{
 struct fixed_mtrr_segment *VAR_2 = &VAR_0[VAR_1];
 int VAR_3;

 VAR_3 = (VAR_2->end - VAR_2->start) >> VAR_2->range_shift;
 return VAR_2->range_start + VAR_3 - 1;
}
