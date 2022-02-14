
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct cdn_dp_device {int lock; int active; } ;


 int VAR_0 ;
 int FUNC_0 (struct cdn_dp_device*,int) ;
 struct cdn_dp_device* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_1, void *VAR_2,
         bool VAR_3)
{
 struct cdn_dp_device *VAR_4 = FUNC_1(VAR_1);
 int VAR_5;

 FUNC_2(&VAR_4->lock);
 if (!VAR_4->active) {
  VAR_5 = -VAR_0;
  goto out;
 }

 VAR_5 = FUNC_0(VAR_4, VAR_3);

out:
 FUNC_3(&VAR_4->lock);
 return VAR_5;
}
