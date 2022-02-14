
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct xadc {TYPE_1__* ops; int mutex; } ;
struct TYPE_2__ {int (* read ) (struct xadc*,unsigned int,int *) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct xadc*,unsigned int,int *) ;

__attribute__((used)) static inline int FUNC_2(struct xadc *VAR_0, unsigned int VAR_1,
 uint16_t *VAR_2)
{
 FUNC_0(&VAR_0->mutex);
 return VAR_0->ops->read(VAR_0, VAR_1, VAR_2);
}
