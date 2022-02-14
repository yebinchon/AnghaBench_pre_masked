
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imap_socket {int* fd; scalar_t__ ssl; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ FUNC_0 (scalar_t__,char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,struct imap_socket*,scalar_t__) ;
 scalar_t__ FUNC_3 (int,char*,int) ;

__attribute__((used)) static int FUNC_4(struct imap_socket *VAR_0, char *VAR_1, int VAR_2)
{
 ssize_t VAR_3;

 if (VAR_0->ssl)
  VAR_3 = FUNC_0(VAR_0->ssl, VAR_1, VAR_2);
 else

  VAR_3 = FUNC_3(VAR_0->fd[0], VAR_1, VAR_2);
 if (VAR_3 <= 0) {
  FUNC_2("read", VAR_0, VAR_3);
  FUNC_1(VAR_0->fd[0]);
  FUNC_1(VAR_0->fd[1]);
  VAR_0->fd[0] = VAR_0->fd[1] = -1;
 }
 return VAR_3;
}
