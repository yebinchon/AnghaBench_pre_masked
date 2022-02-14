
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct virtio_uml_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct virtio_uml_device*,int *) ;
 int FUNC_1 (struct virtio_uml_device*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct virtio_uml_device *VAR_1,
       u64 *VAR_2)
{
 int VAR_3 = FUNC_1(VAR_1, 1,
         VAR_0);

 if (VAR_3)
  return VAR_3;
 return FUNC_0(VAR_1, VAR_2);
}
