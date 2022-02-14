
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct cdn_dp_port {int extcon; } ;
struct cdn_dp_device {size_t active_port; size_t ports; int dev; struct cdn_dp_port** port; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int FUNC_1 (struct cdn_dp_device*,scalar_t__*) ;
 int FUNC_2 (int ,int ) ;
 unsigned long VAR_2 ;
 unsigned long FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static bool FUNC_6(struct cdn_dp_device *VAR_3)
{
 unsigned long VAR_4 = VAR_2 + FUNC_3(VAR_0);
 struct cdn_dp_port *VAR_5;
 u8 VAR_6 = 0;

 if (VAR_3->active_port < 0 || VAR_3->active_port >= VAR_3->ports) {
  FUNC_0(VAR_3->dev, "active_port is wrong!\n");
  return 0;
 }

 VAR_5 = VAR_3->port[VAR_3->active_port];







 while (FUNC_4(VAR_2, VAR_4)) {
  if (!FUNC_2(VAR_5->extcon, VAR_1))
   return 0;

  if (!FUNC_1(VAR_3, &VAR_6))
   return VAR_6 ? 1 : 0;

  FUNC_5(5000, 10000);
 }

 FUNC_0(VAR_3->dev, "Get sink capability timed out\n");
 return 0;
}
