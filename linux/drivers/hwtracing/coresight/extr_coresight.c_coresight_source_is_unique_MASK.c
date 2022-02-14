
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct coresight_device {int dummy; } ;
struct TYPE_2__ {int (* trace_id ) (struct coresight_device*) ;} ;


 int FUNC_0 (int *,int *,struct coresight_device*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (struct coresight_device*) ;
 int FUNC_2 (struct coresight_device*) ;

__attribute__((used)) static int FUNC_3(struct coresight_device *VAR_2)
{
 int VAR_3 = FUNC_1(VAR_2)->trace_id(VAR_2);


 if (VAR_3 < 0)
  return 0;

 return !FUNC_0(&VAR_0, ((void*)0),
     VAR_2, VAR_1);
}
