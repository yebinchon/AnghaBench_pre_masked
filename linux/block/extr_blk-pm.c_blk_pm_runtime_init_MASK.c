
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {struct device* dev; int rpm_status; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,int) ;
 int FUNC_1 (struct device*) ;

void FUNC_2(struct request_queue *VAR_1, struct device *VAR_2)
{
 VAR_1->dev = VAR_2;
 VAR_1->rpm_status = VAR_0;
 FUNC_0(VAR_1->dev, -1);
 FUNC_1(VAR_1->dev);
}
