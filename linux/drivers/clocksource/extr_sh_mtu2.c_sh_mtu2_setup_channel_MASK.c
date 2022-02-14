
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sh_mtu2_device {TYPE_1__* pdev; scalar_t__ mapbase; } ;
struct sh_mtu2_channel {unsigned int index; scalar_t__ base; struct sh_mtu2_device* mtu; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,unsigned int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (int,int ,int,int ,struct sh_mtu2_channel*) ;
 scalar_t__* VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct sh_mtu2_channel*,int ) ;
 int FUNC_5 (char*,char*,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct sh_mtu2_channel *VAR_5, unsigned int VAR_6,
     struct sh_mtu2_device *VAR_7)
{
 char VAR_8[6];
 int VAR_9;
 int VAR_10;

 VAR_5->mtu = VAR_7;

 FUNC_5(VAR_8, "tgi%ua", VAR_6);
 VAR_9 = FUNC_2(VAR_7->pdev, VAR_8);
 if (VAR_9 < 0) {

  return 0;
 }

 VAR_10 = FUNC_3(VAR_9, VAR_4,
     VAR_2 | VAR_0 | VAR_1,
     FUNC_1(&VAR_5->mtu->pdev->dev), VAR_5);
 if (VAR_10) {
  FUNC_0(&VAR_5->mtu->pdev->dev, "ch%u: failed to request irq %d\n",
   VAR_6, VAR_9);
  return VAR_10;
 }

 VAR_5->base = VAR_7->mapbase + VAR_3[VAR_6];
 VAR_5->index = VAR_6;

 return FUNC_4(VAR_5, FUNC_1(&VAR_7->pdev->dev));
}
