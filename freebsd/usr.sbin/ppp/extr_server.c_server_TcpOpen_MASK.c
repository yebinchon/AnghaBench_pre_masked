
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u_short ;
typedef void* u_int8_t ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr_in6 {void* sin6_len; void* sin6_port; int sin6_family; } ;
struct TYPE_5__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; void* sin_len; void* sin_port; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct bundle {int dummy; } ;
typedef int off ;
typedef enum server_stat { ____Placeholder_server_stat } server_stat ;
struct TYPE_8__ {scalar_t__ ipv6_available; } ;
struct TYPE_6__ {scalar_t__ port; char* sockname; scalar_t__ mask; } ;
struct TYPE_7__ {int fd; TYPE_2__ cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_0 (int,struct sockaddr*,int) ;
 int FUNC_1 (int) ;
 int VAR_16 ;
 void* FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int,int) ;
 int FUNC_4 (int ,char*,scalar_t__) ;
 int FUNC_5 (struct sockaddr_storage*,char,int) ;
 TYPE_4__ VAR_17 ;
 TYPE_3__ VAR_18 ;
 int FUNC_6 (struct bundle*) ;
 int FUNC_7 (int,int ,int ,...) ;
 int FUNC_8 (int ,int ,int ) ;
 scalar_t__ FUNC_9 (int ) ;

enum server_stat
FUNC_10(struct bundle *VAR_19, u_short VAR_20)
{
  struct sockaddr_storage VAR_21;
  struct sockaddr_in *VAR_22 = (struct sockaddr_in *)&VAR_21;

  struct sockaddr_in6 *VAR_23 = (struct sockaddr_in6 *)&VAR_21;

  int VAR_24, VAR_25;

  if (VAR_18.cfg.port == VAR_20)
    FUNC_6(VAR_19);

  if (VAR_20 == 0)
    return VAR_11;

  FUNC_5(&VAR_21, '\0', sizeof VAR_21);

  if (VAR_17.ipv6_available) {
    VAR_23->sin6_family = VAR_1;
    VAR_23->sin6_port = FUNC_2(VAR_20);
    VAR_23->sin6_len = (u_int8_t)sizeof VAR_21;
    VAR_25 = sizeof *VAR_23;
    VAR_24 = FUNC_8(VAR_9, VAR_13, 0);
  } else

  {
    VAR_22->sin_family = VAR_0;
    VAR_22->sin_port = FUNC_2(VAR_20);
    VAR_22->sin_len = (u_int8_t)sizeof VAR_21;
    VAR_22->sin_addr.s_addr = VAR_2;
    VAR_25 = sizeof *VAR_22;
    VAR_24 = FUNC_8(VAR_8, VAR_13, 0);
  }

  if (VAR_24 < 0) {
    FUNC_4(VAR_5, "Tcp: socket: %s\n", FUNC_9(VAR_16));
    goto failed;
  }


  if (VAR_17.ipv6_available) {
    int VAR_26 = 0;
    FUNC_7(VAR_24, VAR_3, VAR_4, (char *)&VAR_26, sizeof(VAR_26));
  }


  FUNC_7(VAR_24, VAR_14, VAR_15, &VAR_24, sizeof VAR_24);
  if (FUNC_0(VAR_24, (struct sockaddr *)&VAR_21, VAR_25) < 0) {
    FUNC_4(VAR_7, "Tcp: bind: %s\n", FUNC_9(VAR_16));
    FUNC_1(VAR_24);
    goto failed;
  }
  if (FUNC_3(VAR_24, 5) != 0) {
    FUNC_4(VAR_5, "Tcp: Unable to listen to socket: %s\n",
               FUNC_9(VAR_16));
    FUNC_1(VAR_24);
    goto failed;
  }
  FUNC_6(VAR_19);
  VAR_18.fd = VAR_24;
  VAR_18.cfg.port = VAR_20;
  *VAR_18.cfg.sockname = '\0';
  VAR_18.cfg.mask = 0;
  FUNC_4(VAR_6, "Listening at port %d.\n", VAR_20);
  return VAR_12;

failed:
  if (VAR_18.fd == -1) {
    VAR_18.fd = -1;
    VAR_18.cfg.port = VAR_20;
    *VAR_18.cfg.sockname = '\0';
    VAR_18.cfg.mask = 0;
  }
  return VAR_10;
}
