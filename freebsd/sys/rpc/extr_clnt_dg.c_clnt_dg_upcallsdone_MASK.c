
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int so_rcv; } ;
struct cu_socket {scalar_t__ cs_upcallrefs; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__*,int ,int ,char*,int ) ;

__attribute__((used)) static void
FUNC_3(struct socket *VAR_0, struct cu_socket *VAR_1)
{

 FUNC_0(&VAR_0->so_rcv);

 while (VAR_1->cs_upcallrefs > 0)
  (void) FUNC_2(&VAR_1->cs_upcallrefs, FUNC_1(&VAR_0->so_rcv), 0,
      "rpcdgup", 0);
}
