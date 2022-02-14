
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct device {int dummy; } ;
struct adv7511 {scalar_t__ type; unsigned int num_supplies; TYPE_2__* supplies; TYPE_1__* i2c_main; } ;
struct TYPE_6__ {char* supply; } ;
struct TYPE_5__ {struct device dev; } ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (char**) ;
 int VAR_1 ;
 int VAR_2 ;
 char** VAR_3 ;
 char** VAR_4 ;
 TYPE_2__* FUNC_1 (struct device*,unsigned int,int,int ) ;
 int FUNC_2 (struct device*,unsigned int,TYPE_2__*) ;
 int FUNC_3 (unsigned int,TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(struct adv7511 *VAR_5)
{
 struct device *VAR_6 = &VAR_5->i2c_main->dev;
 const char * const *VAR_7;
 unsigned int VAR_8;
 int VAR_9;

 if (VAR_5->type == VAR_0) {
  VAR_7 = VAR_3;
  VAR_5->num_supplies = FUNC_0(VAR_3);
 } else {
  VAR_7 = VAR_4;
  VAR_5->num_supplies = FUNC_0(VAR_4);
 }

 VAR_5->supplies = FUNC_1(VAR_6, VAR_5->num_supplies,
         sizeof(*VAR_5->supplies), VAR_2);
 if (!VAR_5->supplies)
  return -VAR_1;

 for (VAR_8 = 0; VAR_8 < VAR_5->num_supplies; VAR_8++)
  VAR_5->supplies[VAR_8].supply = VAR_7[VAR_8];

 VAR_9 = FUNC_2(VAR_6, VAR_5->num_supplies, VAR_5->supplies);
 if (VAR_9)
  return VAR_9;

 return FUNC_3(VAR_5->num_supplies, VAR_5->supplies);
}
