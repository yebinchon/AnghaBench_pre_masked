
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int rfis_rftok; TYPE_1__* loop; } ;
typedef TYPE_2__ uv_fs_event_t ;
struct TYPE_11__ {int msg_queue; } ;
typedef TYPE_3__ uv__os390_epoll ;
typedef int reg_struct ;
struct TYPE_12__ {int __rfis_qid; int __rfis_type; int __rfis_rftok; int __rfis_cmd; } ;
typedef TYPE_4__ _RFIS ;
struct TYPE_9__ {TYPE_3__* ep; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,int,TYPE_4__*) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;

int FUNC_6(uv_fs_event_t* VAR_5) {
  uv__os390_epoll* VAR_6;
  _RFIS VAR_7;
  int VAR_8;

  if (!FUNC_5(VAR_5))
    return 0;

  VAR_6 = VAR_5->loop->ep;
  FUNC_2(VAR_6->msg_queue != -1);

  VAR_7.__rfis_cmd = VAR_3;
  VAR_7.__rfis_qid = VAR_6->msg_queue;
  VAR_7.__rfis_type = 1;
  FUNC_3(VAR_7.__rfis_rftok, VAR_5->rfis_rftok,
         sizeof(VAR_5->rfis_rftok));






  VAR_8 = FUNC_0("/", VAR_2, sizeof(VAR_7), &VAR_7);
  if (VAR_8 != 0 && VAR_4 != VAR_0 && VAR_4 != VAR_1)
    FUNC_1();

  FUNC_4(VAR_5);

  return 0;
}
