
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
struct TYPE_9__ {int ExtPageLength; int Header; int IOCStatus; } ;
struct TYPE_7__ {void* PageNumber; int PageType; } ;
struct TYPE_8__ {int PageAddress; TYPE_1__ Header; void* ExtPageType; int Action; int Function; } ;
typedef TYPE_2__ MPI2_CONFIG_REQUEST ;
typedef TYPE_3__ MPI2_CONFIG_REPLY ;
typedef int MPI2_CONFIG_PAGE_HEADER ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_2__*,int) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int,TYPE_2__*,int,TYPE_3__*,int,int *,int ,int *,int ,int) ;

int
FUNC_3(int VAR_6, U8 VAR_7, U8 VAR_8, U32 VAR_9, MPI2_CONFIG_PAGE_HEADER *VAR_10, U16 *VAR_11, U16 *VAR_12)
{
 MPI2_CONFIG_REQUEST VAR_13;
 MPI2_CONFIG_REPLY VAR_14;

 FUNC_1(&VAR_13, sizeof(VAR_13));
 VAR_13.Function = VAR_4;
 VAR_13.Action = VAR_2;
 VAR_13.Header.PageType = VAR_3;
 VAR_13.ExtPageType = VAR_7;
 VAR_13.Header.PageNumber = VAR_8;
 VAR_13.PageAddress = VAR_9;

 if (FUNC_2(VAR_6, &VAR_13, sizeof(VAR_13), &VAR_14, sizeof(VAR_14),
     ((void*)0), 0, ((void*)0), 0, 30))
  return (VAR_5);

 if (!FUNC_0(VAR_14.IOCStatus)) {
  if (VAR_12 != ((void*)0))
   *VAR_12 = VAR_14.IOCStatus;
  return (VAR_1);
 }
 if ((VAR_10 == ((void*)0)) || (VAR_11 == ((void*)0)))
  return (VAR_0);
 *VAR_10 = VAR_14.Header;
 *VAR_11 = VAR_14.ExtPageLength;
 return (0);
}
