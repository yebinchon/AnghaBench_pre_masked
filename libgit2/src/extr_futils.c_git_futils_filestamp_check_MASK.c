
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct stat {scalar_t__ st_mtime; scalar_t__ st_mtime_nsec; scalar_t__ st_ino; scalar_t__ st_size; } ;
typedef scalar_t__ git_off_t ;
struct TYPE_4__ {scalar_t__ tv_sec; scalar_t__ tv_nsec; } ;
struct TYPE_5__ {scalar_t__ size; unsigned int ino; TYPE_1__ mtime; } ;
typedef TYPE_2__ git_futils_filestamp ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,struct stat*) ;

int FUNC_1(
 git_futils_filestamp *VAR_1, const char *VAR_2)
{
 struct stat VAR_3;


 if (VAR_1 == ((void*)0))
  return 1;

 if (FUNC_0(VAR_2, &VAR_3) < 0)
  return VAR_0;

 if (VAR_1->mtime.tv_sec == VAR_3.st_mtime &&



  VAR_1->size == (git_off_t)VAR_3.st_size &&
  VAR_1->ino == (unsigned int)VAR_3.st_ino)
  return 0;

 VAR_1->mtime.tv_sec = VAR_3.st_mtime;



 VAR_1->size = (git_off_t)VAR_3.st_size;
 VAR_1->ino = (unsigned int)VAR_3.st_ino;

 return 1;
}
