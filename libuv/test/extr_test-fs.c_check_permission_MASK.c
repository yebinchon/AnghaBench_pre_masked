
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int st_mode; } ;
typedef TYPE_1__ uv_stat_t ;
struct TYPE_6__ {scalar_t__ result; TYPE_1__ statbuf; } ;
typedef TYPE_2__ uv_fs_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,TYPE_2__*,char const*,int *) ;

__attribute__((used)) static void FUNC_3(const char* VAR_0, unsigned int VAR_1) {
  int VAR_2;
  uv_fs_t VAR_3;
  uv_stat_t* VAR_4;

  VAR_2 = FUNC_2(((void*)0), &VAR_3, VAR_0, ((void*)0));
  FUNC_0(VAR_2 == 0);
  FUNC_0(VAR_3.result == 0);

  VAR_4 = &VAR_3.statbuf;







  FUNC_0((VAR_4->st_mode & 0777) == VAR_1);


  FUNC_1(&VAR_3);
}
