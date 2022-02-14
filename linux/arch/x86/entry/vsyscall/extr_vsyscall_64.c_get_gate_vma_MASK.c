
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int dummy; } ;
struct TYPE_2__ {scalar_t__ ia32_compat; } ;
struct mm_struct {TYPE_1__ context; } ;


 scalar_t__ VAR_0 ;
 struct vm_area_struct VAR_1 ;
 scalar_t__ VAR_2 ;

struct vm_area_struct *FUNC_0(struct mm_struct *VAR_3)
{




 if (VAR_2 == VAR_0)
  return ((void*)0);
 return &VAR_1;
}
