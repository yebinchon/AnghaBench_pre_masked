
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct sgp_version {scalar_t__ major; scalar_t__ minor; } ;
struct sgp_data {TYPE_1__* client; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ FUNC_0 (struct sgp_version*) ;
 int VAR_0 ;


 scalar_t__ FUNC_1 (struct sgp_data*) ;
 scalar_t__ FUNC_2 (struct sgp_data*) ;
 scalar_t__ FUNC_3 (struct sgp_data*) ;
 scalar_t__ FUNC_4 (struct sgp_data*) ;
 scalar_t__ FUNC_5 (struct sgp_data*) ;
 scalar_t__ FUNC_6 (struct sgp_data*) ;
 int FUNC_7 (int *,char*,scalar_t__,...) ;
 int FUNC_8 (int *,char*) ;
 struct sgp_version* VAR_1 ;
 struct sgp_version* VAR_2 ;

__attribute__((used)) static int FUNC_9(struct sgp_data *VAR_3,
       unsigned int VAR_4)
{
 const struct sgp_version *VAR_5;
 u16 VAR_6, VAR_7;
 u16 VAR_8, VAR_9, VAR_10, VAR_11;


 VAR_9 = FUNC_2(VAR_3);
 if (VAR_9 != 0) {
  FUNC_7(&VAR_3->client->dev,
   "incompatible product generation %d != 0", VAR_9);
  return -VAR_0;
 }

 VAR_8 = FUNC_5(VAR_3);
 if (VAR_8 != VAR_4) {
  FUNC_7(&VAR_3->client->dev,
   "sensor reports a different product: 0x%04hx\n",
   VAR_8);
  return -VAR_0;
 }

 if (FUNC_6(VAR_3))
  FUNC_8(&VAR_3->client->dev, "reserved bit is set\n");


 if (FUNC_1(VAR_3))
  return -VAR_0;

 switch (VAR_8) {
 case 129:
  VAR_5 = VAR_1;
  VAR_7 = FUNC_0(VAR_1);
  break;
 case 128:
  VAR_5 = VAR_2;
  VAR_7 = FUNC_0(VAR_2);
  break;
 default:
  return -VAR_0;
 }

 VAR_10 = FUNC_3(VAR_3);
 VAR_11 = FUNC_4(VAR_3);
 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  if (VAR_10 == VAR_5[VAR_6].major &&
      VAR_11 >= VAR_5[VAR_6].minor)
   return 0;
 }
 FUNC_7(&VAR_3->client->dev, "unsupported sgp version: %d.%d\n",
  VAR_10, VAR_11);

 return -VAR_0;
}
