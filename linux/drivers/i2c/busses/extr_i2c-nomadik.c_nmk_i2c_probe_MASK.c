
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_12__ {TYPE_4__* parent; struct device_node* of_node; } ;
struct i2c_adapter {int name; int timeout; int * algo; int class; int owner; TYPE_1__ dev; } ;
struct nmk_i2c_dev {scalar_t__ tft; scalar_t__ rft; int clk; int virtbase; int timeout; struct i2c_adapter adap; int irq; struct amba_device* adev; struct i2c_vendor_data* vendor; } ;
struct i2c_vendor_data {int fifodepth; } ;
struct device_node {int dummy; } ;
struct amba_id {struct i2c_vendor_data* data; } ;
struct TYPE_14__ {struct device_node* of_node; } ;
struct TYPE_13__ {int start; } ;
struct amba_device {TYPE_4__ dev; TYPE_2__ res; int * irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (struct amba_device*,struct nmk_i2c_dev*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_4__*,char*,...) ;
 int FUNC_6 (TYPE_4__*,char*,int ,int ) ;
 int FUNC_7 (TYPE_4__*,char*,scalar_t__,scalar_t__) ;
 int FUNC_8 (TYPE_4__*,int *) ;
 int FUNC_9 (TYPE_4__*,int ,int ) ;
 struct nmk_i2c_dev* FUNC_10 (TYPE_4__*,int,int ) ;
 int FUNC_11 (TYPE_4__*,int ,int ,int ,int ,struct nmk_i2c_dev*) ;
 int FUNC_12 (struct i2c_adapter*) ;
 int VAR_5 ;
 int FUNC_13 (struct i2c_adapter*,struct nmk_i2c_dev*) ;
 int FUNC_14 (struct nmk_i2c_dev*) ;
 int FUNC_15 (int ) ;
 int VAR_6 ;
 int FUNC_16 (struct device_node*,struct nmk_i2c_dev*) ;
 int FUNC_17 (TYPE_4__*) ;
 int FUNC_18 (TYPE_2__*) ;
 int FUNC_19 (int ,int,char*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_20(struct amba_device *VAR_7, const struct amba_id *VAR_8)
{
 int VAR_9 = 0;
 struct device_node *VAR_10 = VAR_7->dev.of_node;
 struct nmk_i2c_dev *VAR_11;
 struct i2c_adapter *VAR_12;
 struct i2c_vendor_data *VAR_13 = VAR_8->data;
 u32 VAR_14 = (VAR_13->fifodepth / 2) - 1;

 VAR_11 = FUNC_10(&VAR_7->dev, sizeof(struct nmk_i2c_dev), VAR_2);
 if (!VAR_11) {
  FUNC_5(&VAR_7->dev, "cannot allocate memory\n");
  VAR_9 = -VAR_1;
  goto err_no_mem;
 }
 VAR_11->vendor = VAR_13;
 VAR_11->adev = VAR_7;
 FUNC_16(VAR_10, VAR_11);

 if (VAR_11->tft > VAR_14) {
  FUNC_7(&VAR_7->dev, "requested TX FIFO threshold %u, adjusted down to %u\n",
    VAR_11->tft, VAR_14);
  VAR_11->tft = VAR_14;
 }

 if (VAR_11->rft > VAR_14) {
  FUNC_7(&VAR_7->dev, "requested RX FIFO threshold %u, adjusted down to %u\n",
   VAR_11->rft, VAR_14);
  VAR_11->rft = VAR_14;
 }

 FUNC_2(VAR_7, VAR_11);

 VAR_11->virtbase = FUNC_9(&VAR_7->dev, VAR_7->res.start,
    FUNC_18(&VAR_7->res));
 if (!VAR_11->virtbase) {
  VAR_9 = -VAR_1;
  goto err_no_mem;
 }

 VAR_11->irq = VAR_7->irq[0];
 VAR_9 = FUNC_11(&VAR_7->dev, VAR_11->irq, VAR_5, 0,
    VAR_0, VAR_11);
 if (VAR_9) {
  FUNC_5(&VAR_7->dev, "cannot claim the irq %d\n", VAR_11->irq);
  goto err_no_mem;
 }

 VAR_11->clk = FUNC_8(&VAR_7->dev, ((void*)0));
 if (FUNC_0(VAR_11->clk)) {
  FUNC_5(&VAR_7->dev, "could not get i2c clock\n");
  VAR_9 = FUNC_1(VAR_11->clk);
  goto err_no_mem;
 }

 VAR_9 = FUNC_4(VAR_11->clk);
 if (VAR_9) {
  FUNC_5(&VAR_7->dev, "can't prepare_enable clock\n");
  goto err_no_mem;
 }

 FUNC_14(VAR_11);

 VAR_12 = &VAR_11->adap;
 VAR_12->dev.of_node = VAR_10;
 VAR_12->dev.parent = &VAR_7->dev;
 VAR_12->owner = VAR_4;
 VAR_12->class = VAR_3;
 VAR_12->algo = &VAR_6;
 VAR_12->timeout = FUNC_15(VAR_11->timeout);
 FUNC_19(VAR_12->name, sizeof(VAR_12->name),
   "Nomadik I2C at %pR", &VAR_7->res);

 FUNC_13(VAR_12, VAR_11);

 FUNC_6(&VAR_7->dev,
   "initialize %s on virtual base %p\n",
   VAR_12->name, VAR_11->virtbase);

 VAR_9 = FUNC_12(VAR_12);
 if (VAR_9)
  goto err_no_adap;

 FUNC_17(&VAR_7->dev);

 return 0;

 err_no_adap:
 FUNC_3(VAR_11->clk);
 err_no_mem:

 return VAR_9;
}
