
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ishtp_cl_driver {int guid; } ;
struct ishtp_cl_device {TYPE_2__* fw_client; } ;
struct device_driver {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_3__ {int protocol_name; } ;
struct TYPE_4__ {TYPE_1__ props; } ;


 int FUNC_0 (int ,int *) ;
 struct ishtp_cl_device* FUNC_1 (struct device*) ;
 struct ishtp_cl_driver* FUNC_2 (struct device_driver*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, struct device_driver *VAR_1)
{
 struct ishtp_cl_device *VAR_2 = FUNC_1(VAR_0);
 struct ishtp_cl_driver *VAR_3 = FUNC_2(VAR_1);

 return FUNC_0(VAR_3->guid,
     &VAR_2->fw_client->props.protocol_name);
}
