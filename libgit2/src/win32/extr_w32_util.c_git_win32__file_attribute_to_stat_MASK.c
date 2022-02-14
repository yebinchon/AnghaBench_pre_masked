
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wchar_t ;
struct stat {int st_mode; int st_size; } ;
typedef int git_win32_path ;
struct TYPE_3__ {int dwFileAttributes; int ftLastWriteTime; int ftLastAccessTime; int ftCreationTime; int nFileSizeLow; int nFileSizeHigh; } ;
typedef TYPE_1__ WIN32_FILE_ATTRIBUTE_DATA ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int ,char*,int const*) ;
 int FUNC_2 (struct stat*,int,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int const*) ;

int FUNC_4(
 struct stat *VAR_4,
 const WIN32_FILE_ATTRIBUTE_DATA *VAR_5,
 const wchar_t *VAR_6)
{
 FUNC_2(VAR_4,
  VAR_5->dwFileAttributes,
  VAR_5->nFileSizeHigh,
  VAR_5->nFileSizeLow,
  VAR_5->ftCreationTime,
  VAR_5->ftLastAccessTime,
  VAR_5->ftLastWriteTime);

 if (VAR_5->dwFileAttributes & VAR_0 && VAR_6) {
  git_win32_path VAR_7;

  if (FUNC_3(VAR_7, VAR_6) >= 0) {
   VAR_4->st_mode = (VAR_4->st_mode & ~VAR_3) | VAR_2;



   if ((VAR_4->st_size = FUNC_0(((void*)0), 0, VAR_7)) < 0) {
    FUNC_1(VAR_1, "could not convert reparse point name for '%ls'", VAR_6);
    return -1;
   }
  }
 }

 return 0;
}
