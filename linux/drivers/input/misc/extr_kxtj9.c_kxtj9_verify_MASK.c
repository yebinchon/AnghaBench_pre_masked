
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kxtj9_data {TYPE_1__* client; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (struct kxtj9_data*) ;
 int FUNC_3 (struct kxtj9_data*) ;

__attribute__((used)) static int FUNC_4(struct kxtj9_data *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_3 = FUNC_1(VAR_2->client, VAR_1);
 if (VAR_3 < 0) {
  FUNC_0(&VAR_2->client->dev, "read err int source\n");
  goto out;
 }

 VAR_3 = (VAR_3 != 0x07 && VAR_3 != 0x08) ? -VAR_0 : 0;

out:
 FUNC_2(VAR_2);
 return VAR_3;
}
