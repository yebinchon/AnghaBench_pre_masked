
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr_storage {int dummy; } ;
struct sockaddr_in6 {int sin6_port; } ;
struct sockaddr_in {int sin_port; } ;
struct sockaddr {scalar_t__ sa_len; int sa_family; } ;
struct TYPE_3__ {int sockname; } ;
struct server {scalar_t__ fd; TYPE_1__ cfg; } ;
struct TYPE_4__ {char* type; char* from; } ;
struct prompt {int desc; struct prompt* next; TYPE_2__ src; } ;
struct ncpaddr {int dummy; } ;
struct fdescriptor {int dummy; } ;
struct bundle {int dummy; } ;
typedef int fd_set ;





 scalar_t__ FUNC_0 (scalar_t__,int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__,struct sockaddr*,int*) ;
 int FUNC_2 (int) ;
 struct server* FUNC_3 (struct fdescriptor*) ;
 scalar_t__ FUNC_4 (int *,int const*) ;
 int FUNC_5 (int *,struct bundle*,int const*) ;
 int VAR_3 ;
 int FUNC_6 (int ,char*,...) ;
 struct prompt* FUNC_7 () ;
 scalar_t__ VAR_4 ;
 char* FUNC_8 (struct ncpaddr*) ;
 int FUNC_9 (struct ncpaddr*,struct sockaddr*) ;
 int FUNC_10 (int ) ;
 struct prompt* FUNC_11 (struct server*,struct bundle*,int) ;
 int FUNC_12 (struct prompt*) ;
 int FUNC_13 (struct prompt*) ;
 int FUNC_14 (char*,int,char*,char*,int) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (char*,int ,int) ;
 int FUNC_17 (int,char*,int) ;

__attribute__((used)) static void
FUNC_18(struct fdescriptor *VAR_5, struct bundle *VAR_6, const fd_set *VAR_7)
{
  struct server *VAR_8 = FUNC_3(VAR_5);
  struct sockaddr_storage VAR_9;
  struct sockaddr *VAR_10 = (struct sockaddr *)&VAR_9;
  struct sockaddr_in *VAR_11 = (struct sockaddr_in *)&VAR_9;

  struct sockaddr_in6 *VAR_12 = (struct sockaddr_in6 *)&VAR_9;

  int VAR_13 = sizeof VAR_9, VAR_14;
  struct prompt *VAR_15;
  struct ncpaddr VAR_16;

  if (VAR_8->fd >= 0 && FUNC_0(VAR_8->fd, VAR_7)) {
    VAR_14 = FUNC_1(VAR_8->fd, VAR_10, &VAR_13);
    if (VAR_14 < 0)
      FUNC_6(VAR_1, "server_Read: accept(): %s\n", FUNC_15(VAR_3));
    else if (VAR_10->sa_len == 0) {
      FUNC_2(VAR_14);
      VAR_14 = -1;
    }
  } else
    VAR_14 = -1;

  if (VAR_14 >= 0)
    switch (VAR_10->sa_family) {
      case 128:
        FUNC_6(VAR_2, "Connected to local client.\n");
        break;

      case 130:
        FUNC_9(&VAR_16, VAR_10);
        if (FUNC_10(VAR_11->sin_port) < 1024) {
          FUNC_6(VAR_0, "Rejected client connection from %s:%u"
                    "(invalid port number) !\n",
                    FUNC_8(&VAR_16), FUNC_10(VAR_11->sin_port));
          FUNC_2(VAR_14);
          VAR_14 = -1;
          break;
        }
        FUNC_6(VAR_2, "Connected to client from %s:%u\n",
                  FUNC_8(&VAR_16), FUNC_10(VAR_11->sin_port));
        break;


      case 129:
        FUNC_9(&VAR_16, VAR_10);
        if (FUNC_10(VAR_12->sin6_port) < 1024) {
          FUNC_6(VAR_0, "Rejected client connection from %s:%u"
                    "(invalid port number) !\n",
                    FUNC_8(&VAR_16), FUNC_10(VAR_12->sin6_port));
          FUNC_2(VAR_14);
          VAR_14 = -1;
          break;
        }
        FUNC_6(VAR_2, "Connected to client from %s:%u\n",
                  FUNC_8(&VAR_16), FUNC_10(VAR_12->sin6_port));
        break;


      default:
        FUNC_17(VAR_14, "Unrecognised access !\n", 22);
        FUNC_2(VAR_14);
        VAR_14 = -1;
        break;
    }

  if (VAR_14 >= 0) {
    if ((VAR_15 = FUNC_11(VAR_8, VAR_6, VAR_14)) == ((void*)0)) {
      FUNC_17(VAR_14, "Connection refused.\n", 20);
      FUNC_2(VAR_14);
    } else {
      switch (VAR_10->sa_family) {
        case 128:
          VAR_15->src.type = "local";
          FUNC_16(VAR_15->src.from, VAR_8->cfg.sockname, sizeof VAR_15->src.from - 1);
          VAR_15->src.from[sizeof VAR_15->src.from - 1] = '\0';
          break;
        case 130:
          VAR_15->src.type = "ip";
          FUNC_14(VAR_15->src.from, sizeof VAR_15->src.from, "%s:%u",
                   FUNC_8(&VAR_16), FUNC_10(VAR_11->sin_port));
          break;

        case 129:
          VAR_15->src.type = "ip6";
          FUNC_14(VAR_15->src.from, sizeof VAR_15->src.from, "%s:%u",
                   FUNC_8(&VAR_16), FUNC_10(VAR_12->sin6_port));
          break;

      }
      FUNC_13(VAR_15);
      FUNC_12(VAR_15);
    }
  }

  VAR_4 = 0;
  for (VAR_15 = FUNC_7(); VAR_15; VAR_15 = VAR_15->next)
    if (FUNC_4(&VAR_15->desc, VAR_7)) {
      FUNC_5(&VAR_15->desc, VAR_6, VAR_7);
      if (VAR_4)
        break;
    }
}
