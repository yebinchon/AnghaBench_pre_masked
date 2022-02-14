
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_size_t ;
typedef TYPE_1__* vm_page_t ;
typedef scalar_t__ vm_offset_t ;
typedef int uma_zone_t ;
typedef int u_int8_t ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (void*,int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (scalar_t__,int) ;
 TYPE_1__* FUNC_6 (int *,int ,int,int,int,int ,scalar_t__,int ,int ,int ) ;

__attribute__((used)) static void *
FUNC_7(uma_zone_t VAR_9, vm_size_t VAR_10, int VAR_11,
    u_int8_t *VAR_12, int VAR_13)
{
 static vm_offset_t VAR_14 = 0;
 void *VAR_15;
 vm_page_t VAR_16;

 if (VAR_14 == 0)
  VAR_14 = FUNC_4();

 *VAR_12 = VAR_4;
 VAR_16 = FUNC_6(((void*)0), 0, VAR_11,
     FUNC_3(VAR_13) | VAR_5 | VAR_6,
     1, 0, VAR_14, VAR_2, VAR_2, VAR_7);
 if (VAR_16 == ((void*)0))
  return (((void*)0));

 if (VAR_8)
  VAR_15 = (void *)FUNC_0(FUNC_1(VAR_16));
 else {
  VAR_15 = (void *)(FUNC_1(VAR_16) | VAR_0);
  FUNC_5((vm_offset_t)VAR_15, FUNC_1(VAR_16));
 }

 if ((VAR_13 & VAR_1) && (VAR_16->flags & VAR_3) == 0)
  FUNC_2(VAR_15, VAR_2);

 return (VAR_15);
}
