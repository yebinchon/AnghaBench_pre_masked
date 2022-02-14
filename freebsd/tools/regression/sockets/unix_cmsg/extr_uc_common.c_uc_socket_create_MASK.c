
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tv ;
struct timeval {scalar_t__ tv_usec; int tv_sec; } ;
struct sockaddr {int dummy; } ;
struct TYPE_3__ {int sun_path; int sun_len; } ;
struct TYPE_4__ {scalar_t__ sock_type; int serv_sock_fd; TYPE_1__ serv_addr_sun; scalar_t__ server_flag; int sock_type_str; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int,struct sockaddr*,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int,int ,int) ;
 scalar_t__ FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (int,int ,int ,struct timeval*,int) ;
 int FUNC_5 (int ,scalar_t__,int ) ;
 TYPE_2__ VAR_10 ;
 int FUNC_6 (char*,...) ;
 scalar_t__ FUNC_7 (int ) ;

int
FUNC_8(void)
{
 struct timeval VAR_11;
 int VAR_12;

 VAR_12 = FUNC_5(VAR_4, VAR_10.sock_type, 0);
 if (VAR_12 < 0) {
  FUNC_6("socket_create: socket(PF_LOCAL, %s, 0)", VAR_10.sock_type_str);
  return (-1);
 }
 if (VAR_10.server_flag)
  VAR_10.serv_sock_fd = VAR_12;

 VAR_11.tv_sec = VAR_9;
 VAR_11.tv_usec = 0;
 if (FUNC_4(VAR_12, VAR_6, VAR_7, &VAR_11, sizeof(VAR_11)) < 0 ||
     FUNC_4(VAR_12, VAR_6, VAR_8, &VAR_11, sizeof(VAR_11)) < 0) {
  FUNC_6("socket_create: setsockopt(SO_RCVTIMEO/SO_SNDTIMEO)");
  goto failed;
 }

 if (VAR_10.server_flag) {
  if (FUNC_0(VAR_12, (struct sockaddr *)&VAR_10.serv_addr_sun,
      VAR_10.serv_addr_sun.sun_len) < 0) {
   FUNC_6("socket_create: bind(%s)",
       VAR_10.serv_addr_sun.sun_path);
   goto failed;
  }
  if (VAR_10.sock_type == VAR_5) {
   int VAR_13;

   if (FUNC_3(VAR_12, VAR_2) < 0) {
    FUNC_6("socket_create: listen");
    goto failed;
   }
   VAR_13 = FUNC_2(VAR_12, VAR_0, 0);
   if (VAR_13 < 0) {
    FUNC_6("socket_create: fcntl(F_GETFL)");
    goto failed;
   }
   if (FUNC_2(VAR_12, VAR_1, VAR_13 | VAR_3) < 0) {
    FUNC_6("socket_create: fcntl(F_SETFL)");
    goto failed;
   }
  }
 }

 return (VAR_12);

failed:
 if (FUNC_1(VAR_12) < 0)
  FUNC_6("socket_create: close");
 if (VAR_10.server_flag)
  if (FUNC_7(VAR_10.serv_addr_sun.sun_path) < 0)
   FUNC_6("socket_close: unlink(%s)",
       VAR_10.serv_addr_sun.sun_path);
 return (-1);
}
