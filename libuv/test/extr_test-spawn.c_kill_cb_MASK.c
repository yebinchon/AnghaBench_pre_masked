
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pid; } ;
typedef TYPE_1__ uv_process_t ;
typedef int uv_handle_t ;
typedef int int64_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(uv_process_t* VAR_6,
                    int64_t VAR_7,
                    int VAR_8) {
  int VAR_9;

  FUNC_1("exit_cb\n");
  VAR_4++;



  FUNC_0(VAR_7 == 0);
  FUNC_0(VAR_5 || VAR_8 == VAR_1);

  FUNC_2((uv_handle_t*)VAR_6, VAR_3);






  VAR_9 = FUNC_3(VAR_6->pid, 0);
  FUNC_0(VAR_9 == VAR_2);
}
