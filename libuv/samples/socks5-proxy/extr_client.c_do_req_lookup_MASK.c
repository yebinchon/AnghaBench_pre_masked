
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {int dport; int daddr; } ;
typedef TYPE_5__ s5_ctx ;
struct TYPE_13__ {void* sin6_port; } ;
struct TYPE_12__ {void* sin_port; } ;
struct TYPE_11__ {int sa_family; } ;
struct TYPE_14__ {TYPE_3__ addr6; TYPE_2__ addr4; TYPE_1__ addr; } ;
struct TYPE_16__ {scalar_t__ rdstate; scalar_t__ wrstate; scalar_t__ result; TYPE_4__ t; } ;
typedef TYPE_6__ conn ;
struct TYPE_17__ {TYPE_6__ outgoing; TYPE_6__ incoming; TYPE_5__ parser; } ;
typedef TYPE_7__ client_ctx ;




 int FUNC_0 (int) ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (TYPE_6__*,char*,int) ;
 int FUNC_3 (TYPE_7__*) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (char*,int ,int ) ;
 int VAR_1 ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static int FUNC_7(client_ctx *VAR_2) {
  s5_ctx *VAR_3;
  conn *VAR_4;
  conn *VAR_5;

  VAR_3 = &VAR_2->parser;
  VAR_4 = &VAR_2->incoming;
  VAR_5 = &VAR_2->outgoing;
  FUNC_0(VAR_4->rdstate == VAR_0);
  FUNC_0(VAR_4->wrstate == VAR_0);
  FUNC_0(VAR_5->rdstate == VAR_0);
  FUNC_0(VAR_5->wrstate == VAR_0);

  if (VAR_5->result < 0) {

    FUNC_5("lookup error for \"%s\": %s",
           VAR_3->daddr,
           FUNC_6(VAR_5->result));

    FUNC_2(VAR_4, "\5\4\0\1\0\0\0\0\0\0", 10);
    return VAR_1;
  }


  switch (VAR_5->t.addr.sa_family) {
    case 129:
      VAR_5->t.addr4.sin_port = FUNC_4(VAR_3->dport);
      break;
    case 128:
      VAR_5->t.addr6.sin6_port = FUNC_4(VAR_3->dport);
      break;
    default:
      FUNC_1();
  }

  return FUNC_3(VAR_2);
}
