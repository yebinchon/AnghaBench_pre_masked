
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ldt_struct {unsigned int nr_entries; struct desc_struct* entries; } ;
struct desc_struct {int dummy; } ;
struct TYPE_8__ {TYPE_2__* active_mm; } ;
struct TYPE_7__ {int gdt; } ;
struct TYPE_5__ {int ldt; } ;
struct TYPE_6__ {TYPE_1__ context; } ;


 unsigned int VAR_0 ;
 struct ldt_struct* FUNC_0 (int ) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 TYPE_4__* VAR_3 ;
 TYPE_3__ VAR_4 ;
 unsigned long FUNC_1 (struct desc_struct*) ;
 struct desc_struct* FUNC_2 (int ) ;

__attribute__((used)) static unsigned long FUNC_3(unsigned int VAR_5)
{
 struct desc_struct *VAR_6;
 unsigned int VAR_7 = VAR_5 >> 3;

 if ((VAR_5 & VAR_2) == VAR_1) {
  return 0;

 } else {
  if (VAR_7 >= VAR_0)
   return 0;

  VAR_6 = FUNC_2(VAR_4.gdt) + VAR_7;
 }

 return FUNC_1(VAR_6);
}
