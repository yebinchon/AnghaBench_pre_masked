
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_device {int dev; } ;
typedef int __u8 ;


 int FUNC_0 (int *,char*) ;

__attribute__((used)) static __u8 *FUNC_1(struct hid_device *VAR_0, __u8 *VAR_1,
 unsigned int *VAR_2)
{
 if (*VAR_2 >= 102 && VAR_1[100] == 0x81 && VAR_1[101] == 0x00) {
  FUNC_0(&VAR_0->dev, "Fixing Redragon ASURA report descriptor.\n");
  VAR_1[101] = 0x02;
 }

 return VAR_1;
}
