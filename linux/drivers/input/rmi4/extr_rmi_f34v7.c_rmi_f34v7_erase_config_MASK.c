
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int config_area; int cmd_done; } ;
struct f34_data {TYPE_2__ v7; TYPE_1__* fn; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct f34_data*,int ) ;
 int FUNC_3 (struct f34_data*,int ) ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



__attribute__((used)) static int FUNC_4(struct f34_data *VAR_4)
{
 int VAR_5;

 FUNC_0(&VAR_4->fn->dev, "Erasing config...\n");

 FUNC_1(&VAR_4->v7.cmd_done);

 switch (VAR_4->v7.config_area) {
 case 128:
  VAR_5 = FUNC_3(VAR_4, VAR_3);
  if (VAR_5 < 0)
   return VAR_5;
  break;
 case 129:
  VAR_5 = FUNC_3(VAR_4, VAR_2);
  if (VAR_5 < 0)
   return VAR_5;
  break;
 case 130:
  VAR_5 = FUNC_3(VAR_4, VAR_1);
  if (VAR_5 < 0)
   return VAR_5;
  break;
 }

 VAR_5 = FUNC_2(VAR_4, VAR_0);
 if (VAR_5 < 0)
  return VAR_5;

 return 0;
}
