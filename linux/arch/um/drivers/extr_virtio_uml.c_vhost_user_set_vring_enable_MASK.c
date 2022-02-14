
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct virtio_uml_device {int features; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct virtio_uml_device*,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct virtio_uml_device *VAR_2,
           u32 VAR_3, bool VAR_4)
{
 if (!(VAR_2->features & FUNC_0(VAR_0)))
  return 0;

 return FUNC_1(VAR_2, VAR_1,
       VAR_3, VAR_4);
}
