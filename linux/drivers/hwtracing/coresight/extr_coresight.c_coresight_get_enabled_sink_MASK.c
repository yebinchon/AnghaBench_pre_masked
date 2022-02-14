
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct coresight_device {int dummy; } ;


 struct device* FUNC_0 (int *,int *,int*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct coresight_device* FUNC_1 (struct device*) ;

struct coresight_device *FUNC_2(bool VAR_2)
{
 struct device *VAR_3 = ((void*)0);

 VAR_3 = FUNC_0(&VAR_0, ((void*)0), &VAR_2,
         VAR_1);

 return VAR_3 ? FUNC_1(VAR_3) : ((void*)0);
}
