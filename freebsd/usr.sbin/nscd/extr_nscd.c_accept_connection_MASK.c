
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uid_t ;
struct timespec {int dummy; } ;
struct runtime_env {int queue; } ;
struct TYPE_2__ {int tv_sec; } ;
struct query_state {int kevent_watermark; TYPE_1__ timeout; } ;
struct kevent {int ident; } ;
struct configuration {int dummy; } ;
typedef int gid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct kevent*,int,int ,int,int ,int,struct query_state*) ;
 int FUNC_1 (char*,char*,...) ;
 int VAR_4 ;
 int FUNC_2 (void (*) (struct kevent*,struct runtime_env*,struct configuration*)) ;
 int FUNC_3 (void (*) (struct kevent*,struct runtime_env*,struct configuration*)) ;
 int FUNC_4 (int ,int *,int *) ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (int,int *,int *) ;
 struct query_state* FUNC_6 (int,int,int ,int ) ;
 int FUNC_7 (int ,struct kevent*,int,int *,int ,struct timespec*) ;
 int FUNC_8 (struct timespec*,int ,int) ;

__attribute__((used)) static void
FUNC_9(struct kevent *VAR_6, struct runtime_env *VAR_7,
 struct configuration *VAR_8)
{
 struct kevent VAR_9[2];
 struct timespec VAR_10;
 struct query_state *VAR_11;

 int VAR_12;
 int VAR_13;

 uid_t VAR_14;
 gid_t VAR_15;

 FUNC_2(FUNC_9);
 VAR_12 = FUNC_4(VAR_6->ident, ((void*)0), ((void*)0));
 if (VAR_12 == -1) {
  FUNC_1("accept_connection", "error %d during accept()",
      VAR_5);
  FUNC_3(FUNC_9);
  return;
 }

 if (FUNC_5(VAR_12, &VAR_14, &VAR_15) != 0) {
  FUNC_1("accept_connection", "error %d during getpeereid()",
   VAR_5);
  FUNC_3(FUNC_9);
  return;
 }

 VAR_11 = FUNC_6(VAR_12, sizeof(int), VAR_14, VAR_15);
 if (VAR_11 == ((void*)0)) {
  FUNC_1("accept_connection", "can't init query_state");
  FUNC_3(FUNC_9);
  return;
 }

 FUNC_8(&VAR_10, 0, sizeof(struct timespec));
 FUNC_0(&VAR_9[0], VAR_12, VAR_1, VAR_2 | VAR_3,
  0, VAR_11->timeout.tv_sec * 1000, VAR_11);
 FUNC_0(&VAR_9[1], VAR_12, VAR_0, VAR_2 | VAR_3,
  VAR_4, VAR_11->kevent_watermark, VAR_11);
 VAR_13 = FUNC_7(VAR_7->queue, VAR_9, 2, ((void*)0), 0, &VAR_10);
 if (VAR_13 < 0)
  FUNC_1("accept_connection", "kevent error");

 FUNC_3(FUNC_9);
}
