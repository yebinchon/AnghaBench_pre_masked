
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rcar_du_group {int index; struct rcar_du_device* dev; } ;
struct rcar_du_device {int dpad1_source; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct rcar_du_group*,int ) ;
 int FUNC_1 (struct rcar_du_group*) ;
 int FUNC_2 (struct rcar_du_group*,int ,int) ;
 int FUNC_3 (struct rcar_du_device*) ;

int FUNC_4(struct rcar_du_group *VAR_6)
{
 struct rcar_du_device *VAR_7 = VAR_6->dev;
 u32 VAR_8 = FUNC_0(VAR_6, VAR_0);

 VAR_8 &= ~(VAR_5 | VAR_1 | VAR_4);






 if (VAR_7->dpad1_source == VAR_6->index * 2)
  VAR_8 |= VAR_2;
 else
  VAR_8 |= VAR_5 | VAR_1 | VAR_3;

 FUNC_2(VAR_6, VAR_0, VAR_8);

 FUNC_1(VAR_6);

 return FUNC_3(VAR_6->dev);
}
