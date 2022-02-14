
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct stat {scalar_t__ st_ino; scalar_t__ st_size; scalar_t__ st_mtime_nsec; int st_mtime; } ;
typedef scalar_t__ git_off_t ;
struct TYPE_5__ {scalar_t__ tv_nsec; int tv_sec; } ;
struct TYPE_6__ {unsigned int ino; scalar_t__ size; TYPE_1__ mtime; } ;
typedef TYPE_2__ git_futils_filestamp ;


 int FUNC_0 (TYPE_2__*,int ,int) ;

void FUNC_1(
 git_futils_filestamp *VAR_0, struct stat *VAR_1)
{
 if (VAR_1) {
  VAR_0->mtime.tv_sec = VAR_1->st_mtime;



  VAR_0->mtime.tv_nsec = 0;

  VAR_0->size = (git_off_t)VAR_1->st_size;
  VAR_0->ino = (unsigned int)VAR_1->st_ino;
 } else {
  FUNC_0(VAR_0, 0, sizeof(*VAR_0));
 }
}
