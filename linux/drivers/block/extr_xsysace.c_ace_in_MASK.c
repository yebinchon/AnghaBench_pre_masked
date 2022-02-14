
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct ace_device {TYPE_1__* reg_ops; } ;
struct TYPE_2__ {int (* in ) (struct ace_device*,int) ;} ;


 int FUNC_0 (struct ace_device*,int) ;

__attribute__((used)) static inline u16 FUNC_1(struct ace_device *VAR_0, int VAR_1)
{
 return VAR_0->reg_ops->in(VAR_0, VAR_1);
}
