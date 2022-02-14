
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tmc_drvdata {int etr_buf; } ;
struct coresight_device {int dummy; } ;
struct TYPE_2__ {int (* disable ) (struct coresight_device*,int ) ;} ;


 TYPE_1__* FUNC_0 (struct coresight_device*) ;
 int FUNC_1 (struct coresight_device*,int ) ;
 struct coresight_device* FUNC_2 (struct tmc_drvdata*) ;

__attribute__((used)) static inline void FUNC_3(struct tmc_drvdata *VAR_0)
{
 struct coresight_device *VAR_1 = FUNC_2(VAR_0);

 if (VAR_1 && FUNC_0(VAR_1)->disable)
  FUNC_0(VAR_1)->disable(VAR_1, VAR_0->etr_buf);
}
