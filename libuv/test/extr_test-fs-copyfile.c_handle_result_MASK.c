
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ st_size; scalar_t__ st_mode; } ;
struct TYPE_7__ {scalar_t__ fs_type; scalar_t__ result; TYPE_1__ statbuf; int path; } ;
typedef TYPE_2__ uv_fs_t ;
typedef scalar_t__ uint64_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,TYPE_2__*,int ,int *) ;

__attribute__((used)) static void FUNC_3(uv_fs_t* VAR_3) {
  uv_fs_t VAR_4;
  uint64_t VAR_5;
  uint64_t VAR_6;
  int VAR_7;

  FUNC_0(VAR_3->fs_type == VAR_0);
  FUNC_0(VAR_3->result == 0);


  VAR_7 = FUNC_2(((void*)0), &VAR_4, VAR_3->path, ((void*)0));
  FUNC_0(VAR_7 == 0);
  VAR_5 = VAR_4.statbuf.st_size;
  VAR_6 = VAR_4.statbuf.st_mode;
  FUNC_1(&VAR_4);
  VAR_7 = FUNC_2(((void*)0), &VAR_4, VAR_1, ((void*)0));
  FUNC_0(VAR_7 == 0);
  FUNC_0(VAR_4.statbuf.st_size == VAR_5);
  FUNC_0(VAR_4.statbuf.st_mode == VAR_6);
  FUNC_1(&VAR_4);
  FUNC_1(VAR_3);
  VAR_2++;
}
