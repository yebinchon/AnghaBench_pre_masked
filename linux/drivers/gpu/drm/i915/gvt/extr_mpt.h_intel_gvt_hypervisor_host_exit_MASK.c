
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* mpt; } ;
struct TYPE_3__ {int (* host_exit ) (struct device*) ;} ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (struct device*) ;

__attribute__((used)) static inline void FUNC_1(struct device *VAR_1)
{

 if (!VAR_0.mpt->host_exit)
  return;

 VAR_0.mpt->host_exit(VAR_1);
}
