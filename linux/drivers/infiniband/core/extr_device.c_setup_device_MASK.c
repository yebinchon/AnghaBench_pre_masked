
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_udata {int inlen; int outlen; } ;
struct TYPE_2__ {int (* query_device ) (struct ib_device*,int *,struct ib_udata*) ;} ;
struct ib_device {int dev; int attrs; TYPE_1__ ops; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct ib_device*) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (struct ib_device*) ;
 int FUNC_4 (struct ib_device*) ;
 int FUNC_5 (struct ib_device*,int *,struct ib_udata*) ;

__attribute__((used)) static int FUNC_6(struct ib_device *VAR_0)
{
 struct ib_udata VAR_1 = {.outlen = 0, .inlen = 0};
 int VAR_2;

 FUNC_3(VAR_0);
 FUNC_1(VAR_0);

 VAR_2 = FUNC_4(VAR_0);
 if (VAR_2) {
  FUNC_0(&VAR_0->dev, "Couldn't create per-port data\n");
  return VAR_2;
 }

 FUNC_2(&VAR_0->attrs, 0, sizeof(VAR_0->attrs));
 VAR_2 = VAR_0->ops.query_device(VAR_0, &VAR_0->attrs, &VAR_1);
 if (VAR_2) {
  FUNC_0(&VAR_0->dev,
    "Couldn't query the device attributes\n");
  return VAR_2;
 }

 return 0;
}
