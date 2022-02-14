
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* max_y; void* max_x; } ;
struct hideep_ts {TYPE_2__ prop; TYPE_1__* client; int reg; } ;
typedef int __le16 ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,void*,void*) ;
 void* FUNC_2 (int *) ;
 int FUNC_3 (int ,int,int *,int ) ;

__attribute__((used)) static int FUNC_4(struct hideep_ts *VAR_0)
{
 __le16 VAR_1[2];
 int VAR_2;

 VAR_2 = FUNC_3(VAR_0->reg, 0x28, VAR_1, FUNC_0(VAR_1));
 if (VAR_2)
  return VAR_2;

 VAR_0->prop.max_x = FUNC_2(VAR_1);
 VAR_0->prop.max_y = FUNC_2(VAR_1 + 1);

 FUNC_1(&VAR_0->client->dev, "X: %d, Y: %d",
  VAR_0->prop.max_x, VAR_0->prop.max_y);

 return 0;
}
