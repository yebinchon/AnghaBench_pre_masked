
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tmc_drvdata {int dummy; } ;
struct etr_buf {int dummy; } ;
struct coresight_device {int dummy; } ;
struct TYPE_2__ {int (* enable ) (struct coresight_device*,struct etr_buf*) ;} ;


 TYPE_1__* FUNC_0 (struct coresight_device*) ;
 int FUNC_1 (struct coresight_device*,struct etr_buf*) ;
 struct coresight_device* FUNC_2 (struct tmc_drvdata*) ;

__attribute__((used)) static inline int FUNC_3(struct tmc_drvdata *VAR_0,
          struct etr_buf *VAR_1)
{
 struct coresight_device *VAR_2 = FUNC_2(VAR_0);

 if (VAR_2 && FUNC_0(VAR_2)->enable)
  return FUNC_0(VAR_2)->enable(VAR_2, VAR_1);
 return 0;
}
