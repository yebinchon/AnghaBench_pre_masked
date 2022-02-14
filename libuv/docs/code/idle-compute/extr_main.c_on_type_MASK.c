
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int result; } ;
typedef TYPE_1__ uv_fs_t ;
typedef int uv_buf_t ;
struct TYPE_7__ {size_t result; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,char*) ;
 int VAR_4 ;
 TYPE_2__ VAR_5 ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int ,TYPE_2__*,int ,int *,int,int,void (*) (TYPE_1__*)) ;
 int FUNC_4 (int *,int ) ;
 char* FUNC_5 (int ) ;

void FUNC_6(uv_fs_t *VAR_6) {
    if (VAR_5.result > 0) {
        VAR_0[VAR_5.result] = '\0';
        FUNC_1("Typed %s\n", VAR_0);

        uv_buf_t VAR_7 = FUNC_2(VAR_0, 1024);
        FUNC_3(VAR_3, &VAR_5, 0, &VAR_7, 1, -1, FUNC_6);
        FUNC_4(&VAR_2, VAR_1);
    }
    else if (VAR_5.result < 0) {
        FUNC_0(VAR_4, "error opening file: %s\n", FUNC_5(VAR_6->result));
    }
}
