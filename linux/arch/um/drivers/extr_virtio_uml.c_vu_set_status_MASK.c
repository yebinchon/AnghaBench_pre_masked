
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct virtio_uml_device {int status; } ;
struct virtio_device {int dummy; } ;


 struct virtio_uml_device* FUNC_0 (struct virtio_device*) ;

__attribute__((used)) static void FUNC_1(struct virtio_device *VAR_0, u8 VAR_1)
{
 struct virtio_uml_device *VAR_2 = FUNC_0(VAR_0);

 VAR_2->status = VAR_1;
}
