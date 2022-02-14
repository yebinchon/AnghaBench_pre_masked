
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtio_uml_platform_data {char* socket_path; int virtio_device_id; } ;
struct TYPE_2__ {struct virtio_uml_platform_data* platform_data; } ;
struct platform_device {int id; TYPE_1__ dev; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,scalar_t__,char*,char*,int,int) ;
 unsigned int FUNC_1 (char*) ;
 struct platform_device* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1, void *VAR_2)
{
 struct platform_device *VAR_3 = FUNC_2(VAR_1);
 struct virtio_uml_platform_data *VAR_4 = VAR_3->dev.platform_data;
 char *VAR_5 = VAR_2;
 unsigned int VAR_6 = FUNC_1(VAR_5);

 FUNC_0(VAR_5 + VAR_6, VAR_0 - VAR_6, "%s:%d:%d\n",
   VAR_4->socket_path, VAR_4->virtio_device_id, VAR_3->id);
 return 0;
}
