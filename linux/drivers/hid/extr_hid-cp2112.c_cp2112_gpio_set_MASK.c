
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
 struct cp2112_device* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (struct hid_device*,char*,int) ;
 int FUNC_2 (struct hid_device*,int,int*,int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct gpio_chip *VAR_4, unsigned VAR_5, int VAR_6)
{
 struct cp2112_device *VAR_7 = FUNC_0(VAR_4);
 struct hid_device *VAR_8 = VAR_7->hdev;
 u8 *VAR_9 = VAR_7->in_out_buffer;
 int VAR_10;

 FUNC_3(&VAR_7->lock);

 VAR_9[0] = VAR_0;
 VAR_9[1] = VAR_6 ? 0xff : 0;
 VAR_9[2] = 1 << VAR_5;

 VAR_10 = FUNC_2(VAR_8, VAR_0, VAR_9,
     VAR_1, VAR_2,
     VAR_3);
 if (VAR_10 < 0)
  FUNC_1(VAR_8, "error setting GPIO values: %d\n", VAR_10);

 FUNC_4(&VAR_7->lock);
}
