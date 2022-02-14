
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__* poll_peer_sockets; int iocp; } ;
typedef TYPE_1__ uv_loop_t ;
struct TYPE_7__ {int ProviderId; } ;
typedef TYPE_2__ WSAPROTOCOL_INFOW ;
typedef scalar_t__ SOCKET ;


 size_t FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (void*,void*,int) ;
 scalar_t__ FUNC_2 (int ,TYPE_2__*) ;
 int * VAR_1 ;

__attribute__((used)) static SOCKET FUNC_3(uv_loop_t* VAR_2,
    WSAPROTOCOL_INFOW* VAR_3) {
  int VAR_4, VAR_5;
  SOCKET VAR_6;

  VAR_4 = -1;
  for (VAR_5 = 0; (size_t) VAR_5 < FUNC_0(VAR_1); VAR_5++) {
    if (FUNC_1((void*) &VAR_3->ProviderId,
               (void*) &VAR_1[VAR_5],
               sizeof VAR_3->ProviderId) == 0) {
      VAR_4 = VAR_5;
    }
  }


  if (VAR_4 < 0) {
    return VAR_0;
  }



  VAR_6 = VAR_2->poll_peer_sockets[VAR_4];
  if (VAR_6 == 0) {
    VAR_6 = FUNC_2(VAR_2->iocp, VAR_3);
    VAR_2->poll_peer_sockets[VAR_4] = VAR_6;
  }

  return VAR_6;
}
