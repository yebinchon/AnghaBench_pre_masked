
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ result; } ;
typedef TYPE_1__ uv_fs_t ;
struct TYPE_5__ {int result; } ;


 int FUNC_0 (int ,char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int *,int ,int *,int,int,int ) ;
 char* FUNC_3 (int) ;

void FUNC_4(uv_fs_t *VAR_5) {
    if (VAR_5->result < 0) {
        FUNC_0(VAR_4, "Write error: %s\n", FUNC_3((int)VAR_5->result));
    }
    else {
        FUNC_2(FUNC_1(), &VAR_3, VAR_2.result, &VAR_0, 1, -1, VAR_1);
    }
}
