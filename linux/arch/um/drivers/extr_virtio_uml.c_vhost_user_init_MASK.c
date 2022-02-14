
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_uml_device {int features; int protocol_features; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct virtio_uml_device*,int*) ;
 int FUNC_2 (struct virtio_uml_device*,int*) ;
 int FUNC_3 (struct virtio_uml_device*) ;
 int FUNC_4 (struct virtio_uml_device*) ;
 int FUNC_5 (struct virtio_uml_device*,int) ;

__attribute__((used)) static int FUNC_6(struct virtio_uml_device *VAR_3)
{
 int VAR_4 = FUNC_4(VAR_3);

 if (VAR_4)
  return VAR_4;
 VAR_4 = FUNC_1(VAR_3, &VAR_3->features);
 if (VAR_4)
  return VAR_4;

 if (VAR_3->features & FUNC_0(VAR_0)) {
  VAR_4 = FUNC_2(VAR_3,
    &VAR_3->protocol_features);
  if (VAR_4)
   return VAR_4;
  VAR_3->protocol_features &= VAR_2;
  VAR_4 = FUNC_5(VAR_3,
    VAR_3->protocol_features);
  if (VAR_4)
   return VAR_4;
 }

 if (VAR_3->protocol_features &
   FUNC_0(VAR_1)) {
  VAR_4 = FUNC_3(VAR_3);
  if (VAR_4)
   return VAR_4;
 }

 return 0;
}
