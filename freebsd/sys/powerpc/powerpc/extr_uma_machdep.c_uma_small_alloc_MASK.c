
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_size_t ;
typedef TYPE_1__* vm_page_t ;
typedef scalar_t__ vm_paddr_t ;
typedef scalar_t__ vm_offset_t ;
typedef int uma_zone_t ;
typedef int u_int8_t ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (void*,int ) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;
 TYPE_1__* FUNC_7 (int *,int ,int,int) ;

void *
FUNC_8(uma_zone_t VAR_9, vm_size_t VAR_10, int VAR_11, u_int8_t *VAR_12,
    int VAR_13)
{
 void *VAR_14;
 vm_paddr_t VAR_15;
 vm_page_t VAR_16;

 *VAR_12 = VAR_4;

 VAR_16 = FUNC_7(((void*)0), 0, VAR_11,
     FUNC_5(VAR_13) | VAR_6 | VAR_5);
 if (VAR_16 == ((void*)0))
  return (((void*)0));

 VAR_15 = FUNC_1(VAR_16);


 if ((vm_offset_t)VAR_15 != VAR_15)
  return (((void*)0));






 if (!VAR_7) {
  FUNC_6(VAR_15, VAR_15);
  VAR_14 = (void *)(vm_offset_t)VAR_15;
 } else {
  VAR_14 = (void *)(vm_offset_t)FUNC_0(VAR_15);
 }

 if ((VAR_13 & VAR_1) && (VAR_16->flags & VAR_3) == 0)
  FUNC_3(VAR_14, VAR_2);
 FUNC_2(&VAR_8, 1);

 return (VAR_14);
}
