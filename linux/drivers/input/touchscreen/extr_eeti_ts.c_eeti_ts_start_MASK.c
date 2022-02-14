
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct eeti_ts {int running; int mutex; scalar_t__ attn_gpio; TYPE_1__* client; } ;
struct TYPE_2__ {int irq; } ;


 int FUNC_0 (struct eeti_ts*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct eeti_ts *VAR_0)
{
 FUNC_3(&VAR_0->mutex);

 VAR_0->running = 1;
 FUNC_1(VAR_0->client->irq);






 if (VAR_0->attn_gpio && FUNC_2(VAR_0->attn_gpio))
  FUNC_0(VAR_0);

 FUNC_4(&VAR_0->mutex);
}
