
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ct_data {scalar_t__ ct_upcallrefs; TYPE_1__* ct_socket; } ;
struct TYPE_2__ {int so_rcv; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__*,int ,int ,char*,int ) ;

__attribute__((used)) static void
FUNC_3(struct ct_data *VAR_0)
{

 FUNC_0(&VAR_0->ct_socket->so_rcv);

 while (VAR_0->ct_upcallrefs > 0)
  (void) FUNC_2(&VAR_0->ct_upcallrefs,
      FUNC_1(&VAR_0->ct_socket->so_rcv), 0, "rpcvcup", 0);
}
