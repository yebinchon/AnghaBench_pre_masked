
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct my_sm_struct {int dummy; } ;
typedef TYPE_1__* sm_t ;
typedef TYPE_2__* my_sm_t ;
typedef int WSADATA ;
struct TYPE_11__ {int port; } ;
struct TYPE_10__ {scalar_t__ (* select ) (TYPE_1__*,int) ;int (* cleanup ) (TYPE_1__*) ;int (* add_fd ) (TYPE_1__*,int,int *,TYPE_2__*,int) ;int on_close; int on_recv; int on_accept; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int) ;
 TYPE_1__* FUNC_10 (int) ;
 int VAR_7 ;
 int FUNC_11 (TYPE_1__*,int,int *,TYPE_2__*,int) ;
 scalar_t__ FUNC_12 (TYPE_1__*,int) ;
 int FUNC_13 (TYPE_1__*) ;

int FUNC_14(int VAR_8, char** VAR_9) {
  FUNC_7(VAR_0, VAR_5);
  FUNC_7(VAR_1, VAR_5);
  int VAR_10 = 8080;

  int VAR_11 = FUNC_9(VAR_10);
  if (VAR_11 < 0) {
    return -1;
  }

  sm_t VAR_12 = FUNC_10(4096);
  VAR_12->on_accept = VAR_2;
  VAR_12->on_recv = VAR_4;
  VAR_12->on_close = VAR_3;

  my_sm_t VAR_13 = (my_sm_t)FUNC_6(sizeof(struct my_sm_struct));
  VAR_13->port = VAR_10;


  VAR_12->add_fd(VAR_12, VAR_11, ((void*)0), VAR_13, 1);

  int VAR_14 = 0;
  while (!VAR_6) {
    if (VAR_12->select(VAR_12, 2) < 0) {
      VAR_14 = -1;
      break;
    }
  }
  VAR_12->cleanup(VAR_12);
  FUNC_5(VAR_13);
  FUNC_8(VAR_12);



  return VAR_14;
}
