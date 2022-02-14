
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iov_iter {int dummy; } ;
struct dax_device {TYPE_1__* ops; } ;
typedef int pgoff_t ;
struct TYPE_2__ {size_t (* copy_to_iter ) (struct dax_device*,int ,void*,size_t,struct iov_iter*) ;} ;


 int FUNC_0 (struct dax_device*) ;
 size_t FUNC_1 (struct dax_device*,int ,void*,size_t,struct iov_iter*) ;

size_t FUNC_2(struct dax_device *VAR_0, pgoff_t VAR_1, void *VAR_2,
  size_t VAR_3, struct iov_iter *VAR_4)
{
 if (!FUNC_0(VAR_0))
  return 0;

 return VAR_0->ops->copy_to_iter(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
