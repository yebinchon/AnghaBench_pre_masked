
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sh_mtu2_channel {TYPE_2__* mtu; int index; } ;
struct TYPE_4__ {int clk; TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long FUNC_0 (int ) ;
 unsigned long FUNC_1 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned long VAR_11 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct sh_mtu2_channel*,int) ;
 int FUNC_8 (struct sh_mtu2_channel*,int ,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct sh_mtu2_channel *VAR_12)
{
 unsigned long VAR_13;
 unsigned long VAR_14;
 int VAR_15;

 FUNC_6(&VAR_12->mtu->pdev->dev);
 FUNC_5(&VAR_12->mtu->pdev->dev, 1);


 VAR_15 = FUNC_2(VAR_12->mtu->clk);
 if (VAR_15) {
  FUNC_4(&VAR_12->mtu->pdev->dev, "ch%u: cannot enable clock\n",
   VAR_12->index);
  return VAR_15;
 }


 FUNC_7(VAR_12, 0);

 VAR_14 = FUNC_3(VAR_12->mtu->clk) / 64;
 VAR_13 = (VAR_14 + VAR_0/2) / VAR_0;





 FUNC_8(VAR_12, VAR_2, VAR_3 | VAR_4);
 FUNC_8(VAR_12, VAR_8, FUNC_0(VAR_9) |
        FUNC_1(VAR_9));
 FUNC_8(VAR_12, VAR_5, VAR_13);
 FUNC_8(VAR_12, VAR_1, 0);
 FUNC_8(VAR_12, VAR_10, VAR_11);
 FUNC_8(VAR_12, VAR_6, VAR_7);


 FUNC_7(VAR_12, 1);

 return 0;
}
