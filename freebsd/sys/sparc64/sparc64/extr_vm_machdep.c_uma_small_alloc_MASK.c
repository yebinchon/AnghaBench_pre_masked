
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vm_size_t ;
typedef TYPE_2__* vm_page_t ;
typedef int vm_paddr_t ;
typedef int uma_zone_t ;
typedef int u_int8_t ;
struct TYPE_5__ {scalar_t__ color; scalar_t__* colors; } ;
struct TYPE_6__ {int flags; TYPE_1__ md; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (void*,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_2__* FUNC_8 (int *,int ,int,int) ;

void *
FUNC_9(uma_zone_t VAR_9, vm_size_t VAR_10, int VAR_11, u_int8_t *VAR_12,
    int VAR_13)
{
 vm_paddr_t VAR_14;
 vm_page_t VAR_15;
 void *VAR_16;

 FUNC_2(VAR_7);

 *VAR_12 = VAR_3;

 VAR_15 = FUNC_8(((void*)0), 0, VAR_11,
     FUNC_7(VAR_13) | VAR_5 | VAR_4);
 if (VAR_15 == ((void*)0))
  return (((void*)0));

 VAR_14 = FUNC_4(VAR_15);
 if (VAR_6 == 0 && VAR_15->md.color != FUNC_0(VAR_14)) {
  FUNC_1(VAR_15->md.colors[0] == 0 && VAR_15->md.colors[1] == 0,
      ("uma_small_alloc: free page %p still has mappings!", VAR_15));
  FUNC_2(VAR_8);
  VAR_15->md.color = FUNC_0(VAR_14);
  FUNC_6(VAR_14);
 }
 VAR_16 = (void *)FUNC_3(VAR_14);
 if ((VAR_13 & VAR_0) && (VAR_15->flags & VAR_2) == 0)
  FUNC_5(VAR_16, VAR_1);
 return (VAR_16);
}
