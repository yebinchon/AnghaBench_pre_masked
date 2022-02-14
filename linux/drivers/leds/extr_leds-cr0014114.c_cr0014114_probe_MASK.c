
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dev; } ;
struct cr0014114 {size_t count; int do_recount; int work; int * dev; scalar_t__ delay; struct spi_device* spi; int lock; void* buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct cr0014114*) ;
 int VAR_5 ;
 int FUNC_2 (struct cr0014114*) ;
 int FUNC_3 (int *,char*,...) ;
 size_t FUNC_4 (int *) ;
 void* FUNC_5 (int *,size_t,int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (struct spi_device*,struct cr0014114*) ;
 size_t FUNC_10 (struct cr0014114*,int ,size_t) ;

__attribute__((used)) static int FUNC_11(struct spi_device *VAR_8)
{
 struct cr0014114 *VAR_9;
 size_t VAR_10;
 int VAR_11;

 VAR_10 = FUNC_4(&VAR_8->dev);
 if (!VAR_10) {
  FUNC_3(&VAR_8->dev, "LEDs are not defined in device tree!");
  return -VAR_2;
 }

 VAR_9 = FUNC_5(&VAR_8->dev, FUNC_10(VAR_9, VAR_7, VAR_10),
       VAR_4);
 if (!VAR_9)
  return -VAR_3;

 VAR_9->buf = FUNC_5(&VAR_8->dev, VAR_10 + 2, VAR_4);
 if (!VAR_9->buf)
  return -VAR_3;

 FUNC_7(&VAR_9->lock);
 FUNC_0(&VAR_9->work, VAR_5);
 VAR_9->count = VAR_10;
 VAR_9->dev = &VAR_8->dev;
 VAR_9->spi = VAR_8;
 VAR_9->delay = VAR_6 -
     FUNC_6(VAR_0);

 VAR_9->do_recount = 1;
 VAR_11 = FUNC_2(VAR_9);
 if (VAR_11) {
  FUNC_3(VAR_9->dev, "first recount failed %d\n", VAR_11);
  return VAR_11;
 }

 VAR_9->do_recount = 1;
 VAR_11 = FUNC_2(VAR_9);
 if (VAR_11) {
  FUNC_3(VAR_9->dev, "second recount failed %d\n", VAR_11);
  return VAR_11;
 }

 VAR_11 = FUNC_1(VAR_9);
 if (VAR_11)
  return VAR_11;


 FUNC_8(&VAR_9->work, VAR_1);

 FUNC_9(VAR_8, VAR_9);

 return 0;
}
