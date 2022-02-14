
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct b53_io_ops {int dummy; } ;
struct b53_device {int reg_mutex; void* priv; struct b53_io_ops* ops; struct device* dev; } ;


 int VAR_0 ;
 struct b53_device* FUNC_0 (struct device*,int,int ) ;
 int FUNC_1 (int *) ;

struct b53_device *FUNC_2(struct device *VAR_1, struct b53_io_ops *VAR_2,
        void *VAR_3)
{
 struct b53_device *VAR_4;

 VAR_4 = FUNC_0(VAR_1, sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->dev = VAR_1;
 VAR_4->ops = VAR_2;
 VAR_4->priv = VAR_3;
 FUNC_1(&VAR_4->reg_mutex);

 return VAR_4;
}
