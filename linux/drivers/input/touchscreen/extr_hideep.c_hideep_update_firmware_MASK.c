
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hideep_ts {TYPE_1__* client; } ;
typedef int __be32 ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (struct hideep_ts*) ;
 int FUNC_4 (struct hideep_ts*,int const*,size_t) ;
 int FUNC_5 (struct hideep_ts*) ;

__attribute__((used)) static int FUNC_6(struct hideep_ts *VAR_0,
      const __be32 *VAR_1, size_t VAR_2)
{
 int VAR_3, VAR_4;

 FUNC_1(&VAR_0->client->dev, "starting firmware update");


 VAR_3 = FUNC_3(VAR_0);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_4(VAR_0, VAR_1, VAR_2);
 if (VAR_3)
  FUNC_2(&VAR_0->client->dev,
   "firmware update failed: %d\n", VAR_3);
 else
  FUNC_1(&VAR_0->client->dev, "firmware updated successfully\n");

 FUNC_0(1000);

 VAR_4 = FUNC_5(VAR_0);
 if (VAR_4)
  FUNC_2(&VAR_0->client->dev,
   "failed to load dwz after firmware update: %d\n",
   VAR_4);

 return VAR_3 ?: VAR_4;
}
