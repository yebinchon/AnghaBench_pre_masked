
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct sockaddr_storage {int ss_family; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int raddr ;
struct TYPE_5__ {int listener; int remote_ip; } ;
typedef TYPE_1__ WSClient ;
typedef int GSLList ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,struct sockaddr*,int*) ;
 int VAR_1 ;
 int FUNC_3 (int ,void const*,int ,int ) ;
 int * FUNC_4 (TYPE_1__*) ;
 int * FUNC_5 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_6 () ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 void* FUNC_9 (struct sockaddr*) ;

__attribute__((used)) static int
FUNC_10 (int VAR_2, GSLList ** VAR_3)
{
  WSClient *VAR_4;
  struct sockaddr_storage VAR_5;
  int VAR_6;
  const void *VAR_7 = ((void*)0);
  socklen_t VAR_8;

  VAR_8 = sizeof (VAR_5);
  if ((VAR_6 = FUNC_2 (VAR_2, (struct sockaddr *) &VAR_5, &VAR_8)) == -1)
    FUNC_0 ("Unable to set accept: %s.", FUNC_8 (VAR_1));

  if (VAR_6 == -1) {
    FUNC_1 (("Unable to accept: %s.", FUNC_8 (VAR_1)));
    return VAR_6;
  }
  VAR_7 = FUNC_9 ((struct sockaddr *) &VAR_5);


  VAR_4 = FUNC_6 ();
  VAR_4->listener = VAR_6;
  FUNC_3 (VAR_5.ss_family, VAR_7, VAR_4->remote_ip, VAR_0);


  if (*VAR_3 == ((void*)0))
    *VAR_3 = FUNC_4 (VAR_4);
  else
    *VAR_3 = FUNC_5 (*VAR_3, VAR_4);


  FUNC_7 (VAR_4->listener);

  return VAR_6;
}
