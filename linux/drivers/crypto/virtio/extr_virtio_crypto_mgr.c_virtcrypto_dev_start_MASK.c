
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_crypto {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct virtio_crypto*) ;

int FUNC_2(struct virtio_crypto *VAR_1)
{
 if (FUNC_1(VAR_1)) {
  FUNC_0("virtio_crypto: Failed to register crypto algs\n");
  return -VAR_0;
 }

 return 0;
}
