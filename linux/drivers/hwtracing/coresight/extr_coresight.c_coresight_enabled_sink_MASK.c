
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct coresight_device {scalar_t__ type; int activated; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct coresight_device* FUNC_0 (struct device*) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_2, const void *VAR_3)
{
 const bool *VAR_4 = VAR_3;
 struct coresight_device *VAR_5 = FUNC_0(VAR_2);

 if ((VAR_5->type == VAR_1 ||
      VAR_5->type == VAR_0) &&
      VAR_5->activated) {







  if (*VAR_4)
   VAR_5->activated = 0;

  return 1;
 }

 return 0;
}
