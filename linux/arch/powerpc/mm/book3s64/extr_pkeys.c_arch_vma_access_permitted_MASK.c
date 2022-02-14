
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;


 int FUNC_0 (int ,int,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct vm_area_struct*) ;
 int FUNC_3 (struct vm_area_struct*) ;

bool FUNC_4(struct vm_area_struct *VAR_1, bool VAR_2,
          bool VAR_3, bool VAR_4)
{
 if (FUNC_1(&VAR_0))
  return 1;



 if (VAR_4 || FUNC_2(VAR_1))
  return 1;

 return FUNC_0(FUNC_3(VAR_1), VAR_2, VAR_3);
}
