
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int atime; int mtime; int file; } ;
typedef TYPE_1__ uv_fs_t ;
typedef int uint64_t ;
struct timeval {int tv_sec; int tv_usec; } ;
struct timespec {int tv_sec; int tv_nsec; } ;
typedef int ssize_t ;
struct TYPE_7__ {int att_mtimechg; int att_atimechg; int att_mtime; int att_atime; } ;
typedef TYPE_2__ attrib_t ;
typedef int atr ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_2__*,int) ;
 int VAR_1 ;
 int FUNC_1 (int ,struct timespec*) ;
 int FUNC_2 (int ,struct timeval*) ;
 int FUNC_3 (int ,int *,struct timeval*) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 int FUNC_5 (int ,int *,struct timespec*,int ) ;

__attribute__((used)) static ssize_t FUNC_6(uv_fs_t* VAR_2) {






  struct timespec VAR_3[2];
  VAR_3[0].tv_sec = VAR_2->atime;
  VAR_3[0].tv_nsec = (uint64_t)(VAR_2->atime * 1000000) % 1000000 * 1000;
  VAR_3[1].tv_sec = VAR_2->mtime;
  VAR_3[1].tv_nsec = (uint64_t)(VAR_2->mtime * 1000000) % 1000000 * 1000;



  return FUNC_1(VAR_2->file, VAR_3);
}
