
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hideep_ts {TYPE_1__* client; } ;
typedef int __be32 ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int ,int ,int) ;
 int FUNC_2 (struct hideep_ts*,int ,int *,int) ;

__attribute__((used)) static int FUNC_3(struct hideep_ts *VAR_0, u32 VAR_1, u32 VAR_2)
{
 __be32 VAR_3 = FUNC_0(VAR_2);
 int VAR_4;

 VAR_4 = FUNC_2(VAR_0, VAR_1, &VAR_3, 1);
 if (VAR_4) {
  FUNC_1(&VAR_0->client->dev,
   "write to register %#08x (%#08x) failed: %d\n",
   VAR_1, VAR_2, VAR_4);
  return VAR_4;
 }

 return 0;
}
