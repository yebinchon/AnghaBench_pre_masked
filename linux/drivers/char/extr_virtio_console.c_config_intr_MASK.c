
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_device {struct ports_device* priv; } ;
struct ports_device {int config_work; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ports_device*) ;

__attribute__((used)) static void FUNC_2(struct virtio_device *VAR_0)
{
 struct ports_device *VAR_1;

 VAR_1 = VAR_0->priv;

 if (!FUNC_1(VAR_1))
  FUNC_0(&VAR_1->config_work);
}
