
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mip4_ts {TYPE_1__* client; } ;
struct TYPE_2__ {int irq; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct mip4_ts*) ;

__attribute__((used)) static int FUNC_2(struct mip4_ts *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1)
  return VAR_1;

 FUNC_0(VAR_0->client->irq);

 return 0;
}
