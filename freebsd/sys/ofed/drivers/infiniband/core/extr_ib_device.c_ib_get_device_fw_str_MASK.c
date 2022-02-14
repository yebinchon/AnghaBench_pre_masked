
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_device {int (* get_dev_fw_str ) (struct ib_device*,char*,size_t) ;} ;


 int FUNC_0 (struct ib_device*,char*,size_t) ;

void FUNC_1(struct ib_device *VAR_0, char *VAR_1, size_t VAR_2)
{
 if (VAR_0->get_dev_fw_str)
  VAR_0->get_dev_fw_str(VAR_0, VAR_1, VAR_2);
 else
  VAR_1[0] = '\0';
}
