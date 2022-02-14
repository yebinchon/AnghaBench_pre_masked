
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kxcjk1013_data {TYPE_1__* client; } ;
typedef enum kxcjk1013_mode { ____Placeholder_kxcjk1013_mode } kxcjk1013_mode ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_2(struct kxcjk1013_data *VAR_4,
         enum kxcjk1013_mode *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_1(VAR_4->client, VAR_0);
 if (VAR_6 < 0) {
  FUNC_0(&VAR_4->client->dev, "Error reading reg_ctrl1\n");
  return VAR_6;
 }

 if (VAR_6 & VAR_1)
  *VAR_5 = VAR_2;
 else
  *VAR_5 = VAR_3;

 return 0;
}
