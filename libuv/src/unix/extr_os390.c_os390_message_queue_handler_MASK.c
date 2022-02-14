
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int path; int (* cb ) (TYPE_1__*,int ,int,int ) ;} ;
typedef TYPE_1__ uv_fs_event_t ;
struct TYPE_8__ {int msg_queue; } ;
typedef TYPE_2__ uv__os390_epoll ;
typedef int msg ;
struct TYPE_9__ {scalar_t__ __rfim_event; scalar_t__ __rfim_utok; } ;
typedef TYPE_3__ _RFIM ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 () ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int,TYPE_3__*,int,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(uv__os390_epoll* VAR_8) {
  uv_fs_event_t* VAR_9;
  int VAR_10;
  int VAR_11;
  _RFIM VAR_12;

  if (VAR_8->msg_queue == -1)
    return 0;

  VAR_10 = FUNC_1(VAR_8->msg_queue, &VAR_12, sizeof(VAR_12), 0, VAR_1);

  if (VAR_10 == -1 && VAR_7 == VAR_0)
    return 0;

  if (VAR_10 == -1)
    FUNC_0();

  VAR_11 = 0;
  if (VAR_12.__rfim_event == VAR_4 || VAR_12.__rfim_event == VAR_6)
    VAR_11 = VAR_2;
  else if (VAR_12.__rfim_event == VAR_5)
    VAR_11 = VAR_3;
  else

    return 0;

  VAR_9 = *(uv_fs_event_t**)(VAR_12.__rfim_utok);
  VAR_9->cb(VAR_9, FUNC_3(VAR_9->path), VAR_11, 0);
  return 1;
}
