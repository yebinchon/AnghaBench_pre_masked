
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int req ;
typedef int reply ;
typedef void* U8 ;
typedef int U32 ;
typedef int U16 ;
struct TYPE_9__ {int Header; int IOCStatus; } ;
struct TYPE_7__ {void* PageNumber; void* PageType; } ;
struct TYPE_8__ {int PageAddress; TYPE_1__ Header; int Action; int Function; } ;
typedef TYPE_2__ MPI2_CONFIG_REQUEST ;
typedef TYPE_3__ MPI2_CONFIG_REPLY ;
typedef int MPI2_CONFIG_PAGE_HEADER ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,int) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int,TYPE_2__*,int,TYPE_3__*,int,int *,int ,int *,int ,int) ;

int
FUNC_3(int VAR_5, U8 VAR_6, U8 VAR_7, U32 VAR_8,
    MPI2_CONFIG_PAGE_HEADER *VAR_9, U16 *VAR_10)
{
 MPI2_CONFIG_REQUEST VAR_11;
 MPI2_CONFIG_REPLY VAR_12;

 FUNC_1(&VAR_11, sizeof(VAR_11));
 VAR_11.Function = VAR_3;
 VAR_11.Action = VAR_2;
 VAR_11.Header.PageType = VAR_6;
 VAR_11.Header.PageNumber = VAR_7;
 VAR_11.PageAddress = VAR_8;

 if (FUNC_2(VAR_5, &VAR_11, sizeof(VAR_11), &VAR_12, sizeof(VAR_12),
     ((void*)0), 0, ((void*)0), 0, 30))
  return (VAR_4);

 if (!FUNC_0(VAR_12.IOCStatus)) {
  if (VAR_10 != ((void*)0))
   *VAR_10 = VAR_12.IOCStatus;
  return (VAR_1);
 }
 if (VAR_9 == ((void*)0))
  return (VAR_0);
 *VAR_9 = VAR_12.Header;
 return (0);
}
