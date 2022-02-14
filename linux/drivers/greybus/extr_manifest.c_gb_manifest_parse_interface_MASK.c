
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct manifest_desc {struct greybus_descriptor_interface* data; } ;
struct greybus_descriptor_interface {int features; int product_stringid; int vendor_stringid; } ;
struct gb_interface {int dev; int features; struct gb_control* control; } ;
struct gb_control {char* vendor_string; char* product_string; } ;


 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct gb_interface*) ;
 char* FUNC_3 (struct gb_interface*,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct manifest_desc*) ;

__attribute__((used)) static bool FUNC_6(struct gb_interface *VAR_0,
     struct manifest_desc *VAR_1)
{
 struct greybus_descriptor_interface *VAR_2 = VAR_1->data;
 struct gb_control *VAR_3 = VAR_0->control;
 char *VAR_4;


 VAR_4 = FUNC_3(VAR_0, VAR_2->vendor_stringid);
 if (FUNC_0(VAR_4))
  return 0;
 VAR_3->vendor_string = VAR_4;

 VAR_4 = FUNC_3(VAR_0, VAR_2->product_stringid);
 if (FUNC_0(VAR_4))
  goto out_free_vendor_string;
 VAR_3->product_string = VAR_4;


 VAR_0->features = VAR_2->features;


 FUNC_5(VAR_1);


 if (!FUNC_2(VAR_0)) {
  FUNC_1(&VAR_0->dev, "manifest bundle descriptors not valid\n");
  goto out_err;
 }

 return 1;
out_err:
 FUNC_4(VAR_3->product_string);
 VAR_3->product_string = ((void*)0);
out_free_vendor_string:
 FUNC_4(VAR_3->vendor_string);
 VAR_3->vendor_string = ((void*)0);

 return 0;
}
