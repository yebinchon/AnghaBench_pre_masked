
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rmtcallfd_list {int fd; int * xprt; struct rmtcallfd_list* next; } ;
typedef int SVCXPRT ;


 struct rmtcallfd_list* VAR_0 ;

__attribute__((used)) static SVCXPRT *
FUNC_0(int VAR_1)
{
 struct rmtcallfd_list *VAR_2;

 for (VAR_2 = VAR_0; VAR_2 != ((void*)0); VAR_2 = VAR_2->next) {
  if (VAR_1 == VAR_2->fd) {
   return (VAR_2->xprt);
  }
 }
 return (((void*)0));
}
