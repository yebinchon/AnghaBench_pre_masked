
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
 int FUNC_0 (struct gpio_chip*,unsigned int,int) ;
 int VAR_6 ;
 struct cp2112_device* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (struct hid_device*,char*,int) ;
 int FUNC_3 (struct hid_device*,int ,int*,int,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct gpio_chip *VAR_7,
     unsigned VAR_8, int VAR_9)
{
 struct cp2112_device *VAR_10 = FUNC_1(VAR_7);
 struct hid_device *VAR_11 = VAR_10->hdev;
 u8 *VAR_12 = VAR_10->in_out_buffer;
 int VAR_13;

 FUNC_4(&VAR_10->lock);

 VAR_13 = FUNC_3(VAR_11, VAR_0, VAR_12,
     VAR_1, VAR_3,
     VAR_4);
 if (VAR_13 != VAR_1) {
  FUNC_2(VAR_11, "error requesting GPIO config: %d\n", VAR_13);
  goto fail;
 }

 VAR_12[1] |= 1 << VAR_8;
 VAR_12[2] = VAR_6;

 VAR_13 = FUNC_3(VAR_11, VAR_0, VAR_12,
     VAR_1, VAR_3,
     VAR_5);
 if (VAR_13 < 0) {
  FUNC_2(VAR_11, "error setting GPIO config: %d\n", VAR_13);
  goto fail;
 }

 FUNC_5(&VAR_10->lock);





 FUNC_0(VAR_7, VAR_8, VAR_9);

 return 0;

fail:
 FUNC_5(&VAR_10->lock);
 return VAR_13 < 0 ? VAR_13 : -VAR_2;
}
