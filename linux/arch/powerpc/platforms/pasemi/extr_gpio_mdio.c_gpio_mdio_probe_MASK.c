
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct mii_bus {char* name; unsigned int mdc_pin; unsigned int mdio_pin; struct device* parent; struct mii_bus* priv; int id; int * reset; int * write; int * read; } ;
struct gpio_priv {char* name; unsigned int mdc_pin; unsigned int mdio_pin; struct device* parent; struct gpio_priv* priv; int id; int * reset; int * write; int * read; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,struct mii_bus*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct mii_bus*) ;
 struct mii_bus* FUNC_2 (int,int ) ;
 struct mii_bus* FUNC_3 () ;
 unsigned int* FUNC_4 (struct device_node*,char*,int *) ;
 int FUNC_5 (struct mii_bus*,struct device_node*) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (int ,int ,char*,unsigned int const) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_6)
{
 struct device *VAR_7 = &VAR_6->dev;
 struct device_node *VAR_8 = VAR_6->dev.of_node;
 struct mii_bus *VAR_9;
 struct gpio_priv *VAR_10;
 const unsigned int *VAR_11;
 int VAR_12;

 VAR_12 = -VAR_0;
 VAR_10 = FUNC_2(sizeof(struct gpio_priv), VAR_1);
 if (!VAR_10)
  goto out;

 VAR_9 = FUNC_3();

 if (!VAR_9)
  goto out_free_priv;

 VAR_9->name = "pasemi gpio mdio bus";
 VAR_9->read = &VAR_3;
 VAR_9->write = &VAR_5;
 VAR_9->reset = &VAR_4;

 VAR_11 = FUNC_4(VAR_8, "reg", ((void*)0));
 FUNC_7(VAR_9->id, VAR_2, "%x", *VAR_11);
 VAR_9->priv = VAR_10;

 VAR_11 = FUNC_4(VAR_8, "mdc-pin", ((void*)0));
 VAR_10->mdc_pin = *VAR_11;

 VAR_11 = FUNC_4(VAR_8, "mdio-pin", ((void*)0));
 VAR_10->mdio_pin = *VAR_11;

 VAR_9->parent = VAR_7;
 FUNC_0(VAR_7, VAR_9);

 VAR_12 = FUNC_5(VAR_9, VAR_8);

 if (VAR_12 != 0) {
  FUNC_6("%s: Cannot register as MDIO bus, err %d\n",
    VAR_9->name, VAR_12);
  goto out_free_irq;
 }

 return 0;

out_free_irq:
 FUNC_1(VAR_9);
out_free_priv:
 FUNC_1(VAR_10);
out:
 return VAR_12;
}
