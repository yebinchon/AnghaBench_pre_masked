
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct spi_device {int bits_per_word; int dev; TYPE_2__* master; int mode; } ;
struct psxpad {int phys; struct spi_device* spi; struct input_polled_dev* pdev; } ;
struct input_polled_dev {int poll_interval; int poll_interval_min; int poll_interval_max; struct input_dev* input; int poll; int close; int open; struct psxpad* private; } ;
struct TYPE_3__ {int bustype; } ;
struct input_dev {char* name; TYPE_1__ id; } ;
struct TYPE_4__ {int min_speed_hz; int max_speed_hz; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_0 (int *,char*,...) ;
 char* FUNC_1 (int *) ;
 struct psxpad* FUNC_2 (int *,int,int ) ;
 struct input_polled_dev* FUNC_3 () ;
 int FUNC_4 (struct input_polled_dev*) ;
 int FUNC_5 (struct input_dev*,int ,int ,int,int ,int ) ;
 int FUNC_6 (struct input_dev*,int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct psxpad*,int ,int ) ;
 int FUNC_9 (struct psxpad*) ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_10 (int ,int,char*,char*) ;
 int FUNC_11 (struct spi_device*) ;

__attribute__((used)) static int FUNC_12(struct spi_device *VAR_28)
{
 struct psxpad *VAR_29;
 struct input_polled_dev *VAR_30;
 struct input_dev *VAR_31;
 int VAR_32;

 VAR_29 = FUNC_2(&VAR_28->dev, sizeof(struct psxpad), VAR_23);
 if (!VAR_29)
  return -VAR_21;

 VAR_30 = FUNC_3();
 if (!VAR_30) {
  FUNC_0(&VAR_28->dev, "failed to allocate input device\n");
  return -VAR_21;
 }


 VAR_29->pdev = VAR_30;
 VAR_29->spi = VAR_28;

 VAR_30->private = VAR_29;
 VAR_30->open = VAR_27;
 VAR_30->close = VAR_26;
 VAR_30->poll = VAR_25;

 VAR_30->poll_interval = 16;
 VAR_30->poll_interval_min = 8;
 VAR_30->poll_interval_max = 32;


 VAR_31 = VAR_30->input;
 VAR_31->name = "PlayStation 1/2 joypad";
 FUNC_10(VAR_29->phys, sizeof(VAR_29->phys), "%s/input", FUNC_1(&VAR_28->dev));
 VAR_31->id.bustype = VAR_20;


 FUNC_5(VAR_31, VAR_2, 0, 255, 0, 0);
 FUNC_5(VAR_31, VAR_3, 0, 255, 0, 0);
 FUNC_5(VAR_31, VAR_0, 0, 255, 0, 0);
 FUNC_5(VAR_31, VAR_1, 0, 255, 0, 0);
 FUNC_6(VAR_31, VAR_22, VAR_9);
 FUNC_6(VAR_31, VAR_22, VAR_6);
 FUNC_6(VAR_31, VAR_22, VAR_7);
 FUNC_6(VAR_31, VAR_22, VAR_8);
 FUNC_6(VAR_31, VAR_22, VAR_4);
 FUNC_6(VAR_31, VAR_22, VAR_5);
 FUNC_6(VAR_31, VAR_22, VAR_18);
 FUNC_6(VAR_31, VAR_22, VAR_19);
 FUNC_6(VAR_31, VAR_22, VAR_14);
 FUNC_6(VAR_31, VAR_22, VAR_16);
 FUNC_6(VAR_31, VAR_22, VAR_15);
 FUNC_6(VAR_31, VAR_22, VAR_17);
 FUNC_6(VAR_31, VAR_22, VAR_12);
 FUNC_6(VAR_31, VAR_22, VAR_13);
 FUNC_6(VAR_31, VAR_22, VAR_10);
 FUNC_6(VAR_31, VAR_22, VAR_11);

 VAR_32 = FUNC_9(VAR_29);
 if (VAR_32)
  return VAR_32;


 VAR_28->mode = VAR_24;
 VAR_28->bits_per_word = 8;

 VAR_28->master->min_speed_hz = 125000;
 VAR_28->master->max_speed_hz = 125000;
 FUNC_11(VAR_28);


 FUNC_8(VAR_29, 0, 0);


 VAR_32 = FUNC_4(VAR_30);
 if (VAR_32) {
  FUNC_0(&VAR_28->dev,
   "failed to register input poll device: %d\n", VAR_32);
  return VAR_32;
 }

 FUNC_7(&VAR_28->dev);

 return 0;
}
