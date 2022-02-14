
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
struct TYPE_8__ {TYPE_2__* data; } ;
struct TYPE_6__ {TYPE_3__ tcp; } ;
struct TYPE_7__ {int vectored_writes; TYPE_1__ stream; int connect_req; scalar_t__ pongs; scalar_t__ state; } ;
typedef TYPE_2__ pinger_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (char*,int ,struct sockaddr_in*) ;
 int FUNC_4 (int *,TYPE_3__*,struct sockaddr const*,int ) ;
 int FUNC_5 (int ,TYPE_3__*) ;

__attribute__((used)) static void FUNC_6(int VAR_3) {
  int VAR_4;
  struct sockaddr_in VAR_5;
  pinger_t *VAR_6;

  FUNC_0(0 == FUNC_3("127.0.0.1", VAR_0, &VAR_5));
  VAR_6 = FUNC_1(sizeof(*VAR_6));
  FUNC_0(VAR_6 != ((void*)0));
  VAR_6->vectored_writes = VAR_3;
  VAR_6->state = 0;
  VAR_6->pongs = 0;


  VAR_4 = FUNC_5(FUNC_2(), &VAR_6->stream.tcp);
  VAR_6->stream.tcp.data = VAR_6;
  FUNC_0(!VAR_4);



  VAR_4 = FUNC_4(&VAR_6->connect_req,
                     &VAR_6->stream.tcp,
                     (const struct sockaddr*) &VAR_5,
                     VAR_1);
  FUNC_0(!VAR_4);


  FUNC_0(VAR_2 == 0);
}
