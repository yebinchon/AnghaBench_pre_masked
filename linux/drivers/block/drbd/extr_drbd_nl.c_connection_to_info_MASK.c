
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drbd_connection {int cstate; } ;
struct connection_info {int conn_role; int conn_connection_state; } ;


 int FUNC_0 (struct drbd_connection*) ;

__attribute__((used)) static void FUNC_1(struct connection_info *VAR_0,
          struct drbd_connection *VAR_1)
{
 VAR_0->conn_connection_state = VAR_1->cstate;
 VAR_0->conn_role = FUNC_0(VAR_1);
}
