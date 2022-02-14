
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct resource {int start; } ;
struct platform_device {int dev; int name; } ;
struct TYPE_4__ {int * parent; } ;
struct TYPE_5__ {int name; TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,int,int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 struct resource* FUNC_4 (struct platform_device*,int ,int ) ;
 int FUNC_5 (struct resource*) ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int ,int,char*,int) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_4)
{
 struct resource *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_4(VAR_4, VAR_1, 0);
 if (!VAR_5)
  return -VAR_0;

 if (!FUNC_2(&VAR_4->dev, VAR_5->start, FUNC_5(VAR_5),
     VAR_4->name)) {
  FUNC_1(&VAR_4->dev, "SMBus region 0x%x already in use!\n",
   VAR_3);
  return -VAR_0;
 }

 VAR_3 = VAR_5->start;

 FUNC_0(&VAR_4->dev, "SMBA = 0x%X\n", VAR_3);


 VAR_2.dev.parent = &VAR_4->dev;

 FUNC_6(VAR_2.name, sizeof(VAR_2.name),
  "SMBus SCH adapter at %04x", VAR_3);

 VAR_6 = FUNC_3(&VAR_2);
 if (VAR_6)
  VAR_3 = 0;

 return VAR_6;
}
