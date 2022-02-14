
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pm80x_onkey_info {TYPE_2__* idev; int map; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int parent; } ;
struct TYPE_5__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (TYPE_2__*,int ,unsigned int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int ,unsigned int*) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_5, void *VAR_6)
{
 struct pm80x_onkey_info *VAR_7 = VAR_6;
 int VAR_8 = 0;
 unsigned int VAR_9;

 VAR_8 = FUNC_3(VAR_7->map, VAR_4, &VAR_9);
 if (VAR_8 < 0) {
  FUNC_0(VAR_7->idev->dev.parent, "failed to read status: %d\n", VAR_8);
  return VAR_1;
 }
 VAR_9 &= VAR_3;

 FUNC_1(VAR_7->idev, VAR_2, VAR_9);
 FUNC_2(VAR_7->idev);

 return VAR_0;
}
