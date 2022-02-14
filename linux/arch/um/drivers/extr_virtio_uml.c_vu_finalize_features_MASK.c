
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct virtio_uml_device {int features; } ;
struct virtio_device {int features; } ;


 int VAR_0 ;
 struct virtio_uml_device* FUNC_0 (struct virtio_device*) ;
 int FUNC_1 (struct virtio_uml_device*,int) ;
 int FUNC_2 (struct virtio_device*) ;

__attribute__((used)) static int FUNC_3(struct virtio_device *VAR_1)
{
 struct virtio_uml_device *VAR_2 = FUNC_0(VAR_1);
 u64 VAR_3 = VAR_1->features & VAR_0;

 FUNC_2(VAR_1);
 VAR_2->features = VAR_1->features | VAR_3;

 return FUNC_1(VAR_2, VAR_2->features);
}
