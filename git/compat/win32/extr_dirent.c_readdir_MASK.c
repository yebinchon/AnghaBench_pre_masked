
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct dirent {int dummy; } ;
typedef int WIN32_FIND_DATAW ;
struct TYPE_3__ {struct dirent dd_dir; scalar_t__ dd_stat; int dd_handle; } ;
typedef scalar_t__ DWORD ;
typedef TYPE_1__ DIR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_3 (struct dirent*,int *) ;

struct dirent *FUNC_4(DIR *VAR_3)
{
 if (!VAR_3) {
  VAR_2 = VAR_0;
  return ((void*)0);
 }


 if (VAR_3->dd_stat) {

  WIN32_FIND_DATAW VAR_4;
  if (FUNC_0(VAR_3->dd_handle, &VAR_4)) {
   FUNC_3(&VAR_3->dd_dir, &VAR_4);
  } else {
   DWORD VAR_5 = FUNC_1();


   if (VAR_5 != VAR_1)
    VAR_2 = FUNC_2(VAR_5);
   return ((void*)0);
  }
 }

 ++VAR_3->dd_stat;
 return &VAR_3->dd_dir;
}
