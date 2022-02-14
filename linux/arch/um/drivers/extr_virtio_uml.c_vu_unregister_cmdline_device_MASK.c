
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtio_uml_platform_data {int socket_path; } ;
struct TYPE_2__ {struct virtio_uml_platform_data* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct platform_device*) ;
 struct platform_device* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, void *VAR_1)
{
 struct platform_device *VAR_2 = FUNC_2(VAR_0);
 struct virtio_uml_platform_data *VAR_3 = VAR_2->dev.platform_data;

 FUNC_0(VAR_3->socket_path);
 FUNC_1(VAR_2);
 return 0;
}
