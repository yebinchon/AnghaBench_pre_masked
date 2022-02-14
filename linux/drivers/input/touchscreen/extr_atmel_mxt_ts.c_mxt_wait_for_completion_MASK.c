
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mxt_data {TYPE_1__* client; } ;
struct device {int dummy; } ;
struct completion {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 unsigned long FUNC_1 (unsigned int) ;
 long FUNC_2 (struct completion*,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct mxt_data *VAR_1,
       struct completion *VAR_2,
       unsigned int VAR_3)
{
 struct device *VAR_4 = &VAR_1->client->dev;
 unsigned long VAR_5 = FUNC_1(VAR_3);
 long VAR_6;

 VAR_6 = FUNC_2(VAR_2, VAR_5);
 if (VAR_6 < 0) {
  return VAR_6;
 } else if (VAR_6 == 0) {
  FUNC_0(VAR_4, "Wait for completion timed out.\n");
  return -VAR_0;
 }
 return 0;
}
