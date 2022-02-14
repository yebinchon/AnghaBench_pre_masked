
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef TYPE_3__* vm_page_t ;
typedef scalar_t__ vm_page_bits_t ;
typedef TYPE_4__* vm_object_t ;
struct TYPE_13__ {scalar_t__ vnp_size; } ;
struct TYPE_14__ {TYPE_1__ vnp; } ;
struct TYPE_16__ {scalar_t__ type; scalar_t__ ref_count; TYPE_2__ un_pager; } ;
struct TYPE_15__ {scalar_t__ valid; scalar_t__ dirty; int pindex; TYPE_4__* object; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (TYPE_4__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 scalar_t__ FUNC_7 (int,int) ;
 int FUNC_8 (TYPE_3__*,scalar_t__*,scalar_t__) ;
 scalar_t__ FUNC_9 (TYPE_3__*) ;

void
FUNC_10(vm_page_t VAR_2, int VAR_3, int VAR_4)
{
 vm_page_bits_t VAR_5;
 vm_object_t VAR_6;





 VAR_6 = VAR_2->object;
 FUNC_2(VAR_6);
 FUNC_6(VAR_2);

 if (VAR_6->type == VAR_0 && VAR_3 == 0 && FUNC_0(VAR_2->pindex) +
     VAR_4 >= VAR_6->un_pager.vnp.vnp_size)
  VAR_5 = VAR_1;
 else
  VAR_5 = FUNC_7(VAR_3, VAR_4);
 if (VAR_6->ref_count != 0 && FUNC_5(VAR_2) && VAR_5 != 0)
  FUNC_4(VAR_2);
 FUNC_1((VAR_5 == 0 && FUNC_5(VAR_2)) ||
     !FUNC_3(VAR_2),
     ("vm_page_set_invalid: page %p is mapped", VAR_2));
 if (FUNC_9(VAR_2)) {
  VAR_2->valid &= ~VAR_5;
  VAR_2->dirty &= ~VAR_5;
 } else {
  FUNC_8(VAR_2, &VAR_2->valid, VAR_5);
  FUNC_8(VAR_2, &VAR_2->dirty, VAR_5);
 }
}
