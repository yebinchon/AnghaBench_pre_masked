
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {scalar_t__ sin_family; TYPE_1__ sin_addr; int sin_port; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,struct sockaddr*,int) ;
 int FUNC_2 (int,struct sockaddr*,int*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct sockaddr_in*,struct sockaddr_in const*,int) ;
 int FUNC_5 (struct sockaddr_in*,int ) ;
 int FUNC_6 (scalar_t__,int ,int ) ;

const char *
FUNC_7(register const struct sockaddr_in *VAR_2,
    register struct sockaddr_in *VAR_3)
{
 const char *VAR_4;
 struct sockaddr_in VAR_5, VAR_6;
 int VAR_7;
 socklen_t VAR_8;

 VAR_7 = FUNC_6(VAR_0, VAR_1, 0);
 if (VAR_7 == -1)
  return ("failed to open DGRAM socket for src addr selection.");

 VAR_4 = ((void*)0);
 VAR_8 = sizeof(struct sockaddr_in);
 FUNC_4(&VAR_5, VAR_2, VAR_8);
 VAR_5.sin_port = FUNC_3(65535);
 if (FUNC_1(VAR_7, (struct sockaddr *)&VAR_5, VAR_8) == -1) {
  VAR_4 = "failed to connect to peer for src addr selection.";
  goto err;
 }

 if (FUNC_2(VAR_7, (struct sockaddr *)&VAR_6, &VAR_8) == -1) {
  VAR_4 = "failed to get socket name for src addr selection.";
  goto err;
 }

 if (VAR_8 != sizeof(struct sockaddr_in) || VAR_6.sin_family != VAR_0) {
  VAR_4 = "unexpected address family in src addr selection.";
  goto err;
 }


 FUNC_5(VAR_3, VAR_6.sin_addr.s_addr);

err:
 (void) FUNC_0(VAR_7);


 return (VAR_4);
}
