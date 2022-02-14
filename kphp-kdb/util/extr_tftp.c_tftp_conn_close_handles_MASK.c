
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ h_idx; } ;
struct TYPE_7__ {TYPE_5__ timer; } ;
struct TYPE_6__ {int fd; int * name; } ;
struct TYPE_8__ {TYPE_2__ resend; int * netascii; int * iobuff; TYPE_1__ file; } ;
typedef TYPE_3__ tftp_connection_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_5__*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_6 (tftp_connection_t *VAR_0) {
  if (VAR_0->file.fd >= 0) {
    FUNC_0 (!FUNC_1 (VAR_0->file.fd));
    VAR_0->file.fd = -1;
  }
  if (VAR_0->file.name) {
    FUNC_5 (VAR_0->file.name, FUNC_4 (VAR_0->file.name) + 1);
    VAR_0->file.name = ((void*)0);
  }
  if (VAR_0->iobuff != ((void*)0)) {
    FUNC_2 (VAR_0->iobuff);
    VAR_0->iobuff = ((void*)0);
  }
  if (VAR_0->netascii) {
    FUNC_2 (VAR_0->netascii);
    VAR_0->netascii = ((void*)0);
  }
  if (VAR_0->resend.timer.h_idx) {
    FUNC_3 (&VAR_0->resend.timer);
  }
}
