
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int conn_fd; } ;


 int FUNC_0 (struct connection*,int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct connection*) ;

__attribute__((used)) static void
FUNC_3(struct connection *VAR_1)
{

 FUNC_1(VAR_1->conn_fd);
 FUNC_0(VAR_1, sizeof(*VAR_1));
 FUNC_2(VAR_1);
 VAR_0++;
}
