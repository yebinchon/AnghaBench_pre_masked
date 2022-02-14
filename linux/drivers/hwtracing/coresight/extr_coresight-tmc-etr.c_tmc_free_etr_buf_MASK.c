
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct etr_buf {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* free ) (struct etr_buf*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct etr_buf*) ;
 int FUNC_2 (struct etr_buf*) ;

__attribute__((used)) static void FUNC_3(struct etr_buf *VAR_0)
{
 FUNC_0(!VAR_0->ops || !VAR_0->ops->free);
 VAR_0->ops->free(VAR_0);
 FUNC_1(VAR_0);
}
