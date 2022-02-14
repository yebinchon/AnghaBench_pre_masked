
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int atime; int mtime; scalar_t__ path; } ;
typedef TYPE_1__ uv_fs_t ;
typedef int uint64_t ;
struct utimbuf {int actime; int modtime; } ;
struct timeval {int tv_sec; int tv_usec; } ;
struct timespec {int tv_sec; int tv_nsec; } ;
typedef int ssize_t ;
struct TYPE_7__ {int att_mtimechg; int att_atimechg; int att_mtime; int att_atime; } ;
typedef TYPE_2__ attrib_t ;
typedef int atr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,TYPE_2__*,int) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 (scalar_t__,struct utimbuf*) ;
 int FUNC_3 (int ,scalar_t__,struct timespec*,int ) ;
 int FUNC_4 (scalar_t__,struct timeval*) ;

__attribute__((used)) static ssize_t FUNC_5(uv_fs_t* VAR_3) {







  struct timespec VAR_4[2];
  VAR_4[0].tv_sec = VAR_3->atime;
  VAR_4[0].tv_nsec = (uint64_t)(VAR_3->atime * 1000000) % 1000000 * 1000;
  VAR_4[1].tv_sec = VAR_3->mtime;
  VAR_4[1].tv_nsec = (uint64_t)(VAR_3->mtime * 1000000) % 1000000 * 1000;
  return FUNC_3(VAR_0, VAR_3->path, VAR_4, 0);
}
