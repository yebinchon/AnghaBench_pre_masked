
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
struct TYPE_7__ {TYPE_1__* data; } ;
struct TYPE_6__ {TYPE_2__ tcp; int connect_req; scalar_t__ pongs; scalar_t__ state; } ;
typedef TYPE_1__ pinger_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (char*,int ,struct sockaddr_in*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,struct sockaddr const*,int ) ;
 int FUNC_4 (int *,TYPE_2__*,struct sockaddr const*,int ) ;
 int FUNC_5 (int ,TYPE_2__*) ;

__attribute__((used)) static void FUNC_6(void) {
  struct sockaddr_in VAR_3;
  struct sockaddr_in VAR_4;
  pinger_t *VAR_5;
  int VAR_6;

  FUNC_0(0 == FUNC_2("0.0.0.0", 0, &VAR_3));
  FUNC_0(0 == FUNC_2("127.0.0.1", VAR_0, &VAR_4));
  VAR_5 = FUNC_1(sizeof(*VAR_5));
  VAR_5->state = 0;
  VAR_5->pongs = 0;


  VAR_6 = FUNC_5(VAR_1, &VAR_5->tcp);
  FUNC_0(!VAR_6);

  VAR_5->tcp.data = VAR_5;

  FUNC_0(0 == FUNC_3(&VAR_5->tcp,
                          (const struct sockaddr*) &VAR_3,
                          0));

  VAR_6 = FUNC_4(&VAR_5->connect_req,
                     &VAR_5->tcp,
                     (const struct sockaddr*) &VAR_4,
                     VAR_2);
  FUNC_0(!VAR_6);
}
