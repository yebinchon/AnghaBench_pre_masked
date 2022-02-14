
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {struct f54_data* drv_priv; } ;
struct f54_data {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct f54_data*) ;

__attribute__((used)) static int FUNC_1(struct vb2_queue *VAR_1, unsigned int *VAR_2,
          unsigned int *VAR_3, unsigned int VAR_4[],
          struct device *VAR_5[])
{
 struct f54_data *VAR_6 = VAR_1->drv_priv;

 if (*VAR_3)
  return VAR_4[0] < FUNC_0(VAR_6) ? -VAR_0 : 0;

 *VAR_3 = 1;
 VAR_4[0] = FUNC_0(VAR_6);

 return 0;
}
