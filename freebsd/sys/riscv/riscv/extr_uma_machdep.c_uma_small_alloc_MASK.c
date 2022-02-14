
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_size_t ;
typedef TYPE_1__* vm_page_t ;
typedef int vm_paddr_t ;
typedef int uma_zone_t ;
typedef int u_int8_t ;
struct TYPE_3__ {int flags; int phys_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (void*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 TYPE_1__* FUNC_4 (int *,int ,int,int) ;

void *
FUNC_5(uma_zone_t VAR_7, vm_size_t VAR_8, int VAR_9, u_int8_t *VAR_10,
    int VAR_11)
{
 vm_page_t VAR_12;
 vm_paddr_t VAR_13;
 void *VAR_14;

 *VAR_10 = VAR_4;
 VAR_12 = FUNC_4(((void*)0), 0, VAR_9,
     FUNC_3(VAR_11) | VAR_5 | VAR_6);
 if (VAR_12 == ((void*)0))
  return (((void*)0));
 VAR_13 = VAR_12->phys_addr;
 if ((VAR_11 & VAR_0) == 0)
  FUNC_2(VAR_13);
 VAR_14 = (void *)FUNC_0(VAR_13);
 if ((VAR_11 & VAR_1) && (VAR_12->flags & VAR_3) == 0)
  FUNC_1(VAR_14, VAR_2);
 return (VAR_14);
}
