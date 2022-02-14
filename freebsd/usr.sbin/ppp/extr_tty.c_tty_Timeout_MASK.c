
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_15__ {int load; } ;
struct TYPE_12__ {scalar_t__ delay; scalar_t__ necessity; } ;
struct TYPE_13__ {TYPE_4__ cd; } ;
struct ttydevice {int mbits; scalar_t__ carrier_seconds; TYPE_7__ Timer; TYPE_5__ dev; } ;
struct TYPE_14__ {int name; } ;
struct TYPE_11__ {char* full; } ;
struct TYPE_9__ {scalar_t__ necessity; } ;
struct TYPE_10__ {TYPE_1__ cd; } ;
struct physical {scalar_t__ fd; TYPE_6__ link; int dl; TYPE_3__ name; TYPE_2__ cfg; int handler; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct ttydevice*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int ) ;
 struct ttydevice* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (scalar_t__,int ,int*) ;
 int FUNC_4 (int ,char*,int ,...) ;
 int FUNC_5 (TYPE_7__*) ;
 int FUNC_6 (TYPE_7__*) ;

__attribute__((used)) static void
FUNC_7(void *VAR_9)
{
  struct physical *VAR_10 = VAR_9;
  struct ttydevice *VAR_11 = FUNC_2(VAR_10->handler);
  int VAR_12, VAR_13;

  FUNC_6(&VAR_11->Timer);
  VAR_11->Timer.load = VAR_6;
  FUNC_5(&VAR_11->Timer);
  VAR_12 = VAR_11->mbits;

  if (VAR_10->fd >= 0) {
    if (FUNC_3(VAR_10->fd, VAR_7, &VAR_11->mbits) < 0) {

      if (VAR_10->cfg.cd.necessity != VAR_0)
        FUNC_4(VAR_5, "%s: Carrier ioctl not supported, "
                   "using ``set cd off''\n", VAR_10->link.name);
      FUNC_6(&VAR_11->Timer);
      VAR_11->mbits = VAR_8;
      return;
    }
  } else
    VAR_11->mbits = 0;

  if (VAR_12 == -1) {

    if (FUNC_0(VAR_11))
      FUNC_4(VAR_4, "%s: %s: CD detected\n", VAR_10->link.name, VAR_10->name.full);
    else if (++VAR_11->carrier_seconds >= VAR_11->dev.cd.delay) {
      if (VAR_11->dev.cd.necessity == VAR_1)
        FUNC_4(VAR_4, "%s: %s: Required CD not detected\n",
                   VAR_10->link.name, VAR_10->name.full);
      else {
        FUNC_4(VAR_4, "%s: %s doesn't support CD\n",
                   VAR_10->link.name, VAR_10->name.full);
        VAR_11->mbits = VAR_8;
      }
      FUNC_6(&VAR_11->Timer);

    } else {

      FUNC_4(VAR_3, "%s: %s: Still no carrier (%d/%d)\n",
                 VAR_10->link.name, VAR_10->name.full, VAR_11->carrier_seconds,
                 VAR_11->dev.cd.delay);
      VAR_11->mbits = -1;
    }
  } else {
    VAR_13 = VAR_12 ^ VAR_11->mbits;
    if (VAR_13 & VAR_8) {
      if (VAR_11->mbits & VAR_8)
        FUNC_4(VAR_3, "%s: offline -> online\n", VAR_10->link.name);
      else {
        FUNC_4(VAR_3, "%s: online -> offline\n", VAR_10->link.name);
        FUNC_4(VAR_4, "%s: Carrier lost\n", VAR_10->link.name);
        FUNC_1(VAR_10->dl, VAR_2);
        FUNC_6(&VAR_11->Timer);
      }
    } else
      FUNC_4(VAR_3, "%s: Still %sline\n", VAR_10->link.name,
                 FUNC_0(VAR_11) ? "on" : "off");
  }
}
