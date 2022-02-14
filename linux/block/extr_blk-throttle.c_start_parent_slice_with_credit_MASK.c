
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct throtl_grp {int * slice_start; } ;


 scalar_t__ FUNC_0 (struct throtl_grp*,int) ;
 int FUNC_1 (struct throtl_grp*,int,int ) ;

__attribute__((used)) static void FUNC_2(struct throtl_grp *VAR_0,
     struct throtl_grp *VAR_1, bool VAR_2)
{
 if (FUNC_0(VAR_1, VAR_2)) {
  FUNC_1(VAR_1, VAR_2,
    VAR_0->slice_start[VAR_2]);
 }

}
