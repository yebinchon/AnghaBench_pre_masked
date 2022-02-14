
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ace_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ace_device*) ;
 int FUNC_1 (struct ace_device*,int ) ;
 int FUNC_2 (struct ace_device*,int ) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int FUNC_4(struct ace_device *VAR_6)
{
 u32 VAR_7 = FUNC_2(VAR_6, VAR_2);
 u16 VAR_8 = FUNC_1(VAR_6, VAR_0);


 if ((VAR_7 & (VAR_4 | VAR_3)) &&
     (VAR_8 & VAR_1)) {
  FUNC_3(VAR_6->dev, "transfer failure\n");
  FUNC_0(VAR_6);
  return -VAR_5;
 }

 return 0;
}
