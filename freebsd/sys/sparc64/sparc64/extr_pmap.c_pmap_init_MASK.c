
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_size_t ;
typedef scalar_t__ vm_offset_t ;
struct TYPE_2__ {scalar_t__ om_start; int om_tte; int om_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*) ;
 TYPE_1__* VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,int *,int ,scalar_t__*,int ,int ,int ,int ,int ,int ) ;

void
FUNC_2(void)
{
 vm_offset_t VAR_10;
 vm_size_t VAR_11;
 int VAR_12;
 int VAR_13;

 for (VAR_13 = 0; VAR_13 < VAR_9; VAR_13++) {
  VAR_10 = VAR_8[VAR_13].om_start;
  VAR_11 = VAR_8[VAR_13].om_size;
  if ((VAR_8[VAR_13].om_tte & VAR_2) == 0)
   continue;
  if (VAR_10 < VAR_5 || VAR_10 > VAR_4)
   continue;
  VAR_12 = FUNC_1(VAR_7, ((void*)0), 0, &VAR_10, VAR_11, 0,
      VAR_3, VAR_6, VAR_6, VAR_1);
  if (VAR_12 != VAR_0 || VAR_10 != VAR_8[VAR_13].om_start)
   FUNC_0("pmap_init: vm_map_find");
 }
}
