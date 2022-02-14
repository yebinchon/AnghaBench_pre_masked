
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kevent {int dummy; } ;
struct connection {int conn_fd; int conn_magic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kevent*,int,int ,int ,int ,int ,struct connection*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,int *,int *) ;
 int FUNC_2 (struct connection*,int) ;
 int FUNC_3 (int,char*) ;
 scalar_t__ FUNC_4 (int,int ,int ) ;
 scalar_t__ FUNC_5 (int ,struct kevent*,int,int *,int ,int *) ;
 int VAR_5 ;
 struct connection* FUNC_6 (int) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static struct connection *
FUNC_8(int VAR_6)
{
 struct connection *VAR_7;
 struct kevent VAR_8;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_6, ((void*)0), ((void*)0));
 if (VAR_9 < 0) {
  FUNC_7("accept");
  return (((void*)0));
 }

 if (FUNC_4(VAR_9, VAR_3, VAR_4) < 0)
  FUNC_3(-1, "fcntl");

 VAR_7 = FUNC_6(sizeof(*VAR_7));
 if (VAR_7 == ((void*)0))
  return (((void*)0));
 FUNC_2(VAR_7, sizeof(*VAR_7));
 VAR_7->conn_magic = VAR_0;
 VAR_7->conn_fd = VAR_9;





 FUNC_0(&VAR_8, VAR_9, VAR_1, VAR_2, 0, 0, VAR_7);
 if (FUNC_5(VAR_5, &VAR_8, 1, ((void*)0), 0, ((void*)0)) < 0)
  FUNC_3(-1, "kevent");

 return (VAR_7);
}
