
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tc358764 {int dev; TYPE_1__* supplies; } ;
struct TYPE_3__ {int supply; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int,TYPE_1__*) ;
 int * VAR_0 ;

__attribute__((used)) static int FUNC_3(struct tc358764 *VAR_1)
{
 int VAR_2, VAR_3;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1->supplies); ++VAR_2)
  VAR_1->supplies[VAR_2].supply = VAR_0[VAR_2];

 VAR_3 = FUNC_2(VAR_1->dev, FUNC_0(VAR_1->supplies),
          VAR_1->supplies);
 if (VAR_3 < 0)
  FUNC_1(VAR_1->dev, "failed to get regulators: %d\n", VAR_3);

 return VAR_3;
}
