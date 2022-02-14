
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int req ;
typedef int reply ;
typedef int U32 ;
typedef void* U16 ;
struct TYPE_7__ {int IOCStatus; } ;
struct TYPE_6__ {int SlotStatus; void* Slot; void* EnclosureHandle; int Flags; int Action; int Function; } ;
typedef TYPE_1__ MPI2_SEP_REQUEST ;
typedef TYPE_2__ MPI2_SEP_REPLY ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,int) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int,TYPE_1__*,int,TYPE_2__*,int,int *,int ,int *,int ,int) ;

int
FUNC_3(int VAR_5, U16 VAR_6, U16 VAR_7, U32 VAR_8)
{
 MPI2_SEP_REQUEST VAR_9;
 MPI2_SEP_REPLY VAR_10;

 FUNC_1(&VAR_9, sizeof(VAR_9));
 VAR_9.Function = VAR_1;
 VAR_9.Action = VAR_2;
 VAR_9.Flags = VAR_3;
 VAR_9.EnclosureHandle = VAR_6;
 VAR_9.Slot = VAR_7;
 VAR_9.SlotStatus = VAR_8;

 if (FUNC_2(VAR_5, &VAR_9, sizeof(VAR_9), &VAR_10, sizeof(VAR_10),
     ((void*)0), 0, ((void*)0), 0, 30) != 0)
  return (VAR_4);

 if (!FUNC_0(VAR_10.IOCStatus))
  return (VAR_0);
 return (0);
}
