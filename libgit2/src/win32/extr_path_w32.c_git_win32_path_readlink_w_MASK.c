
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int wchar_t ;
typedef int git_win32_path ;
typedef int buf ;
typedef int WCHAR ;
struct TYPE_6__ {int SubstituteNameOffset; int SubstituteNameLength; int PathBuffer; } ;
struct TYPE_5__ {int SubstituteNameOffset; int SubstituteNameLength; int PathBuffer; } ;
struct TYPE_7__ {int ReparseTag; TYPE_2__ MountPointReparseBuffer; TYPE_1__ SymbolicLinkReparseBuffer; } ;
typedef scalar_t__ HANDLE ;
typedef TYPE_3__ GIT_REPARSE_DATA_BUFFER ;
typedef int DWORD ;
typedef int BYTE ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int const,int ,int,int *,int ,int,int *) ;
 int FUNC_2 (scalar_t__,int ,int *,int ,TYPE_3__*,int,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 scalar_t__ VAR_9 ;


 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 size_t FUNC_3 (int *,size_t) ;
 scalar_t__ FUNC_4 (int *,size_t) ;
 int FUNC_5 (int ,int *) ;

int FUNC_6(git_win32_path VAR_13, const git_win32_path VAR_14)
{
 BYTE VAR_15[VAR_10];
 GIT_REPARSE_DATA_BUFFER *VAR_16 = (GIT_REPARSE_DATA_BUFFER *)VAR_15;
 HANDLE VAR_17 = ((void*)0);
 DWORD VAR_18;
 wchar_t *VAR_19;
 size_t VAR_20;

 int VAR_21 = -1;

 VAR_17 = FUNC_1(VAR_14, VAR_7,
  VAR_5 | VAR_4, ((void*)0), VAR_11,
  VAR_3 | VAR_2, ((void*)0));

 if (VAR_17 == VAR_9) {
  VAR_12 = VAR_1;
  return -1;
 }

 if (!FUNC_2(VAR_17, VAR_6, ((void*)0), 0,
  VAR_16, sizeof(VAR_15), &VAR_18, ((void*)0))) {
  VAR_12 = VAR_0;
  goto on_error;
 }

 switch (VAR_16->ReparseTag) {
 case 128:
  VAR_19 = VAR_16->SymbolicLinkReparseBuffer.PathBuffer +
   (VAR_16->SymbolicLinkReparseBuffer.SubstituteNameOffset / sizeof(WCHAR));
  VAR_20 = VAR_16->SymbolicLinkReparseBuffer.SubstituteNameLength / sizeof(WCHAR);
 break;
 case 129:
  VAR_19 = VAR_16->MountPointReparseBuffer.PathBuffer +
   (VAR_16->MountPointReparseBuffer.SubstituteNameOffset / sizeof(WCHAR));
  VAR_20 = VAR_16->MountPointReparseBuffer.SubstituteNameLength / sizeof(WCHAR);
 break;
 default:
  VAR_12 = VAR_0;
  goto on_error;
 }

 if (FUNC_4(VAR_19, VAR_20)) {



  VAR_12 = VAR_0;
  VAR_21 = -1;
 } else if (VAR_20) {

  VAR_20 = FUNC_3(VAR_19, VAR_20);



  if (VAR_8 > VAR_20) {
   FUNC_5(VAR_13, VAR_19);
   VAR_21 = (int)VAR_20;
  }
 }

on_error:
 FUNC_0(VAR_17);
 return VAR_21;
}
