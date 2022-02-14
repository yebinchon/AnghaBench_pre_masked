
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtrng_info {int hwrng_register_done; int hwrng; } ;
struct virtio_device {struct virtrng_info* priv; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct virtio_device *VAR_0)
{
 struct virtrng_info *VAR_1 = VAR_0->priv;
 int VAR_2;

 VAR_2 = FUNC_0(&VAR_1->hwrng);
 if (!VAR_2)
  VAR_1->hwrng_register_done = 1;
}
