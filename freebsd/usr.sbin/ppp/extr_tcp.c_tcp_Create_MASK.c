
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct stat {int st_mode; } ;
struct sockaddr_in {scalar_t__ sin_family; int sin_port; int sin_addr; } ;
struct sockaddr {int dummy; } ;
struct TYPE_7__ {scalar_t__ necessity; } ;
struct TYPE_8__ {TYPE_3__ cd; } ;
struct TYPE_6__ {char* full; char* base; } ;
struct TYPE_5__ {int name; } ;
struct physical {int fd; TYPE_4__ cfg; TYPE_2__ name; TYPE_1__ link; } ;
struct device {int name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,struct stat*) ;
 scalar_t__ FUNC_2 (int,struct sockaddr*,int*) ;
 int FUNC_3 (int,int ,int ,int*,int*) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct physical*,int ,int ) ;
 int FUNC_8 (char*,int,char*,char*,int) ;
 scalar_t__ FUNC_9 (char*,char*) ;
 char* FUNC_10 (char*,char) ;
 int FUNC_11 (int ,char*,char*) ;
 struct device VAR_10 ;

struct device *
FUNC_12(struct physical *VAR_11)
{
  char *VAR_12, *VAR_13, *VAR_14, *VAR_15;

  if (VAR_11->fd < 0) {
    if ((VAR_12 = FUNC_10(VAR_11->name.full, ':')) != ((void*)0) && !FUNC_10(VAR_12 + 1, ':')) {
      *VAR_12 = '\0';
      VAR_13 = VAR_11->name.full;
      VAR_14 = VAR_12 + 1;
      VAR_15 = FUNC_10(VAR_14, '/');
      if (VAR_15 && FUNC_9(VAR_15, "/tcp")) {
        *VAR_12 = ':';
        return 0;
      }
      if (VAR_15) {
        VAR_11->fd--;
        *VAR_15 = '\0';
      }
      if (*VAR_13 && *VAR_14) {
        VAR_11->fd = FUNC_11(VAR_11->link.name, VAR_13, VAR_14);
        *VAR_12 = ':';
        if (VAR_15)
          *VAR_15 = '/';
        if (VAR_11->fd >= 0)
          FUNC_5(VAR_2, "%s: Opened tcp socket %s\n", VAR_11->link.name,
                     VAR_11->name.full);
      } else {
        if (VAR_15)
          *VAR_15 = '/';
        *VAR_12 = ':';
      }
    }
  }

  if (VAR_11->fd >= 0) {

    struct stat VAR_16;

    if (FUNC_1(VAR_11->fd, &VAR_16) != -1 && (VAR_16.st_mode & VAR_9)) {
      int VAR_17, VAR_18;

      VAR_18 = sizeof VAR_17;
      if (FUNC_3(VAR_11->fd, VAR_7, VAR_8, &VAR_17, &VAR_18) == -1) {
        FUNC_5(VAR_3, "%s: Link is a closed socket !\n", VAR_11->link.name);
        FUNC_0(VAR_11->fd);
        VAR_11->fd = -1;
        return ((void*)0);
      }

      if (VAR_18 == sizeof VAR_17 && VAR_17 == VAR_6) {
        struct sockaddr_in VAR_19;
        struct sockaddr *VAR_20 = (struct sockaddr *)&VAR_19;

        if (*VAR_11->name.full == '\0') {
          VAR_18 = sizeof VAR_19;
          if (FUNC_2(VAR_11->fd, VAR_20, &VAR_18) != 0 ||
              VAR_18 != sizeof(struct sockaddr_in) || VAR_19.sin_family != VAR_0) {
            FUNC_5(VAR_2, "%s: Link is SOCK_STREAM, but not inet\n",
                       VAR_11->link.name);
            return ((void*)0);
          }

          FUNC_5(VAR_3, "%s: Link is a tcp socket\n", VAR_11->link.name);

          FUNC_8(VAR_11->name.full, sizeof VAR_11->name.full, "%s:%d/tcp",
                   FUNC_4(VAR_19.sin_addr), FUNC_6(VAR_19.sin_port));
          VAR_11->name.base = VAR_11->name.full;
        }
        FUNC_7(VAR_11, VAR_10.name, VAR_5);
        if (VAR_11->cfg.cd.necessity != VAR_1)
          FUNC_5(VAR_4, "Carrier settings ignored\n");
        return &VAR_10;
      }
    }
  }

  return ((void*)0);
}
