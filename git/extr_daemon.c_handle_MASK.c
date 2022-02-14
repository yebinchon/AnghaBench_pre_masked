
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_port; int sin6_addr; } ;
struct sockaddr_in {int sin_port; int sin_addr; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct child_process {int in; int out; int argv; int env_array; } ;
typedef int socklen_t ;
typedef int buf ;
struct TYPE_2__ {int argv; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct child_process VAR_2 ;
 int FUNC_0 (struct child_process*,struct sockaddr*,int ) ;
 int FUNC_1 (int *,char*,char*) ;
 int FUNC_2 () ;
 TYPE_1__ VAR_3 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (scalar_t__,int *,char*,int) ;
 int FUNC_6 () ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (char*) ;
 scalar_t__ VAR_5 ;
 char* FUNC_8 (int ) ;
 int FUNC_9 (int) ;
 scalar_t__ FUNC_10 (struct child_process*) ;

__attribute__((used)) static void FUNC_11(int VAR_6, struct sockaddr *VAR_7, socklen_t VAR_8)
{
 struct child_process VAR_9 = VAR_2;

 if (VAR_5 && VAR_4 >= VAR_5) {
  FUNC_6();
  FUNC_9(1);
  FUNC_2();
  if (VAR_4 >= VAR_5) {
   FUNC_3(VAR_6);
   FUNC_7("Too many children, dropping connection");
   return;
  }
 }

 if (VAR_7->sa_family == VAR_0) {
  char VAR_10[128] = "";
  struct sockaddr_in *VAR_11 = (void *) VAR_7;
  FUNC_5(VAR_7->sa_family, &VAR_11->sin_addr, VAR_10, sizeof(VAR_10));
  FUNC_1(&VAR_9.env_array, "REMOTE_ADDR=%s", VAR_10);
  FUNC_1(&VAR_9.env_array, "REMOTE_PORT=%d",
     FUNC_8(VAR_11->sin_port));

 } else if (VAR_7->sa_family == VAR_1) {
  char VAR_12[128] = "";
  struct sockaddr_in6 *VAR_13 = (void *) VAR_7;
  FUNC_5(VAR_1, &VAR_13->sin6_addr, VAR_12, sizeof(VAR_12));
  FUNC_1(&VAR_9.env_array, "REMOTE_ADDR=[%s]", VAR_12);
  FUNC_1(&VAR_9.env_array, "REMOTE_PORT=%d",
     FUNC_8(VAR_13->sin6_port));

 }

 VAR_9.argv = VAR_3.argv;
 VAR_9.in = VAR_6;
 VAR_9.out = FUNC_4(VAR_6);

 if (FUNC_10(&VAR_9))
  FUNC_7("unable to fork");
 else
  FUNC_0(&VAR_9, VAR_7, VAR_8);
}
