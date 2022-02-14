
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_un {int sun_path; int sun_family; } ;
struct sockaddr {int dummy; } ;
struct nscd_connection_params {int socket_path; } ;
struct nscd_connection_ {int sockfd; int write_queue; int read_queue; } ;
struct kevent {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kevent*,int,int ,int ,int ,int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 struct nscd_connection_* FUNC_4 (int,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,struct sockaddr*,int) ;
 int FUNC_7 (int,int ,int ) ;
 int FUNC_8 (int,struct kevent*,int,int *,int ,int *) ;
 void* FUNC_9 () ;
 int VAR_7 ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int ,int ,int) ;
 int FUNC_12 (int ) ;

struct nscd_connection_ *
FUNC_13(struct nscd_connection_params const *VAR_8)
{
 struct nscd_connection_ *VAR_9;
 struct kevent VAR_10;
 struct sockaddr_un VAR_11;
 int VAR_12, VAR_13;
 int VAR_14;

 FUNC_1(VAR_7);
 FUNC_3(VAR_8 != ((void*)0));

 VAR_13 = FUNC_10(VAR_5, VAR_6, 0);
 VAR_11.sun_family = VAR_5;
 FUNC_11(VAR_11.sun_path, VAR_8->socket_path,
  sizeof(VAR_11.sun_path));
 VAR_12 = sizeof(VAR_11.sun_family) +
  FUNC_12(VAR_11.sun_path) + 1;

 VAR_14 = FUNC_6(VAR_13, (struct sockaddr *)&VAR_11,
  VAR_12);
 if (VAR_14 == -1) {
  FUNC_5(VAR_13);
  FUNC_2(VAR_7);
  return (((void*)0));
 }
 FUNC_7(VAR_13, VAR_3, VAR_4);

 VAR_9 = FUNC_4(1, sizeof(*VAR_9));
 FUNC_3(VAR_9 != ((void*)0));

 VAR_9->sockfd = VAR_13;

 VAR_9->write_queue = FUNC_9();
 FUNC_3(VAR_9->write_queue != -1);

 FUNC_0(&VAR_10, VAR_9->sockfd, VAR_1, VAR_2,
  0, 0, ((void*)0));
 VAR_14 = FUNC_8(VAR_9->write_queue, &VAR_10, 1, ((void*)0), 0, ((void*)0));

 VAR_9->read_queue = FUNC_9();
 FUNC_3(VAR_9->read_queue != -1);

 FUNC_0(&VAR_10, VAR_9->sockfd, VAR_0, VAR_2,
  0, 0, ((void*)0));
 VAR_14 = FUNC_8(VAR_9->read_queue, &VAR_10, 1, ((void*)0), 0, ((void*)0));

 FUNC_2(VAR_7);
 return (VAR_9);
}
