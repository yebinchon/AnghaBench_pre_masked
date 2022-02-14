
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sec_queue {int task_irq; int name; struct sec_dev_info* dev_info; } ;
struct sec_dev_info {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ,int ,int ,int ,struct sec_queue*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct sec_queue *VAR_3)
{
 struct sec_dev_info *VAR_4 = VAR_3->dev_info;
 int VAR_5 = VAR_3->task_irq;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_5, VAR_2, VAR_1,
       VAR_0, VAR_3->name, VAR_3);
 if (VAR_6) {
  FUNC_0(VAR_4->dev, "request irq(%d) failed %d\n", VAR_5, VAR_6);
  return VAR_6;
 }
 FUNC_1(VAR_5);

 return 0;
}
