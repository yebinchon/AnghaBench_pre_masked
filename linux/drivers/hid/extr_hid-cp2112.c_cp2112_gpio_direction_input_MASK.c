
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
 int VAR_5 ;
 int VAR_6 ;
 struct cp2112_device* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (struct hid_device*,char*,int) ;
 int FUNC_2 (struct hid_device*,int ,int*,int,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct gpio_chip *VAR_7, unsigned VAR_8)
{
 struct cp2112_device *VAR_9 = FUNC_0(VAR_7);
 struct hid_device *VAR_10 = VAR_9->hdev;
 u8 *VAR_11 = VAR_9->in_out_buffer;
 int VAR_12;

 FUNC_3(&VAR_9->lock);

 VAR_12 = FUNC_2(VAR_10, VAR_0, VAR_11,
     VAR_1, VAR_3,
     VAR_4);
 if (VAR_12 != VAR_1) {
  FUNC_1(VAR_10, "error requesting GPIO config: %d\n", VAR_12);
  if (VAR_12 >= 0)
   VAR_12 = -VAR_2;
  goto exit;
 }

 VAR_11[1] &= ~(1 << VAR_8);
 VAR_11[2] = VAR_6;

 VAR_12 = FUNC_2(VAR_10, VAR_0, VAR_11,
     VAR_1, VAR_3,
     VAR_5);
 if (VAR_12 != VAR_1) {
  FUNC_1(VAR_10, "error setting GPIO config: %d\n", VAR_12);
  if (VAR_12 >= 0)
   VAR_12 = -VAR_2;
  goto exit;
 }

 VAR_12 = 0;

exit:
 FUNC_4(&VAR_9->lock);
 return VAR_12;
}
