
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct transport {struct git_transport_data* data; } ;
struct git_transport_data {scalar_t__ conn; int * fd; scalar_t__ got_remote_heads; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct git_transport_data*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct transport *VAR_0)
{
 struct git_transport_data *VAR_1 = VAR_0->data;
 if (VAR_1->conn) {
  if (VAR_1->got_remote_heads)
   FUNC_3(VAR_1->fd[1]);
  FUNC_0(VAR_1->fd[0]);
  FUNC_0(VAR_1->fd[1]);
  FUNC_1(VAR_1->conn);
 }

 FUNC_2(VAR_1);
 return 0;
}
