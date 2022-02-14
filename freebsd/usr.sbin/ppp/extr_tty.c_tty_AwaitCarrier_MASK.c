
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ state; } ;
struct TYPE_4__ {scalar_t__ necessity; } ;
struct TYPE_5__ {TYPE_1__ cd; } ;
struct ttydevice {int mbits; scalar_t__ carrier_seconds; TYPE_3__ Timer; TYPE_2__ dev; } ;
struct physical {int handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct ttydevice*) ;
 scalar_t__ VAR_4 ;
 struct ttydevice* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct physical*) ;
 int FUNC_3 (struct physical*) ;

__attribute__((used)) static int
FUNC_4(struct physical *VAR_5)
{
  struct ttydevice *VAR_6 = FUNC_1(VAR_5->handler);

  if (VAR_6->dev.cd.necessity == VAR_3 || FUNC_2(VAR_5))
    return VAR_1;

  if (VAR_6->mbits == -1) {
    if (VAR_6->Timer.state == VAR_4) {
      VAR_6->carrier_seconds = 0;
      FUNC_3(VAR_5);
    }
    return VAR_2;
  }

  return FUNC_0(VAR_6) ? VAR_1 : VAR_0;
}
