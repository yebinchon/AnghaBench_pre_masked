
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int buttons; } ;
struct mousedev {scalar_t__ touch; scalar_t__ frac_dy; scalar_t__ frac_dx; scalar_t__ pkt_count; TYPE_1__ packet; } ;


 int FUNC_0 (int ,int *) ;
 scalar_t__ VAR_0 ;
 struct mousedev* VAR_1 ;
 int FUNC_1 (struct mousedev*,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct mousedev *VAR_3, int VAR_4)
{
 if (!VAR_4) {
  if (VAR_3->touch &&
      FUNC_4(VAR_0,
    VAR_3->touch + FUNC_2(VAR_2))) {





   FUNC_3(0, &VAR_3->packet.buttons);
   FUNC_3(0, &VAR_1->packet.buttons);
   FUNC_1(VAR_3, &VAR_1->packet);
   FUNC_1(VAR_1,
      &VAR_1->packet);
   FUNC_0(0, &VAR_3->packet.buttons);
   FUNC_0(0, &VAR_1->packet.buttons);
  }
  VAR_3->touch = VAR_3->pkt_count = 0;
  VAR_3->frac_dx = 0;
  VAR_3->frac_dy = 0;

 } else if (!VAR_3->touch)
  VAR_3->touch = VAR_0;
}
