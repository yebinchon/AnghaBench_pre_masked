
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct dfl_fpga_cdev {int lock; } ;


 struct platform_device* FUNC_0 (struct dfl_fpga_cdev*,void*,int (*) (struct platform_device*,void*)) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline struct platform_device *
FUNC_3(struct dfl_fpga_cdev *VAR_0, void *VAR_1,
   int (*VAR_2)(struct platform_device *, void *))
{
 struct platform_device *VAR_3;

 FUNC_1(&VAR_0->lock);
 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_2(&VAR_0->lock);

 return VAR_3;
}
