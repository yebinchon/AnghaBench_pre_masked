
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ldt_struct {unsigned short nr_entries; struct desc_struct* entries; } ;
struct desc_struct {int dummy; } ;
struct desc_ptr {unsigned long size; scalar_t__ address; int member_1; int member_0; } ;
struct TYPE_6__ {TYPE_2__* active_mm; } ;
struct TYPE_4__ {int lock; struct ldt_struct* ldt; } ;
struct TYPE_5__ {TYPE_1__ context; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 TYPE_3__* VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct desc_ptr*) ;

__attribute__((used)) static bool FUNC_3(struct desc_struct *VAR_4, unsigned short VAR_5)
{
 struct desc_ptr VAR_6 = {0, 0};
 unsigned long VAR_7;
 FUNC_2(&VAR_6);
 VAR_7 = VAR_5 & ~(VAR_1 | VAR_2);

 if (VAR_7 > VAR_6.size)
  return 0;

 *VAR_4 = *(struct desc_struct *)(VAR_6.address + VAR_7);
 return 1;
}
