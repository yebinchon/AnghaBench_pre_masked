
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct resource {int flags; scalar_t__ start; } ;
struct TYPE_14__ {struct device_node* of_node; } ;
struct platform_device {TYPE_4__ dev; int name; int id; } ;
struct TYPE_11__ {struct device_node* of_node; TYPE_4__* parent; } ;
struct TYPE_13__ {int timeout; TYPE_1__ dev; TYPE_2__* algo_data; int name; int owner; int nr; } ;
struct TYPE_12__ {int i2c_clock; int read_byte; int write_byte; int reset_chip; int wait_for_completion; struct i2c_pca_pf_data* data; } ;
struct i2c_pca_pf_data {int irq; TYPE_3__ adap; TYPE_2__ algo_data; scalar_t__ gpio; int io_size; scalar_t__ io_base; int wait; scalar_t__ reg_base; } ;
struct i2c_pca9564_pf_platform_data {int i2c_clock_speed; int timeout; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_7 ;
 struct i2c_pca9564_pf_platform_data* FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,char*) ;
 int FUNC_4 (TYPE_4__*,char*,int*) ;
 scalar_t__ FUNC_5 (TYPE_4__*,char*,int ) ;
 scalar_t__ FUNC_6 (TYPE_4__*,struct resource*) ;
 struct i2c_pca_pf_data* FUNC_7 (TYPE_4__*,int,int ) ;
 int FUNC_8 (TYPE_4__*,int,int ,int ,int ,struct i2c_pca_pf_data*) ;
 int FUNC_9 (TYPE_3__*) ;
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
 int FUNC_10 (int *) ;
 int FUNC_11 (struct platform_device*,int ) ;
 struct resource* FUNC_12 (struct platform_device*,int ,int ) ;
 int FUNC_13 (struct platform_device*,struct i2c_pca_pf_data*) ;
 int FUNC_14 (struct resource*) ;
 int FUNC_15 (int ,int,char*,unsigned long) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_18)
{
 struct i2c_pca_pf_data *VAR_19;
 struct resource *VAR_20;
 struct i2c_pca9564_pf_platform_data *VAR_21 =
    FUNC_2(&VAR_18->dev);
 struct device_node *VAR_22 = VAR_18->dev.of_node;
 int VAR_23 = 0;
 int VAR_24;

 VAR_24 = FUNC_11(VAR_18, 0);

 if (VAR_24 < 0)
  VAR_24 = 0;

 VAR_19 = FUNC_7(&VAR_18->dev, sizeof(*VAR_19), VAR_1);
 if (!VAR_19)
  return -VAR_0;

 VAR_20 = FUNC_12(VAR_18, VAR_4, 0);
 VAR_19->reg_base = FUNC_6(&VAR_18->dev, VAR_20);
 if (FUNC_0(VAR_19->reg_base))
  return FUNC_1(VAR_19->reg_base);


 FUNC_10(&VAR_19->wait);

 VAR_19->io_base = VAR_20->start;
 VAR_19->io_size = FUNC_14(VAR_20);
 VAR_19->irq = VAR_24;

 VAR_19->adap.nr = VAR_18->id;
 VAR_19->adap.owner = VAR_7;
 FUNC_15(VAR_19->adap.name, sizeof(VAR_19->adap.name),
   "PCA9564/PCA9665 at 0x%08lx",
   (unsigned long) VAR_20->start);
 VAR_19->adap.algo_data = &VAR_19->algo_data;
 VAR_19->adap.dev.parent = &VAR_18->dev;
 VAR_19->adap.dev.of_node = VAR_22;

 VAR_19->gpio = FUNC_5(&VAR_18->dev, "reset", VAR_2);
 if (FUNC_0(VAR_19->gpio))
  return FUNC_1(VAR_19->gpio);

 VAR_19->adap.timeout = VAR_3;
 VAR_23 = FUNC_4(&VAR_18->dev, "clock-frequency",
           &VAR_19->algo_data.i2c_clock);
 if (VAR_23)
  VAR_19->algo_data.i2c_clock = 59000;

 if (VAR_21) {
  VAR_19->adap.timeout = VAR_21->timeout;
  VAR_19->algo_data.i2c_clock = VAR_21->i2c_clock_speed;
 }

 VAR_19->algo_data.data = VAR_19;
 VAR_19->algo_data.wait_for_completion = VAR_14;
 if (VAR_19->gpio)
  VAR_19->algo_data.reset_chip = VAR_13;
 else
  VAR_19->algo_data.reset_chip = VAR_8;

 switch (VAR_20->flags & VAR_5) {
 case 129:
  VAR_19->algo_data.write_byte = VAR_16;
  VAR_19->algo_data.read_byte = VAR_11;
  break;
 case 130:
  VAR_19->algo_data.write_byte = VAR_15;
  VAR_19->algo_data.read_byte = VAR_10;
  break;
 case 128:
 default:
  VAR_19->algo_data.write_byte = VAR_17;
  VAR_19->algo_data.read_byte = VAR_12;
  break;
 }

 if (VAR_24) {
  VAR_23 = FUNC_8(&VAR_18->dev, VAR_24, VAR_9,
   VAR_6, VAR_18->name, VAR_19);
  if (VAR_23)
   return VAR_23;
 }

 VAR_23 = FUNC_9(&VAR_19->adap);
 if (VAR_23)
  return VAR_23;

 FUNC_13(VAR_18, VAR_19);

 FUNC_3(&VAR_18->dev, "registered.\n");

 return 0;
}
