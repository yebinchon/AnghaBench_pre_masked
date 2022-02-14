
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int sun_path; int sun_family; } ;
struct sockaddr_un {int sun_path; int sun_family; } ;
struct sockaddr {int dummy; } ;
struct runtime_env {int queue; int sockfd; } ;
struct kevent {int dummy; } ;
struct configuration {int force_unlink; int socket_mode; int socket_path; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kevent*,int ,int ,int,int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_1 (char*,char*,int ) ;
 int FUNC_2 (char*,char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct runtime_env* (*) (struct configuration*)) ;
 int FUNC_4 (struct runtime_env* (*) (struct configuration*)) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,struct sockaddr*,int) ;
 struct runtime_env* FUNC_7 (int,int) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (struct runtime_env*) ;
 int FUNC_12 (int,struct kevent*,int,int *,int ,struct timespec*) ;
 int FUNC_13 () ;
 int FUNC_14 (int ,int) ;
 int FUNC_15 (struct timespec*,int ,int) ;
 int FUNC_16 (int ,int ,int ) ;
 int FUNC_17 (int ,int ,int) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;

__attribute__((used)) static struct runtime_env *
FUNC_20(struct configuration *VAR_7)
{
 int VAR_8;
 struct sockaddr_un VAR_9;

 struct kevent VAR_10;
 struct timespec VAR_11;

 struct runtime_env *VAR_12;

 FUNC_3(FUNC_20);
 VAR_12 = FUNC_7(1, sizeof(*VAR_12));
 FUNC_5(VAR_12 != ((void*)0));

 VAR_12->sockfd = FUNC_16(VAR_5, VAR_6, 0);

 if (VAR_7->force_unlink == 1)
  FUNC_19(VAR_7->socket_path);

 FUNC_15(&VAR_9, 0, sizeof(struct sockaddr_un));
 VAR_9.sun_family = VAR_5;
 FUNC_17(VAR_9.sun_path, VAR_7->socket_path,
  sizeof(VAR_9.sun_path));
 VAR_8 = sizeof(VAR_9.sun_family) +
  FUNC_18(VAR_9.sun_path) + 1;

 if (FUNC_6(VAR_12->sockfd, (struct sockaddr *)&VAR_9,
  VAR_8) == -1) {
  FUNC_9(VAR_12->sockfd);
  FUNC_11(VAR_12);

  FUNC_1("runtime environment", "can't bind socket to path: "
   "%s", VAR_7->socket_path);
  FUNC_4(FUNC_20);
  return (((void*)0));
 }
 FUNC_2("runtime environment", "using socket %s",
  VAR_7->socket_path);





 FUNC_8(VAR_7->socket_path, VAR_7->socket_mode);
 FUNC_14(VAR_12->sockfd, -1);
 FUNC_10(VAR_12->sockfd, VAR_3, VAR_4);

 VAR_12->queue = FUNC_13();
 FUNC_5(VAR_12->queue != -1);

 FUNC_0(&VAR_10, VAR_12->sockfd, VAR_0, VAR_1 | VAR_2,
  0, 0, 0);
 FUNC_15(&VAR_11, 0, sizeof(struct timespec));
 FUNC_12(VAR_12->queue, &VAR_10, 1, ((void*)0), 0, &VAR_11);

 FUNC_2("runtime environment", "successfully initialized");
 FUNC_4(FUNC_20);
 return (VAR_12);
}
