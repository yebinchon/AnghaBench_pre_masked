
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_device {unsigned int dev_rsize; int dev_rdesc; } ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned int,int ) ;

int FUNC_1(struct hid_device *VAR_2, __u8 *VAR_3, unsigned VAR_4)
{
 VAR_2->dev_rdesc = FUNC_0(VAR_3, VAR_4, VAR_1);
 if (!VAR_2->dev_rdesc)
  return -VAR_0;
 VAR_2->dev_rsize = VAR_4;
 return 0;
}
