
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef char uint8_t ;
struct sockaddr_in6 {int sin6_port; int sin6_addr; } ;
struct sockaddr_in {int sin_port; int sin_addr; } ;
struct sockaddr {int dummy; } ;
struct TYPE_8__ {int tcp; } ;
struct TYPE_7__ {scalar_t__ buf; } ;
struct TYPE_9__ {scalar_t__ rdstate; scalar_t__ wrstate; scalar_t__ result; TYPE_2__ handle; TYPE_1__ t; } ;
typedef TYPE_3__ conn ;
struct TYPE_10__ {TYPE_3__ outgoing; TYPE_3__ incoming; } ;
typedef TYPE_4__ client_ctx ;
typedef int addr_storage ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (TYPE_3__*,char*,int) ;
 int FUNC_4 (char*,int *,int) ;
 int FUNC_5 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (int *,struct sockaddr*,int*) ;

__attribute__((used)) static int FUNC_8(client_ctx *VAR_3) {
  const struct sockaddr_in6 *VAR_4;
  const struct sockaddr_in *VAR_5;
  char VAR_6[sizeof(*VAR_4)];
  conn *VAR_7;
  conn *VAR_8;
  uint8_t *VAR_9;
  int VAR_10;

  VAR_7 = &VAR_3->incoming;
  VAR_8 = &VAR_3->outgoing;
  FUNC_0(VAR_7->rdstate == VAR_0);
  FUNC_0(VAR_7->wrstate == VAR_0);
  FUNC_0(VAR_8->rdstate == VAR_0);
  FUNC_0(VAR_8->wrstate == VAR_0);


  VAR_9 = (uint8_t *) VAR_7->t.buf;
  if (VAR_8->result == 0) {



    VAR_10 = sizeof(VAR_6);
    FUNC_1(0 == FUNC_7(&VAR_8->handle.tcp,
                                  (struct sockaddr *) VAR_6,
                                  &VAR_10));
    VAR_9[0] = 5;
    VAR_9[1] = 0;
    VAR_9[2] = 0;
    if (VAR_10 == sizeof(*VAR_5)) {
      VAR_9[3] = 1;
      VAR_5 = (const struct sockaddr_in *) &VAR_6;
      FUNC_4(VAR_9 + 4, &VAR_5->sin_addr, 4);
      FUNC_4(VAR_9 + 8, &VAR_5->sin_port, 2);
      FUNC_3(VAR_7, VAR_9, 10);
    } else if (VAR_10 == sizeof(*VAR_4)) {
      VAR_9[3] = 4;
      VAR_4 = (const struct sockaddr_in6 *) &VAR_6;
      FUNC_4(VAR_9 + 4, &VAR_4->sin6_addr, 16);
      FUNC_4(VAR_9 + 20, &VAR_4->sin6_port, 2);
      FUNC_3(VAR_7, VAR_9, 22);
    } else {
      FUNC_2();
    }
    return VAR_2;
  } else {
    FUNC_5("upstream connection error: %s\n", FUNC_6(VAR_8->result));

    FUNC_3(VAR_7, "\5\5\0\1\0\0\0\0\0\0", 10);
    return VAR_1;
  }

  FUNC_2();
  return VAR_1;
}
