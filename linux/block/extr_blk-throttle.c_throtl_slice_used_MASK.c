
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct throtl_grp {int * slice_end; int * slice_start; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static bool FUNC_1(struct throtl_grp *VAR_1, bool VAR_2)
{
 if (FUNC_0(VAR_0, VAR_1->slice_start[VAR_2], VAR_1->slice_end[VAR_2]))
  return 0;

 return 1;
}
