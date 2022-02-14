
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_9__ {int of_node; } ;
struct platform_device {TYPE_4__ dev; } ;
struct TYPE_7__ {int of_node; TYPE_4__* parent; } ;
struct TYPE_8__ {int nr; int name; TYPE_1__ dev; } ;
struct cpm_i2c {TYPE_2__ adap; struct platform_device* ofdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (struct cpm_i2c*) ;
 int FUNC_2 (struct cpm_i2c*) ;
 TYPE_2__ VAR_2 ;
 int FUNC_3 (TYPE_4__*,char*,int ) ;
 int FUNC_4 (TYPE_4__*,char*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,struct cpm_i2c*) ;
 int FUNC_7 (struct cpm_i2c*) ;
 struct cpm_i2c* FUNC_8 (int,int ) ;
 int * FUNC_9 (int ,char*,int*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct platform_device*,struct cpm_i2c*) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_3)
{
 int VAR_4, VAR_5;
 struct cpm_i2c *VAR_6;
 const u32 *VAR_7;

 VAR_6 = FUNC_8(sizeof(struct cpm_i2c), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->ofdev = VAR_3;

 FUNC_11(VAR_3, VAR_6);

 VAR_6->adap = VAR_2;
 FUNC_6(&VAR_6->adap, VAR_6);
 VAR_6->adap.dev.parent = &VAR_3->dev;
 VAR_6->adap.dev.of_node = FUNC_10(VAR_3->dev.of_node);

 VAR_4 = FUNC_1(VAR_6);
 if (VAR_4) {
  FUNC_4(&VAR_3->dev, "Unable to init hardware\n");
  goto out_free;
 }



 VAR_7 = FUNC_9(VAR_3->dev.of_node, "linux,i2c-index", &VAR_5);
 VAR_6->adap.nr = (VAR_7 && VAR_5 == 4) ? FUNC_0(VAR_7) : -1;
 VAR_4 = FUNC_5(&VAR_6->adap);

 if (VAR_4 < 0)
  goto out_shut;

 FUNC_3(&VAR_3->dev, "hw routines for %s registered.\n",
  VAR_6->adap.name);

 return 0;
out_shut:
 FUNC_2(VAR_6);
out_free:
 FUNC_7(VAR_6);

 return VAR_4;
}
