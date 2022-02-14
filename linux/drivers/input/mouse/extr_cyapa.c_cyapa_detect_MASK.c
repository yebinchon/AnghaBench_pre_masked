
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct cyapa {TYPE_1__* client; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cyapa*) ;
 scalar_t__ FUNC_1 (struct cyapa*) ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (struct device*,char*) ;

__attribute__((used)) static int FUNC_4(struct cyapa *VAR_2)
{
 struct device *VAR_3 = &VAR_2->client->dev;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2);
 if (VAR_4) {
  if (VAR_4 != -VAR_1 && VAR_4 != -VAR_0 &&
   FUNC_1(VAR_2)) {
   FUNC_3(VAR_3, "device detected but not operational\n");
   return 0;
  }

  FUNC_2(VAR_3, "no device detected: %d\n", VAR_4);
  return VAR_4;
 }

 return 0;
}
