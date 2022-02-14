
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* mpt; } ;
struct TYPE_3__ {int (* host_init ) (struct device*,void*,void const*) ;} ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (struct device*,void*,void const*) ;

__attribute__((used)) static inline int FUNC_1(struct device *VAR_2,
       void *VAR_3, const void *VAR_4)
{
 if (!VAR_1.mpt->host_init)
  return -VAR_0;

 return VAR_1.mpt->host_init(VAR_2, VAR_3, VAR_4);
}
