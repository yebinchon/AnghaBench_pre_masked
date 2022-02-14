
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uv_thread_t ;
typedef int uv_process_t ;
struct TYPE_2__ {int connect_req; int channel; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int *,char*) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int *,int ,int (*) (int *,int )) ;
 int FUNC_5 (int ,int *,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *,int ,void*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(int VAR_5) {
  uv_process_t VAR_6;
  uv_thread_t VAR_7;
  int VAR_8;

  if (VAR_5) {
    VAR_8 = FUNC_8(&VAR_7, VAR_3, (void *) 42);
    FUNC_0(VAR_8 == 0);

    FUNC_7(1000);

    VAR_8 = FUNC_5(FUNC_3(), &VAR_2.channel, 1);
    FUNC_0(VAR_8 == 0);

    FUNC_4(&VAR_2.connect_req, &VAR_2.channel, VAR_0, FUNC_1);
  } else {
    FUNC_2(&VAR_2.channel, &VAR_6, "ipc_send_recv_helper");

    FUNC_1(&VAR_2.connect_req, 0);
  }

  VAR_8 = FUNC_6(FUNC_3(), VAR_1);
  FUNC_0(VAR_8 == 0);

  FUNC_0(VAR_4 == 2);

  if (VAR_5) {
    VAR_8 = FUNC_9(&VAR_7);
    FUNC_0(VAR_8 == 0);
  }

  return 0;
}
