
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hid_device {int dummy; } ;
struct gpio_chip {int dummy; } ;
struct cp2112_device {int* in_out_buffer; int lock; struct hid_device* hdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct cp2112_device* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (struct hid_device*,char*,int) ;
 int FUNC_2 (struct hid_device*,int ,int*,int,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct gpio_chip *VAR_5)
{
 struct cp2112_device *VAR_6 = FUNC_0(VAR_5);
 struct hid_device *VAR_7 = VAR_6->hdev;
 u8 *VAR_8 = VAR_6->in_out_buffer;
 int VAR_9;

 FUNC_3(&VAR_6->lock);

 VAR_9 = FUNC_2(VAR_7, VAR_0, VAR_8,
     VAR_1, VAR_3,
     VAR_4);
 if (VAR_9 != VAR_1) {
  FUNC_1(VAR_7, "error requesting GPIO values: %d\n", VAR_9);
  VAR_9 = VAR_9 < 0 ? VAR_9 : -VAR_2;
  goto exit;
 }

 VAR_9 = VAR_8[1];

exit:
 FUNC_4(&VAR_6->lock);

 return VAR_9;
}
