
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_13__ ;
typedef struct TYPE_17__ TYPE_12__ ;
typedef struct TYPE_16__ TYPE_11__ ;
typedef struct TYPE_15__ TYPE_10__ ;


struct TYPE_16__ {scalar_t__ tv_nsec; int tv_sec; } ;
struct TYPE_27__ {scalar_t__ tv_nsec; int tv_sec; } ;
struct TYPE_25__ {scalar_t__ tv_nsec; int tv_sec; } ;
struct TYPE_23__ {scalar_t__ tv_nsec; int tv_sec; } ;
struct TYPE_18__ {scalar_t__ st_gen; scalar_t__ st_flags; TYPE_11__ st_birthtim; TYPE_9__ st_ctim; TYPE_7__ st_mtim; TYPE_5__ st_atim; int st_blocks; int st_blksize; int st_size; int st_ino; int st_rdev; int st_gid; int st_uid; int st_nlink; int st_mode; int st_dev; } ;
typedef TYPE_13__ uv_stat_t ;
struct TYPE_15__ {scalar_t__ tv_nsec; int tv_sec; } ;
struct TYPE_17__ {scalar_t__ tv_nsec; int tv_sec; } ;
struct TYPE_26__ {scalar_t__ tv_nsec; int tv_sec; } ;
struct TYPE_24__ {scalar_t__ tv_nsec; int tv_sec; } ;
struct TYPE_22__ {scalar_t__ tv_nsec; int tv_sec; } ;
struct TYPE_21__ {scalar_t__ tv_nsec; int tv_sec; } ;
struct TYPE_20__ {scalar_t__ tv_nsec; int tv_sec; } ;
struct TYPE_19__ {scalar_t__ tv_nsec; int tv_sec; } ;
struct stat {int st_ctime; int st_mtime; int st_atime; TYPE_10__ st_ctim; scalar_t__ st_gen; scalar_t__ st_flags; TYPE_12__ st_birthtim; TYPE_8__ st_mtim; TYPE_6__ st_atim; scalar_t__ st_ctimensec; scalar_t__ st_mtimensec; scalar_t__ st_atimensec; TYPE_4__ st_birthtimespec; TYPE_3__ st_ctimespec; TYPE_2__ st_mtimespec; TYPE_1__ st_atimespec; int st_blocks; int st_blksize; int st_size; int st_ino; int st_rdev; int st_gid; int st_uid; int st_nlink; int st_mode; int st_dev; } ;



__attribute__((used)) static void FUNC_0(struct stat* VAR_0, uv_stat_t* VAR_1) {
  VAR_1->st_dev = VAR_0->st_dev;
  VAR_1->st_mode = VAR_0->st_mode;
  VAR_1->st_nlink = VAR_0->st_nlink;
  VAR_1->st_uid = VAR_0->st_uid;
  VAR_1->st_gid = VAR_0->st_gid;
  VAR_1->st_rdev = VAR_0->st_rdev;
  VAR_1->st_ino = VAR_0->st_ino;
  VAR_1->st_size = VAR_0->st_size;
  VAR_1->st_blksize = VAR_0->st_blksize;
  VAR_1->st_blocks = VAR_0->st_blocks;
  VAR_1->st_atim.tv_sec = VAR_0->st_atime;
  VAR_1->st_atim.tv_nsec = 0;
  VAR_1->st_mtim.tv_sec = VAR_0->st_mtime;
  VAR_1->st_mtim.tv_nsec = 0;
  VAR_1->st_ctim.tv_sec = VAR_0->st_ctime;
  VAR_1->st_ctim.tv_nsec = 0;
  VAR_1->st_birthtim.tv_sec = VAR_0->st_ctime;
  VAR_1->st_birthtim.tv_nsec = 0;
  VAR_1->st_flags = 0;
  VAR_1->st_gen = 0;

}
