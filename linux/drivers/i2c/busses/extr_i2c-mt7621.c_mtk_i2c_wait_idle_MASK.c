
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtk_i2c {int dev; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (scalar_t__,int,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct mtk_i2c *VAR_3)
{
 int VAR_4;
 u32 VAR_5;

 VAR_4 = FUNC_1(VAR_3->base + VAR_0,
      VAR_5, !(VAR_5 & VAR_1),
      10, VAR_2 * 1000);
 if (VAR_4)
  FUNC_0(VAR_3->dev, "idle err(%d)\n", VAR_4);

 return VAR_4;
}
