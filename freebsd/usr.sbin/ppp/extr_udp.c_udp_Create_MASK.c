
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct device {int name; } ;
struct udpdevice {struct device dev; int connected; } ;
struct stat {int st_mode; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
struct TYPE_11__ {scalar_t__ necessity; } ;
struct TYPE_12__ {TYPE_5__ cd; } ;
struct TYPE_8__ {scalar_t__ openmode; } ;
struct TYPE_9__ {TYPE_2__ cfg; } ;
struct TYPE_10__ {TYPE_3__ lcp; int name; } ;
struct TYPE_7__ {char* full; } ;
struct physical {int fd; TYPE_6__ cfg; TYPE_4__ link; TYPE_1__ name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int) ;
 int VAR_12 ;
 int FUNC_1 (int,struct stat*) ;
 scalar_t__ FUNC_2 (int,struct sockaddr*,int*) ;
 int FUNC_3 (int,int ,int ,int*,int*) ;
 int FUNC_4 (int ,char*,...) ;
 struct udpdevice* FUNC_5 (int) ;
 int FUNC_6 (struct device*,int *,int) ;
 int FUNC_7 (struct physical*,int ,int ) ;
 scalar_t__ FUNC_8 (char*,char*) ;
 char* FUNC_9 (char*,char) ;
 int FUNC_10 (int ) ;
 struct udpdevice* FUNC_11 (struct physical*,char*,char*) ;

struct device *
FUNC_12(struct physical *VAR_13)
{
  char *VAR_14, *VAR_15, *VAR_16, *VAR_17;
  struct udpdevice *VAR_18;

  VAR_18 = ((void*)0);
  if (VAR_13->fd < 0) {
    if ((VAR_14 = FUNC_9(VAR_13->name.full, ':')) != ((void*)0) && !FUNC_9(VAR_14 + 1, ':')) {
      *VAR_14 = '\0';
      VAR_15 = VAR_13->name.full;
      VAR_16 = VAR_14 + 1;
      VAR_17 = FUNC_9(VAR_16, '/');
      if (VAR_17 && FUNC_8(VAR_17, "/udp")) {
        *VAR_14 = ':';
        return ((void*)0);
      }
      if (VAR_17) {
        VAR_13->fd--;
        *VAR_17 = '\0';
      }

      if (*VAR_15 && *VAR_16)
        VAR_18 = FUNC_11(VAR_13, VAR_15, VAR_16);

      *VAR_14 = ':';
      if (VAR_17)
        *VAR_17 = '/';
    }
  } else {

    struct stat VAR_19;

    if (FUNC_1(VAR_13->fd, &VAR_19) != -1 && (VAR_19.st_mode & VAR_8)) {
      int VAR_20, VAR_21;

      VAR_21 = sizeof VAR_20;
      if (FUNC_3(VAR_13->fd, VAR_6, VAR_7, &VAR_20, &VAR_21) == -1) {
        FUNC_4(VAR_1, "%s: Link is a closed socket !\n", VAR_13->link.name);
        FUNC_0(VAR_13->fd);
        VAR_13->fd = -1;
        return ((void*)0);
      }

      if (VAR_21 == sizeof VAR_20 && VAR_20 == VAR_5) {
        struct sockaddr_in VAR_22;
        struct sockaddr *VAR_23 = (struct sockaddr *)&VAR_22;

        if ((VAR_18 = FUNC_5(sizeof *VAR_18)) == ((void*)0)) {
          FUNC_4(VAR_2, "%s: Cannot allocate a udp device: %s\n",
                     VAR_13->link.name, FUNC_10(VAR_12));
          return ((void*)0);
        }

        if (FUNC_2(VAR_13->fd, VAR_23, &VAR_21) == 0) {
          FUNC_4(VAR_1, "%s: Link is a connected udp socket\n",
                     VAR_13->link.name);
          VAR_18->connected = VAR_9;
 } else {
          FUNC_4(VAR_1, "%s: Link is a disconnected udp socket\n",
                     VAR_13->link.name);

          VAR_18->connected = VAR_10;

          if (VAR_13->link.lcp.cfg.openmode != VAR_3) {
            FUNC_4(VAR_1, "%s:   Changing openmode to PASSIVE\n",
                       VAR_13->link.name);
            VAR_13->link.lcp.cfg.openmode = VAR_3;
          }
        }
      }
    }
  }

  if (VAR_18) {
    FUNC_6(&VAR_18->dev, &VAR_11, sizeof VAR_18->dev);
    FUNC_7(VAR_13, VAR_18->dev.name, VAR_4);
    if (VAR_13->cfg.cd.necessity != VAR_0)
      FUNC_4(VAR_2, "Carrier settings ignored\n");
    return &VAR_18->dev;
  }

  return ((void*)0);
}
