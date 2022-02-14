
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ result; } ;
typedef TYPE_1__ uv_fs_t ;
struct TYPE_9__ {int result; } ;
struct TYPE_8__ {scalar_t__ len; } ;


 int FUNC_0 (int ,char*,char*) ;
 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 TYPE_4__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,TYPE_1__*,int ,int *) ;
 int FUNC_3 (int ,int *,int,TYPE_2__*,int,int,int ) ;
 char* FUNC_4 (scalar_t__) ;
 int VAR_4 ;

void FUNC_5(uv_fs_t *VAR_5) {
    if (VAR_5->result < 0) {
        FUNC_0(VAR_3, "Read error: %s\n", FUNC_4(VAR_5->result));
    }
    else if (VAR_5->result == 0) {
        uv_fs_t VAR_6;

        FUNC_2(FUNC_1(), &VAR_6, VAR_2.result, ((void*)0));
    }
    else if (VAR_5->result > 0) {
        VAR_0.len = VAR_5->result;
        FUNC_3(FUNC_1(), &VAR_4, 1, &VAR_0, 1, -1, VAR_1);
    }
}
