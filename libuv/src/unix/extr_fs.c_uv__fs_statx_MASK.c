
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_17__ {int tv_nsec; int tv_sec; } ;
struct TYPE_15__ {int tv_nsec; int tv_sec; } ;
struct TYPE_13__ {int tv_nsec; int tv_sec; } ;
struct TYPE_11__ {int tv_nsec; int tv_sec; } ;
struct TYPE_19__ {scalar_t__ st_gen; scalar_t__ st_flags; TYPE_7__ st_birthtim; TYPE_5__ st_ctim; TYPE_3__ st_mtim; TYPE_1__ st_atim; int st_blocks; int st_blksize; int st_size; int st_ino; int st_rdev; int st_gid; int st_uid; int st_nlink; int st_mode; scalar_t__ st_dev; } ;
typedef TYPE_9__ uv_stat_t ;
struct TYPE_18__ {int tv_nsec; int tv_sec; } ;
struct TYPE_16__ {int tv_nsec; int tv_sec; } ;
struct TYPE_14__ {int tv_nsec; int tv_sec; } ;
struct TYPE_12__ {int tv_nsec; int tv_sec; } ;
struct uv__statx {int stx_dev_major; TYPE_8__ stx_btime; TYPE_6__ stx_ctime; TYPE_4__ stx_mtime; TYPE_2__ stx_atime; int stx_blocks; int stx_blksize; int stx_size; int stx_ino; int stx_rdev_major; int stx_gid; int stx_uid; int stx_nlink; int stx_mode; scalar_t__ stx_dev_minor; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int,char const*,int,int,struct uv__statx*) ;

__attribute__((used)) static int FUNC_2(int VAR_7,
                        const char* VAR_8,
                        int VAR_9,
                        int VAR_10,
                        uv_stat_t* VAR_11) {
  FUNC_0(VAR_5 != -1);

  static int VAR_12;
  struct uv__statx VAR_13;
  int VAR_14;
  int VAR_15;
  int VAR_16;
  int VAR_17;

  if (VAR_12)
    return VAR_5;

  VAR_14 = VAR_0;
  VAR_15 = 0;
  VAR_16 = 0xFFF;

  if (VAR_9) {
    VAR_14 = VAR_7;
    VAR_15 |= 0x1000;
  }

  if (VAR_10)
    VAR_15 |= VAR_1;

  VAR_17 = FUNC_1(VAR_14, VAR_8, VAR_15, VAR_16, &VAR_13);

  if (VAR_17 == -1) {



    if (VAR_6 != VAR_2 && VAR_6 != VAR_4 && VAR_6 != VAR_3)
      return -1;

    VAR_12 = 1;
    return VAR_5;
  }

  VAR_11->st_dev = 256 * VAR_13.stx_dev_major + VAR_13.stx_dev_minor;
  VAR_11->st_mode = VAR_13.stx_mode;
  VAR_11->st_nlink = VAR_13.stx_nlink;
  VAR_11->st_uid = VAR_13.stx_uid;
  VAR_11->st_gid = VAR_13.stx_gid;
  VAR_11->st_rdev = VAR_13.stx_rdev_major;
  VAR_11->st_ino = VAR_13.stx_ino;
  VAR_11->st_size = VAR_13.stx_size;
  VAR_11->st_blksize = VAR_13.stx_blksize;
  VAR_11->st_blocks = VAR_13.stx_blocks;
  VAR_11->st_atim.tv_sec = VAR_13.stx_atime.tv_sec;
  VAR_11->st_atim.tv_nsec = VAR_13.stx_atime.tv_nsec;
  VAR_11->st_mtim.tv_sec = VAR_13.stx_mtime.tv_sec;
  VAR_11->st_mtim.tv_nsec = VAR_13.stx_mtime.tv_nsec;
  VAR_11->st_ctim.tv_sec = VAR_13.stx_ctime.tv_sec;
  VAR_11->st_ctim.tv_nsec = VAR_13.stx_ctime.tv_nsec;
  VAR_11->st_birthtim.tv_sec = VAR_13.stx_btime.tv_sec;
  VAR_11->st_birthtim.tv_nsec = VAR_13.stx_btime.tv_nsec;
  VAR_11->st_flags = 0;
  VAR_11->st_gen = 0;

  return 0;



}
