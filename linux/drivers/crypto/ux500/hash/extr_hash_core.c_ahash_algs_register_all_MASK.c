
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct hash_device_data {int dev; } ;
struct TYPE_7__ {int cra_driver_name; } ;
struct TYPE_8__ {TYPE_1__ base; } ;
struct TYPE_10__ {TYPE_2__ halg; } ;
struct TYPE_9__ {TYPE_4__ hash; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int ,char*,int ) ;
 TYPE_3__* VAR_0 ;

__attribute__((used)) static int FUNC_4(struct hash_device_data *VAR_1)
{
 int VAR_2;
 int VAR_3;
 int VAR_4;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  VAR_2 = FUNC_1(&VAR_0[VAR_3].hash);
  if (VAR_2) {
   VAR_4 = VAR_3;
   FUNC_3(VAR_1->dev, "%s: alg registration failed\n",
    VAR_0[VAR_3].hash.halg.base.cra_driver_name);
   goto unreg;
  }
 }
 return 0;
unreg:
 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
  FUNC_2(&VAR_0[VAR_3].hash);
 return VAR_2;
}
