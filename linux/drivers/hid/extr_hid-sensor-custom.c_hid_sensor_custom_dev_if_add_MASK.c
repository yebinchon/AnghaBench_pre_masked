
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * fops; int name; int minor; } ;
struct hid_sensor_custom {int data_fifo; TYPE_2__ custom_dev; TYPE_1__* pdev; int wait; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_5(struct hid_sensor_custom *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_2(&VAR_4->data_fifo, VAR_1,
     VAR_0);
 if (VAR_5)
  return VAR_5;

 FUNC_1(&VAR_4->wait);

 VAR_4->custom_dev.minor = VAR_2;
 VAR_4->custom_dev.name = FUNC_0(&VAR_4->pdev->dev);
 VAR_4->custom_dev.fops = &VAR_3,
 VAR_5 = FUNC_4(&VAR_4->custom_dev);
 if (VAR_5) {
  FUNC_3(&VAR_4->data_fifo);
  return VAR_5;
 }
 return 0;
}
