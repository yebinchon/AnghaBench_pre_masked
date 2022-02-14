
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mISDNdevice {int Bprotocols; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct mISDNdevice* FUNC_0 (struct device*) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
    struct device_attribute *VAR_2, char *VAR_3)
{
 struct mISDNdevice *VAR_4 = FUNC_0(VAR_1);

 if (!VAR_4)
  return -VAR_0;
 return FUNC_2(VAR_3, "%d\n", VAR_4->Bprotocols | FUNC_1());
}
