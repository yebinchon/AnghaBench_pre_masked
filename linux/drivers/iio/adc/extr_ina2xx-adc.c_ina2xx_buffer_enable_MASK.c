
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct ina2xx_chip_info {unsigned int allow_async_readout; struct task_struct* task; int avg; } ;
struct iio_dev {int id; int name; int dev; scalar_t__* active_scan_mask; } ;


 scalar_t__ FUNC_0 (struct task_struct*) ;
 int FUNC_1 (struct task_struct*) ;
 unsigned int FUNC_2 (struct ina2xx_chip_info*) ;
 int FUNC_3 (int *,char*,unsigned int,...) ;
 int FUNC_4 (struct task_struct*) ;
 struct ina2xx_chip_info* FUNC_5 (struct iio_dev*) ;
 int VAR_0 ;
 struct task_struct* FUNC_6 (int ,void*,char*,int ,int ,unsigned int) ;
 int FUNC_7 (struct task_struct*) ;

__attribute__((used)) static int FUNC_8(struct iio_dev *VAR_1)
{
 struct ina2xx_chip_info *VAR_2 = FUNC_5(VAR_1);
 unsigned int VAR_3 = FUNC_2(VAR_2);
 struct task_struct *VAR_4;

 FUNC_3(&VAR_1->dev, "Enabling buffer w/ scan_mask %02x, freq = %d, avg =%u\n",
  (unsigned int)(*VAR_1->active_scan_mask),
  1000000 / VAR_3, VAR_2->avg);

 FUNC_3(&VAR_1->dev, "Expected work period: %u us\n", VAR_3);
 FUNC_3(&VAR_1->dev, "Async readout mode: %d\n",
  VAR_2->allow_async_readout);

 VAR_4 = FUNC_6(VAR_0, (void *)VAR_1,
         "%s:%d-%uus", VAR_1->name, VAR_1->id,
         VAR_3);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 FUNC_4(VAR_4);
 FUNC_7(VAR_4);
 VAR_2->task = VAR_4;

 return 0;
}
