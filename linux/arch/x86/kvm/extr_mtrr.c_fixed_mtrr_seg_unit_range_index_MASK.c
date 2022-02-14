
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fixed_mtrr_segment {scalar_t__ start; scalar_t__ end; int range_start; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 struct fixed_mtrr_segment* VAR_0 ;

__attribute__((used)) static int FUNC_2(int VAR_1, int VAR_2)
{
 struct fixed_mtrr_segment *VAR_3 = &VAR_0[VAR_1];

 FUNC_0(VAR_3->start + VAR_2 * FUNC_1(VAR_1)
  > VAR_3->end);


 return VAR_3->range_start + 8 * VAR_2;
}
