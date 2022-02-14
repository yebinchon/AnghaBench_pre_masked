
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct git__dirent {scalar_t__ d_ino; int d_name; } ;
struct TYPE_5__ {int dwFileAttributes; int cFileName; } ;
struct TYPE_4__ {scalar_t__ h; TYPE_3__ f; int dir; scalar_t__ first; } ;
typedef TYPE_1__ git__DIR ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,TYPE_3__*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,char*,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;

int FUNC_4(
 git__DIR *VAR_4,
 struct git__dirent *VAR_5,
 struct git__dirent **VAR_6,
 int *VAR_7)
{
 if (!VAR_4 || !VAR_5 || !VAR_6 || VAR_4->h == VAR_3)
  return -1;

 *VAR_6 = ((void*)0);

 if (VAR_4->first)
  VAR_4->first = 0;
 else if (!FUNC_0(VAR_4->h, &VAR_4->f)) {
  if (FUNC_1() == VAR_0)
   return 0;
  FUNC_2(VAR_2, "could not read from directory '%s'", VAR_4->dir);
  return -1;
 }


 if (FUNC_3(VAR_5->d_name, VAR_4->f.cFileName) < 0)
  return -1;

 VAR_5->d_ino = 0;

 *VAR_6 = VAR_5;

 if (VAR_7 != ((void*)0))
  *VAR_7 = ((VAR_4->f.dwFileAttributes & VAR_1) != 0);

 return 0;
}
