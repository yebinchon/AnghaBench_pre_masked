
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int iProtocol; int iSocketType; int iAddressFamily; } ;
typedef TYPE_1__ WSAPROTOCOL_INFOW ;
typedef int ULONG_PTR ;
typedef scalar_t__ SOCKET ;
typedef int HANDLE ;


 int * FUNC_0 (int ,int ,int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ,TYPE_1__*,int ,int ) ;
 int VAR_2 ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static SOCKET FUNC_4(HANDLE VAR_3,
    WSAPROTOCOL_INFOW* VAR_4) {
  SOCKET VAR_5 = 0;

  VAR_5 = FUNC_2(VAR_4->iAddressFamily,
                    VAR_4->iSocketType,
                    VAR_4->iProtocol,
                    VAR_4,
                    0,
                    VAR_2);
  if (VAR_5 == VAR_1) {
    return VAR_1;
  }

  if (!FUNC_1((HANDLE) VAR_5, VAR_0, 0)) {
    goto error;
  };

  if (FUNC_0((HANDLE) VAR_5,
                             VAR_3,
                             (ULONG_PTR) VAR_5,
                             0) == ((void*)0)) {
    goto error;
  }

  return VAR_5;

 error:
  FUNC_3(VAR_5);
  return VAR_1;
}
