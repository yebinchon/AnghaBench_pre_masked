
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct sockaddr {int dummy; } ;
struct TYPE_4__ {int class; int len; scalar_t__ address; } ;
struct peerid {char* authname; TYPE_1__ enddisc; } ;
struct TYPE_5__ {int sun_len; int sun_path; int sun_family; } ;
struct mpserver {int fd; TYPE_2__ socket; } ;
typedef int mode_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int,TYPE_2__*) ;
 scalar_t__ FUNC_1 (int,TYPE_2__*) ;
 int FUNC_2 (int ,int ,int ) ;
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
 char* VAR_13 ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_14 ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (struct mpserver*) ;
 int FUNC_6 (int,int ,int ,struct sockaddr*,int) ;
 int FUNC_7 (int ,int,char*,...) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int) ;

int
FUNC_10(struct mpserver *VAR_15, struct peerid *VAR_16)
{
  int VAR_17, VAR_18;
  mode_t VAR_19;

  if (VAR_15->fd != -1) {
    FUNC_4(VAR_3, "Internal error !  mpserver already open\n");
    FUNC_5(VAR_15);
  }

  VAR_18 = FUNC_7(VAR_15->socket.sun_path, sizeof VAR_15->socket.sun_path, "%sppp-%s-%02x-",
               VAR_13, VAR_16->authname, VAR_16->enddisc.class);
  if (VAR_18 < 0) {
    FUNC_4(VAR_4, "mpserver: snprintf(): %s\n", FUNC_8(VAR_14));
    return VAR_7;
  }

  for (VAR_17 = 0;
       VAR_17 < VAR_16->enddisc.len && (size_t)VAR_18 < sizeof VAR_15->socket.sun_path - 2;
       VAR_17++) {
    FUNC_7(VAR_15->socket.sun_path + VAR_18, sizeof VAR_15->socket.sun_path - VAR_18,
             "%02x", *(u_char *)(VAR_16->enddisc.address+VAR_17));
    VAR_18 += 2;
  }

  VAR_15->socket.sun_family = VAR_0;
  VAR_15->socket.sun_len = sizeof VAR_15->socket;
  VAR_15->fd = FUNC_2(VAR_9, VAR_10, 0);
  if (VAR_15->fd < 0) {
    FUNC_4(VAR_4, "mpserver: socket(): %s\n", FUNC_8(VAR_14));
    return VAR_7;
  }

  FUNC_6(VAR_15->fd, VAR_11, VAR_12, (struct sockaddr *)&VAR_15->socket,
             sizeof VAR_15->socket);
  VAR_19 = FUNC_9(0177);






  if (FUNC_0(VAR_15->fd, &VAR_15->socket) < 0) {
    if (VAR_14 != VAR_1) {
      FUNC_4(VAR_5, "mpserver: can't create bundle socket %s (%s)\n",
                VAR_15->socket.sun_path, FUNC_8(VAR_14));
      FUNC_9(VAR_19);
      FUNC_3(VAR_15->fd);
      VAR_15->fd = -1;
      return VAR_7;
    }


    FUNC_9(VAR_19);
    if (FUNC_1(VAR_15->fd, &VAR_15->socket) < 0) {
      FUNC_4(VAR_5, "mpserver: can't connect to bundle socket %s (%s)\n",
                VAR_15->socket.sun_path, FUNC_8(VAR_14));
      if (VAR_14 == VAR_2)
        FUNC_4(VAR_5, "          The previous server died badly !\n");
      FUNC_3(VAR_15->fd);
      VAR_15->fd = -1;
      return VAR_7;
    }


    return VAR_6;
  }

  return VAR_8;
}
