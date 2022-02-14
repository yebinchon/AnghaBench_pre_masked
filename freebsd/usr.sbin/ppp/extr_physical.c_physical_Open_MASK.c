
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {char* full; } ;
struct TYPE_6__ {int name; } ;
struct TYPE_5__ {char* devlist; int ndev; } ;
struct physical {int fd; scalar_t__ type; TYPE_3__ name; TYPE_2__ link; int * handler; TYPE_1__ cfg; } ;
struct TYPE_8__ {int * (* create ) (struct physical*) ;} ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 TYPE_4__* VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ,char*,int ,...) ;
 int FUNC_3 (struct physical*) ;
 scalar_t__ FUNC_4 (struct physical*) ;
 int FUNC_5 (struct physical*,char*) ;
 int FUNC_6 (struct physical*,char*,int ) ;
 int FUNC_7 (struct physical*) ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (char*) ;
 int * FUNC_10 (struct physical*) ;
 int * FUNC_11 (struct physical*) ;

int
FUNC_12(struct physical *VAR_11)
{
  char *VAR_12;
  int VAR_13, VAR_14, VAR_15;
  unsigned VAR_16;

  if (VAR_11->fd >= 0)
    FUNC_2(VAR_0, "%s: Open: Modem is already open!\n", VAR_11->link.name);

  else if (VAR_11->type == VAR_6) {
    FUNC_5(VAR_11, "");
    VAR_11->fd = VAR_7;
    for (VAR_16 = 0; VAR_16 < VAR_2 && VAR_11->handler == ((void*)0) && VAR_11->fd >= 0; VAR_16++)
      VAR_11->handler = (*VAR_9[VAR_16].create)(VAR_11);
    FUNC_1(VAR_8);
    if (VAR_11->fd >= 0) {
      if (VAR_11->handler == ((void*)0)) {
        FUNC_6(VAR_11, "unknown", VAR_5);
        FUNC_2(VAR_0, "%s: stdin is unidentified\n", VAR_11->link.name);
      }
      FUNC_3(VAR_11);
    }
  } else {
    VAR_12 = VAR_11->cfg.devlist;
    VAR_13 = 0;
    while (VAR_13 < VAR_11->cfg.ndev && VAR_11->fd < 0) {
      FUNC_5(VAR_11, VAR_12);
      if (FUNC_4(VAR_11)) {
        VAR_15 = 0;

        if (*VAR_11->name.full == '/') {
          VAR_11->fd = FUNC_0(VAR_11->name.full, VAR_4 | VAR_3);
          if (VAR_11->fd < 0)
            VAR_15 = VAR_10;
        }

        VAR_14 = VAR_11->fd;
        for (VAR_16 = 0; VAR_16 < VAR_2 && VAR_11->handler == ((void*)0); VAR_16++)
          if ((VAR_11->handler = (*VAR_9[VAR_16].create)(VAR_11)) == ((void*)0) && VAR_14 != VAR_11->fd)
            break;

        if (VAR_11->fd < 0) {
          if (VAR_16 == VAR_2) {
            if (VAR_15)
       FUNC_2(VAR_1, "%s: %s: %s\n", VAR_11->link.name, VAR_11->name.full,
                         FUNC_8(VAR_10));
            else
       FUNC_2(VAR_1, "%s: Device (%s) must begin with a '/',"
                         " a '!' or contain at least one ':'\n", VAR_11->link.name,
                         VAR_11->name.full);
          }
          FUNC_7(VAR_11);
        } else
          FUNC_3(VAR_11);
      }
      VAR_12 += FUNC_9(VAR_12) + 1;
      VAR_13++;
    }
  }

  return VAR_11->fd;
}
