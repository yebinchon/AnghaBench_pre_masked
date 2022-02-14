
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_5__ {int upper2; int lower4; } ;
struct TYPE_6__ {TYPE_1__ bia; } ;
struct TYPE_7__ {TYPE_2__ args; int request; } ;
typedef TYPE_3__ command ;
typedef int amb_dev ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int *,TYPE_3__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(amb_dev *VAR_5, u8 *VAR_6)
{
  u32 VAR_7;
  u16 VAR_8;
  command VAR_9;

  VAR_9.request = FUNC_7 (VAR_3);
  while (FUNC_6 (VAR_5, &VAR_9)) {
    FUNC_9(VAR_4);
    FUNC_8();
  }
  VAR_7 = FUNC_4 (VAR_9.args.bia.lower4);
  VAR_8 = FUNC_4 (VAR_9.args.bia.upper2);
  FUNC_0 (VAR_1, "BIA: lower4: %08x, upper2 %04x", VAR_7, VAR_8);

  if (VAR_6) {
    unsigned int VAR_10;

    FUNC_1 (VAR_0, "ESI:");
    for (VAR_10 = 0; VAR_10 < VAR_2; ++VAR_10) {
      if (VAR_10 < 4)
   VAR_6[VAR_10] = FUNC_5(VAR_7>>(8*VAR_10));
      else
   VAR_6[VAR_10] = FUNC_5(VAR_8>>(8*(VAR_10-4)));
      FUNC_3 (VAR_0, " %02x", VAR_6[VAR_10]);
    }

    FUNC_2 (VAR_0, "");
  }

  return;
}
