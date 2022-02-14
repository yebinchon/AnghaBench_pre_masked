
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ishtp_device {int dev_state; int devc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct ishtp_device*) ;
 int FUNC_2 (struct ishtp_device*) ;

int FUNC_3(struct ishtp_device *VAR_2)
{
 if (FUNC_1(VAR_2)) {
  FUNC_0(VAR_2->devc, "HBM haven't started");
  goto err;
 }


 FUNC_2(VAR_2);

 return 0;
err:
 FUNC_0(VAR_2->devc, "link layer initialization failed.\n");
 VAR_2->dev_state = VAR_1;
 return -VAR_0;
}
