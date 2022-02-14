
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;
struct physical {int dl; TYPE_1__ link; int handler; } ;
struct fdescriptor {int dummy; } ;
struct etherdevice {scalar_t__ cs; scalar_t__ connected; } ;
struct bundle {int dummy; } ;
typedef int fd_set ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,int const*) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 struct physical* FUNC_2 (struct fdescriptor*) ;
 struct etherdevice* FUNC_3 (int ) ;
 int FUNC_4 (struct etherdevice*) ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (struct fdescriptor*,struct bundle*,int const*) ;
 scalar_t__ FUNC_7 (struct fdescriptor*,int const*) ;

__attribute__((used)) static void
FUNC_8(struct fdescriptor *VAR_3, struct bundle *VAR_4,
                     const fd_set *VAR_5)
{
  struct physical *VAR_6 = FUNC_2(VAR_3);
  struct etherdevice *VAR_7 = FUNC_3(VAR_6->handler);

  if (VAR_7->cs >= 0 && FUNC_0(VAR_7->cs, VAR_5)) {
    FUNC_4(VAR_7);
    if (VAR_7->connected == VAR_0) {
      FUNC_5(VAR_2, "%s: Device disconnected\n", VAR_6->link.name);
      FUNC_1(VAR_6->dl, VAR_1);
      return;
    }
  }

  if (FUNC_7(VAR_3, VAR_5))
    FUNC_6(VAR_3, VAR_4, VAR_5);
}
