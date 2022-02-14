
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct TYPE_2__ {int fifo; scalar_t__ dev; int region_size; int ioport1; int irq; int input_fifo; int input_jog_dev; int input_key_dev; int input_work; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ,int ) ;
 TYPE_1__ VAR_0 ;
 int FUNC_8 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_9 (int ) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_4)
{
 FUNC_8();

 FUNC_9(VAR_0.irq);
 FUNC_0(&VAR_0.input_work);

 if (VAR_3) {
  FUNC_2(VAR_0.input_key_dev);
  FUNC_2(VAR_0.input_jog_dev);
  FUNC_3(&VAR_0.input_fifo);
 }

 FUNC_4(&VAR_2);

 FUNC_1(VAR_0.irq, VAR_1);
 FUNC_7(VAR_0.ioport1, VAR_0.region_size);

 if (VAR_0.dev) {
  FUNC_6(VAR_0.dev);
  FUNC_5(VAR_0.dev);
 }

 FUNC_3(&VAR_0.fifo);

 return 0;
}
