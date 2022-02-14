
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ qkey_viol_cntr; } ;
struct rxe_port {int port_lock; TYPE_1__ attr; } ;


 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct rxe_port *VAR_0)
{
 FUNC_1(&VAR_0->port_lock);
 VAR_0->attr.qkey_viol_cntr = FUNC_0((u32)0xffff,
     VAR_0->attr.qkey_viol_cntr + 1);
 FUNC_2(&VAR_0->port_lock);
}
