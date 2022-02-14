
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct dca_provider {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* remove_requester ) (struct dca_provider*,struct device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct dca_provider* FUNC_0 (struct device*) ;
 int VAR_2 ;
 int FUNC_1 (struct dca_provider*,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct dca_provider*,struct device*) ;

int FUNC_5(struct device *VAR_3)
{
 struct dca_provider *VAR_4;
 int VAR_5;
 unsigned long VAR_6;

 if (!VAR_3)
  return -VAR_0;

 FUNC_2(&VAR_2, VAR_6);
 VAR_4 = FUNC_0(VAR_3);
 if (!VAR_4) {
  FUNC_3(&VAR_2, VAR_6);
  return -VAR_1;
 }
 VAR_5 = VAR_4->ops->remove_requester(VAR_4, VAR_3);
 FUNC_3(&VAR_2, VAR_6);

 if (VAR_5 < 0)
  return VAR_5;

 FUNC_1(VAR_4, VAR_5);

 return 0;
}
