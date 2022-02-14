
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ak8975_data {TYPE_1__* client; int vid; int vdd; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(const struct ak8975_data *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0->vdd);
 if (VAR_1) {
  FUNC_0(&VAR_0->client->dev,
    "Failed to enable specified Vdd supply\n");
  return VAR_1;
 }
 VAR_1 = FUNC_1(VAR_0->vid);
 if (VAR_1) {
  FUNC_0(&VAR_0->client->dev,
    "Failed to enable specified Vid supply\n");
  return VAR_1;
 }





 FUNC_2(500, 1000);
 return 0;
}
