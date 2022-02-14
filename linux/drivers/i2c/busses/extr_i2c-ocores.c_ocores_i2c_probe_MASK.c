
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct resource {int start; } ;
struct TYPE_15__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; int name; } ;
struct of_device_id {scalar_t__ data; } ;
struct ocores_i2c_platform_data {int reg_io_width; int bus_khz; int big_endian; int num_devices; scalar_t__ devices; int clock_khz; int reg_shift; } ;
struct TYPE_14__ {int of_node; TYPE_2__* parent; } ;
struct TYPE_17__ {TYPE_1__ dev; } ;
struct ocores_i2c {int reg_io_width; int bus_clock_khz; int clk; TYPE_4__ adap; int flags; int wait; int getreg; int setreg; int ip_clock_khz; int reg_shift; int iobase; int base; int process_lock; } ;
struct TYPE_16__ {scalar_t__ master_xfer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 long VAR_8 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,char*,...) ;
 struct ocores_i2c_platform_data* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,struct resource*) ;
 struct ocores_i2c* FUNC_6 (TYPE_2__*,int,int ) ;
 int FUNC_7 (TYPE_2__*,int,int ,int ,int ,struct ocores_i2c*) ;
 int FUNC_8 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (TYPE_4__*,scalar_t__) ;
 int FUNC_11 (TYPE_4__*,struct ocores_i2c*) ;
 int FUNC_12 (int *) ;
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
 TYPE_4__ VAR_21 ;
 TYPE_3__ VAR_22 ;
 int VAR_23 ;
 int FUNC_13 (struct platform_device*,struct ocores_i2c*) ;
 int FUNC_14 (TYPE_2__*,struct ocores_i2c*) ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 int FUNC_15 (int ) ;
 struct of_device_id* FUNC_16 (int ,int ) ;
 int FUNC_17 (struct platform_device*,int ) ;
 struct resource* FUNC_18 (struct platform_device*,int ,int ) ;
 int FUNC_19 (struct platform_device*,struct ocores_i2c*) ;
 int FUNC_20 (struct resource*) ;
 int FUNC_21 (int *) ;

__attribute__((used)) static int FUNC_22(struct platform_device *VAR_26)
{
 struct ocores_i2c *VAR_27;
 struct ocores_i2c_platform_data *VAR_28;
 const struct of_device_id *VAR_29;
 struct resource *VAR_30;
 int VAR_31;
 int VAR_32;
 int VAR_33;

 VAR_27 = FUNC_6(&VAR_26->dev, sizeof(*VAR_27), VAR_4);
 if (!VAR_27)
  return -VAR_2;

 FUNC_21(&VAR_27->process_lock);

 VAR_30 = FUNC_18(VAR_26, VAR_6, 0);
 if (VAR_30) {
  VAR_27->base = FUNC_5(&VAR_26->dev, VAR_30);
  if (FUNC_0(VAR_27->base))
   return FUNC_1(VAR_27->base);
 } else {
  VAR_30 = FUNC_18(VAR_26, VAR_5, 0);
  if (!VAR_30)
   return -VAR_1;
  VAR_27->iobase = VAR_30->start;
  if (!FUNC_8(&VAR_26->dev, VAR_30->start,
      FUNC_20(VAR_30),
      VAR_26->name)) {
   FUNC_3(&VAR_26->dev, "Can't get I/O resource.\n");
   return -VAR_0;
  }
  VAR_27->setreg = VAR_20;
  VAR_27->getreg = VAR_14;
 }

 VAR_28 = FUNC_4(&VAR_26->dev);
 if (VAR_28) {
  VAR_27->reg_shift = VAR_28->reg_shift;
  VAR_27->reg_io_width = VAR_28->reg_io_width;
  VAR_27->ip_clock_khz = VAR_28->clock_khz;
  if (VAR_28->bus_khz)
   VAR_27->bus_clock_khz = VAR_28->bus_khz;
  else
   VAR_27->bus_clock_khz = 100;
 } else {
  VAR_32 = FUNC_13(VAR_26, VAR_27);
  if (VAR_32)
   return VAR_32;
 }

 if (VAR_27->reg_io_width == 0)
  VAR_27->reg_io_width = 1;

 if (!VAR_27->setreg || !VAR_27->getreg) {
  bool VAR_34 = VAR_28 ? VAR_28->big_endian :
   FUNC_15(VAR_26->dev.of_node);

  switch (VAR_27->reg_io_width) {
  case 1:
   VAR_27->setreg = VAR_19;
   VAR_27->getreg = VAR_13;
   break;

  case 2:
   VAR_27->setreg = VAR_34 ? VAR_16 : VAR_15;
   VAR_27->getreg = VAR_34 ? VAR_10 : VAR_9;
   break;

  case 4:
   VAR_27->setreg = VAR_34 ? VAR_18 : VAR_17;
   VAR_27->getreg = VAR_34 ? VAR_12 : VAR_11;
   break;

  default:
   FUNC_3(&VAR_26->dev, "Unsupported I/O width (%d)\n",
    VAR_27->reg_io_width);
   VAR_32 = -VAR_1;
   goto err_clk;
  }
 }

 FUNC_12(&VAR_27->wait);

 VAR_31 = FUNC_17(VAR_26, 0);
 if (VAR_31 == -VAR_3) {
  VAR_22.master_xfer = VAR_25;





  VAR_29 = FUNC_16(VAR_23, VAR_26->dev.of_node);
  if (VAR_29 && (long)VAR_29->data == VAR_8)
   VAR_27->flags |= VAR_7;
 } else {
  if (VAR_31 < 0)
   return VAR_31;
 }

 if (VAR_22.master_xfer != VAR_25) {
  VAR_32 = FUNC_7(&VAR_26->dev, VAR_31,
         VAR_24, 0,
         VAR_26->name, VAR_27);
  if (VAR_32) {
   FUNC_3(&VAR_26->dev, "Cannot claim IRQ\n");
   goto err_clk;
  }
 }

 VAR_32 = FUNC_14(&VAR_26->dev, VAR_27);
 if (VAR_32)
  goto err_clk;


 FUNC_19(VAR_26, VAR_27);
 VAR_27->adap = VAR_21;
 FUNC_11(&VAR_27->adap, VAR_27);
 VAR_27->adap.dev.parent = &VAR_26->dev;
 VAR_27->adap.dev.of_node = VAR_26->dev.of_node;


 VAR_32 = FUNC_9(&VAR_27->adap);
 if (VAR_32)
  goto err_clk;


 if (VAR_28) {
  for (VAR_33 = 0; VAR_33 < VAR_28->num_devices; VAR_33++)
   FUNC_10(&VAR_27->adap, VAR_28->devices + VAR_33);
 }

 return 0;

err_clk:
 FUNC_2(VAR_27->clk);
 return VAR_32;
}
