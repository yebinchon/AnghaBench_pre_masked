
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ti_sn_bridge {TYPE_1__* supplies; int dev; } ;
struct TYPE_2__ {char* supply; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,unsigned int,TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(struct ti_sn_bridge *VAR_1)
{
 unsigned int VAR_2;
 const char * const VAR_3[] = {
  "vcca", "vcc", "vccio", "vpll",
 };

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  VAR_1->supplies[VAR_2].supply = VAR_3[VAR_2];

 return FUNC_0(VAR_1->dev, VAR_0,
           VAR_1->supplies);
}
