
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct rk3066_hdmi {TYPE_1__ connector; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_1, void *VAR_2)
{
 struct rk3066_hdmi *VAR_3 = VAR_2;

 FUNC_0(VAR_3->connector.dev);

 return VAR_0;
}
