
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct addrinfo {int ai_protocol; int ai_socktype; int ai_family; } ;
typedef int hints ;
struct TYPE_7__ {int addrinfo_req; } ;
struct TYPE_10__ {TYPE_1__ t; TYPE_3__* client; } ;
typedef TYPE_4__ conn ;
struct TYPE_9__ {TYPE_2__* sx; } ;
struct TYPE_8__ {int loop; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (struct addrinfo*,int ,int) ;
 scalar_t__ FUNC_3 (int ,int *,int ,char const*,int *,struct addrinfo*) ;

__attribute__((used)) static void FUNC_4(conn *VAR_4, const char *VAR_5) {
  struct addrinfo VAR_6;

  FUNC_2(&VAR_6, 0, sizeof(VAR_6));
  VAR_6.ai_family = VAR_0;
  VAR_6.ai_socktype = VAR_2;
  VAR_6.ai_protocol = VAR_1;
  FUNC_0(0 == FUNC_3(VAR_4->client->sx->loop,
                            &VAR_4->t.addrinfo_req,
                            VAR_3,
                            VAR_5,
                            ((void*)0),
                            &VAR_6));
  FUNC_1(VAR_4);
}
