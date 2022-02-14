
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct isl29125_data {int conf1; TYPE_2__* client; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {int mode; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 TYPE_1__* VAR_4 ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct isl29125_data *VAR_5, int VAR_6)
{
 int VAR_7 = 5;
 int VAR_8;

 VAR_8 = FUNC_3(VAR_5->client, VAR_1,
  VAR_5->conf1 | VAR_4[VAR_6].mode);
 if (VAR_8 < 0)
  return VAR_8;

 FUNC_4(101);

 while (VAR_7--) {
  VAR_8 = FUNC_1(VAR_5->client, VAR_2);
  if (VAR_8 < 0)
   goto fail;
  if (VAR_8 & VAR_3)
   break;
  FUNC_4(20);
 }

 if (VAR_7 < 0) {
  FUNC_0(&VAR_5->client->dev, "data not ready\n");
  VAR_8 = -VAR_0;
  goto fail;
 }

 VAR_8 = FUNC_2(VAR_5->client, VAR_4[VAR_6].data);

fail:
 FUNC_3(VAR_5->client, VAR_1, VAR_5->conf1);
 return VAR_8;
}
