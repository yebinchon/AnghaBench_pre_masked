
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int cmd_done; } ;
struct f34_data {TYPE_2__ v7; TYPE_1__* fn; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct f34_data*,int ) ;
 int FUNC_3 (struct f34_data*,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(struct f34_data *VAR_2)
{
 int VAR_3;

 FUNC_0(&VAR_2->fn->dev, "Erasing guest code...\n");

 FUNC_1(&VAR_2->v7.cmd_done);

 VAR_3 = FUNC_3(VAR_2, VAR_1);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_3 = FUNC_2(VAR_2, VAR_0);
 if (VAR_3 < 0)
  return VAR_3;

 return 0;
}
