
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
struct TYPE_8__ {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
struct TYPE_7__ {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
struct TYPE_10__ {scalar_t__ st_size; scalar_t__ st_mode; scalar_t__ st_uid; scalar_t__ st_gid; scalar_t__ st_ino; scalar_t__ st_dev; scalar_t__ st_flags; scalar_t__ st_gen; TYPE_3__ st_birthtim; TYPE_2__ st_mtim; TYPE_1__ st_ctim; } ;
typedef TYPE_4__ uv_stat_t ;



__attribute__((used)) static int FUNC_0(const uv_stat_t* VAR_0, const uv_stat_t* VAR_1) {
  return VAR_0->st_ctim.tv_nsec == VAR_1->st_ctim.tv_nsec
      && VAR_0->st_mtim.tv_nsec == VAR_1->st_mtim.tv_nsec
      && VAR_0->st_birthtim.tv_nsec == VAR_1->st_birthtim.tv_nsec
      && VAR_0->st_ctim.tv_sec == VAR_1->st_ctim.tv_sec
      && VAR_0->st_mtim.tv_sec == VAR_1->st_mtim.tv_sec
      && VAR_0->st_birthtim.tv_sec == VAR_1->st_birthtim.tv_sec
      && VAR_0->st_size == VAR_1->st_size
      && VAR_0->st_mode == VAR_1->st_mode
      && VAR_0->st_uid == VAR_1->st_uid
      && VAR_0->st_gid == VAR_1->st_gid
      && VAR_0->st_ino == VAR_1->st_ino
      && VAR_0->st_dev == VAR_1->st_dev
      && VAR_0->st_flags == VAR_1->st_flags
      && VAR_0->st_gen == VAR_1->st_gen;
}
