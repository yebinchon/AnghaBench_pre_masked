
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {double tv_sec; double tv_nsec; } ;
struct TYPE_7__ {double tv_sec; double tv_nsec; } ;
struct TYPE_9__ {TYPE_2__ st_mtim; TYPE_1__ st_atim; } ;
typedef TYPE_3__ uv_stat_t ;
struct TYPE_10__ {scalar_t__ result; TYPE_3__ statbuf; } ;
typedef TYPE_4__ uv_fs_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ,TYPE_4__*,char const*,int *) ;

__attribute__((used)) static void FUNC_3(const char* VAR_1, double VAR_2, double VAR_3) {
  uv_stat_t* VAR_4;
  uv_fs_t VAR_5;
  int VAR_6;

  VAR_6 = FUNC_2(VAR_0, &VAR_5, VAR_1, ((void*)0));
  FUNC_0(VAR_6 == 0);

  FUNC_0(VAR_5.result == 0);
  VAR_4 = &VAR_5.statbuf;

  FUNC_0(VAR_4->st_atim.tv_sec + (VAR_4->st_atim.tv_nsec / 1000000000.0) == VAR_2);
  FUNC_0(VAR_4->st_mtim.tv_sec + (VAR_4->st_mtim.tv_nsec / 1000000000.0) == VAR_3);

  FUNC_1(&VAR_5);
}
