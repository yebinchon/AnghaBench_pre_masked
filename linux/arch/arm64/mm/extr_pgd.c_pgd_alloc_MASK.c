
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
typedef int pgd_t ;
typedef int gfp_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int * FUNC_1 (int ,int ) ;
 int VAR_3 ;

pgd_t *FUNC_2(struct mm_struct *VAR_4)
{
 gfp_t VAR_5 = VAR_0;

 if (VAR_2 == VAR_1)
  return (pgd_t *)FUNC_0(VAR_5);
 else
  return FUNC_1(VAR_3, VAR_5);
}
