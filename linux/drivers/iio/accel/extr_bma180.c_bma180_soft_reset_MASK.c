
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bma180_data {TYPE_2__* client; TYPE_1__* part_info; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int softreset_reg; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct bma180_data *VAR_1)
{
 int VAR_2 = FUNC_1(VAR_1->client,
  VAR_1->part_info->softreset_reg, VAR_0);

 if (VAR_2)
  FUNC_0(&VAR_1->client->dev, "failed to reset the chip\n");

 return VAR_2;
}
