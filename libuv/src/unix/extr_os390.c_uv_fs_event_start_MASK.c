
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {char* path; int rfis_rftok; int cb; TYPE_1__* loop; } ;
typedef TYPE_2__ uv_fs_event_t ;
typedef int uv_fs_event_cb ;
struct TYPE_12__ {int msg_queue; } ;
typedef TYPE_3__ uv__os390_epoll ;
typedef int reg_struct ;
typedef int handle ;
struct TYPE_13__ {int __rfis_qid; int __rfis_type; TYPE_2__** __rfis_rftok; int __rfis_utok; int __rfis_cmd; } ;
typedef TYPE_4__ _RFIS ;
struct TYPE_10__ {TYPE_3__* ep; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int ,int,TYPE_4__*) ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int FUNC_3 (int ,TYPE_2__**,int) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 char* FUNC_6 (char const*) ;

int FUNC_7(uv_fs_event_t* VAR_5, uv_fs_event_cb VAR_6,
                      const char* VAR_7, unsigned int VAR_8) {
  uv__os390_epoll* VAR_9;
  _RFIS VAR_10;
  char* VAR_11;
  int VAR_12;

  if (FUNC_5(VAR_5))
    return VAR_0;

  VAR_9 = VAR_5->loop->ep;
  FUNC_2(VAR_9->msg_queue != -1);

  VAR_10.__rfis_cmd = VAR_3;
  VAR_10.__rfis_qid = VAR_9->msg_queue;
  VAR_10.__rfis_type = 1;
  FUNC_3(VAR_10.__rfis_utok, &VAR_5, sizeof(VAR_5));

  VAR_11 = FUNC_6(VAR_7);
  if (VAR_11 == ((void*)0))
    return VAR_1;

  VAR_12 = FUNC_1(VAR_11, VAR_2, sizeof(VAR_10), &VAR_10);
  if (VAR_12 != 0)
    return FUNC_0(VAR_4);

  FUNC_4(VAR_5);
  VAR_5->path = VAR_11;
  VAR_5->cb = VAR_6;
  FUNC_3(VAR_5->rfis_rftok, VAR_10.__rfis_rftok,
         sizeof(VAR_5->rfis_rftok));

  return 0;
}
