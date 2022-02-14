
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct coresight_device {scalar_t__ type; int enable; } ;
struct TYPE_2__ {int (* trace_id ) (struct coresight_device*) ;} ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (struct coresight_device*) ;
 int FUNC_1 (struct coresight_device*) ;
 int FUNC_2 (struct coresight_device*) ;
 struct coresight_device* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_1, void *VAR_2)
{
 int VAR_3, VAR_4;
 struct coresight_device *VAR_5, *VAR_6;

 VAR_5 = VAR_2;
 VAR_6 = FUNC_3(VAR_1);





 if (VAR_6 == VAR_5 || !VAR_6->enable ||
     VAR_6->type != VAR_0)
  return 0;


 VAR_3 = FUNC_0(VAR_5)->trace_id(VAR_5);
 VAR_4 = FUNC_0(VAR_6)->trace_id(VAR_6);


 if (VAR_3 == VAR_4)
  return 1;

 return 0;
}
