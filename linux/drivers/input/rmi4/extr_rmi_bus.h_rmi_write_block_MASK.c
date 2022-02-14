
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct rmi_device {TYPE_2__* xport; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* write_block ) (TYPE_2__*,int ,void const*,size_t) ;} ;


 int FUNC_0 (TYPE_2__*,int ,void const*,size_t) ;

__attribute__((used)) static inline int FUNC_1(struct rmi_device *VAR_0, u16 VAR_1,
      const void *VAR_2, size_t VAR_3)
{
 return VAR_0->xport->ops->write_block(VAR_0->xport, VAR_1, VAR_2, VAR_3);
}
