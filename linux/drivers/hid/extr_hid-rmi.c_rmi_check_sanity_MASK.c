
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hid_device {int dummy; } ;



__attribute__((used)) static int FUNC_0(struct hid_device *VAR_0, u8 *VAR_1, int VAR_2)
{
 int VAR_3 = VAR_2;







 while ((VAR_1[VAR_3 - 1] == 0xff) && VAR_3 > 0)
  VAR_3--;

 return VAR_3;
}
