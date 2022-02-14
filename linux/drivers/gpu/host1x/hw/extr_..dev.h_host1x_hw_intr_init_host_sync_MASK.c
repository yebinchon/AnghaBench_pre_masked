
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct host1x {TYPE_1__* intr_op; } ;
struct TYPE_2__ {int (* init_host_sync ) (struct host1x*,int ,void (*) (struct work_struct*)) ;} ;


 int FUNC_0 (struct host1x*,int ,void (*) (struct work_struct*)) ;

__attribute__((used)) static inline int FUNC_1(struct host1x *VAR_0, u32 VAR_1,
   void (*VAR_2)(struct work_struct *))
{
 return VAR_0->intr_op->init_host_sync(VAR_0, VAR_1, VAR_2);
}
