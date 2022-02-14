
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wake_irq {int irq; struct wake_irq* name; int status; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,int,struct wake_irq*) ;
 int FUNC_2 (int,struct wake_irq*) ;
 int VAR_7 ;
 int FUNC_3 (int,int ) ;
 struct wake_irq* FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (struct wake_irq*) ;
 struct wake_irq* FUNC_6 (int,int ) ;
 int FUNC_7 (int,int *,int ,int ,struct wake_irq*,struct wake_irq*) ;

int FUNC_8(struct device *VAR_8, int VAR_9)
{
 struct wake_irq *VAR_10;
 int VAR_11;

 if (VAR_9 < 0)
  return -VAR_0;

 VAR_10 = FUNC_6(sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return -VAR_1;

 VAR_10->name = FUNC_4(VAR_2, "%s:wakeup", FUNC_0(VAR_8));
 if (!VAR_10->name) {
  VAR_11 = -VAR_1;
  goto err_free;
 }

 VAR_10->dev = VAR_8;
 VAR_10->irq = VAR_9;
 FUNC_3(VAR_9, VAR_5);


 FUNC_3(VAR_9, VAR_4);





 VAR_11 = FUNC_7(VAR_9, ((void*)0), VAR_7,
       VAR_3, VAR_10->name, VAR_10);
 if (VAR_11)
  goto err_free_name;

 VAR_11 = FUNC_1(VAR_8, VAR_9, VAR_10);
 if (VAR_11)
  goto err_free_irq;

 VAR_10->status = VAR_6;

 return VAR_11;

err_free_irq:
 FUNC_2(VAR_9, VAR_10);
err_free_name:
 FUNC_5(VAR_10->name);
err_free:
 FUNC_5(VAR_10);

 return VAR_11;
}
