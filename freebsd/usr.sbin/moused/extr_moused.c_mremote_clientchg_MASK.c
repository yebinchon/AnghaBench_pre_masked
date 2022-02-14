
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_un {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int ad ;
struct TYPE_2__ {scalar_t__ rtype; int mremcfd; int mremsfd; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,struct sockaddr*,int*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void
FUNC_4(int VAR_2)
{
    struct sockaddr_un VAR_3;
    socklen_t VAR_4;
    int VAR_5;

    if (VAR_1.rtype != VAR_0)
 return;

    if (VAR_2) {

 VAR_4 = sizeof(VAR_3);
 VAR_5 = FUNC_0(VAR_1.mremsfd, (struct sockaddr *) &VAR_3, &VAR_4);
 if (VAR_5 < 0)
     FUNC_3("failed accept on mouse remote socket");

 if (VAR_1.mremcfd < 0) {
     VAR_1.mremcfd = VAR_5;
     FUNC_2("remote client connect...accepted");
 }
 else {
     FUNC_1(VAR_5);
     FUNC_2("another remote client connect...disconnected");
 }
    }
    else {

 FUNC_2("remote client disconnected");
 FUNC_1(VAR_1.mremcfd);
 VAR_1.mremcfd = -1;
    }
}
