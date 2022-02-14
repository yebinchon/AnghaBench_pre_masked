
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void** mir; void** ilr; void* threshold; void* idle; void* protection; void* sysconfig; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_1__ VAR_7 ;
 void* FUNC_0 (scalar_t__) ;
 int VAR_8 ;

void FUNC_1(void)
{
 int VAR_9;

 VAR_7.sysconfig =
  FUNC_0(VAR_5);
 VAR_7.protection =
  FUNC_0(VAR_4);
 VAR_7.idle =
  FUNC_0(VAR_1);
 VAR_7.threshold =
  FUNC_0(VAR_6);

 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
  VAR_7.ilr[VAR_9] =
   FUNC_0((VAR_2 + 0x4 * VAR_9));
 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++)
  VAR_7.mir[VAR_9] =
   FUNC_0(VAR_3 + (0x20 * VAR_9));
}
