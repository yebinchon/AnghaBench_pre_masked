
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ s_addr; } ;
struct TYPE_6__ {scalar_t__ sin_port; TYPE_4__ sin_addr; int sin_family; } ;
struct udpdevice {int connected; TYPE_2__ sock; } ;
struct sockaddr {int dummy; } ;
struct servent {scalar_t__ s_port; } ;
struct TYPE_7__ {char* full; } ;
struct TYPE_5__ {char* name; } ;
struct physical {int fd; TYPE_3__ name; TYPE_1__ link; } ;


 int VAR_0 ;
 TYPE_4__ FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int,struct sockaddr*,int) ;
 int VAR_8 ;
 int FUNC_4 (struct udpdevice*) ;
 struct servent* FUNC_5 (char*,char*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,char*,char*,...) ;
 struct udpdevice* FUNC_8 (int) ;
 int FUNC_9 (int ,int ,int ) ;
 char* FUNC_10 (int ) ;

__attribute__((used)) static struct udpdevice *
FUNC_11(struct physical *VAR_9, char *VAR_10, char *VAR_11)
{
  struct udpdevice *VAR_12;
  struct servent *VAR_13;

  if ((VAR_12 = FUNC_8(sizeof *VAR_12)) == ((void*)0)) {
    FUNC_7(VAR_4, "%s: Cannot allocate a udp device: %s\n",
               VAR_9->link.name, FUNC_10(VAR_8));
    return ((void*)0);
  }

  VAR_12->sock.sin_family = VAR_0;
  VAR_12->sock.sin_addr = FUNC_0(VAR_10);
  if (VAR_12->sock.sin_addr.s_addr == VAR_1) {
    FUNC_7(VAR_4, "%s: %s: unknown host\n", VAR_9->link.name, VAR_10);
    FUNC_4(VAR_12);
    return ((void*)0);
  }
  VAR_12->sock.sin_port = FUNC_6(FUNC_1(VAR_11));
  if (VAR_12->sock.sin_port == 0) {
    VAR_13 = FUNC_5(VAR_11, "udp");
    if (VAR_13)
      VAR_12->sock.sin_port = VAR_13->s_port;
    else {
      FUNC_7(VAR_4, "%s: %s: unknown service\n", VAR_9->link.name, VAR_11);
      FUNC_4(VAR_12);
      return ((void*)0);
    }
  }

  FUNC_7(VAR_3, "%s: Connecting to %s:%s/udp\n", VAR_9->link.name,
             VAR_10, VAR_11);

  VAR_9->fd = FUNC_9(VAR_5, VAR_6, 0);
  if (VAR_9->fd >= 0) {
    FUNC_7(VAR_2, "%s: Opened udp socket %s\n", VAR_9->link.name,
               VAR_9->name.full);
    if (FUNC_3(VAR_9->fd, (struct sockaddr *)&VAR_12->sock, sizeof VAR_12->sock) == 0) {
      VAR_12->connected = VAR_7;
      return VAR_12;
    } else
      FUNC_7(VAR_4, "%s: connect: %s\n", VAR_9->name.full, FUNC_10(VAR_8));
  } else
    FUNC_7(VAR_4, "%s: socket: %s\n", VAR_9->name.full, FUNC_10(VAR_8));

  FUNC_2(VAR_9->fd);
  VAR_9->fd = -1;
  FUNC_4(VAR_12);

  return ((void*)0);
}
