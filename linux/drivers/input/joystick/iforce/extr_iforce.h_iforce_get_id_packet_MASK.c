
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct iforce {TYPE_1__* xport_ops; } ;
struct TYPE_2__ {int (* get_id ) (struct iforce*,int ,int *,size_t*) ;} ;


 int FUNC_0 (struct iforce*,int ,int *,size_t*) ;

__attribute__((used)) static inline int FUNC_1(struct iforce *VAR_0, u8 VAR_1,
           u8 *VAR_2, size_t *VAR_3)
{
 return VAR_0->xport_ops->get_id(VAR_0, VAR_1,
      VAR_2, VAR_3);
}
