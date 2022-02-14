
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_interface {int type; int ddbl1_product_id; int ddbl1_manufacturer_id; int dev; int product_id; int vendor_id; } ;




 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,int ,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct gb_interface*) ;
 int FUNC_4 (struct gb_interface*) ;

int FUNC_5(struct gb_interface *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_2(&VAR_0->dev);
 if (VAR_1) {
  FUNC_0(&VAR_0->dev, "failed to register interface: %d\n", VAR_1);
  return VAR_1;
 }

 FUNC_4(VAR_0);

 FUNC_1(&VAR_0->dev, "Interface added (%s)\n",
   FUNC_3(VAR_0));

 switch (VAR_0->type) {
 case 129:
  FUNC_1(&VAR_0->dev, "GMP VID=0x%08x, PID=0x%08x\n",
    VAR_0->vendor_id, VAR_0->product_id);

 case 128:
  FUNC_1(&VAR_0->dev, "DDBL1 Manufacturer=0x%08x, Product=0x%08x\n",
    VAR_0->ddbl1_manufacturer_id,
    VAR_0->ddbl1_product_id);
  break;
 default:
  break;
 }

 return 0;
}
