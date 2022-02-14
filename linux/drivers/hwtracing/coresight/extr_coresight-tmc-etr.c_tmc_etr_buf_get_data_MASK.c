
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u64 ;
struct etr_buf {size_t size; TYPE_1__* ops; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* get_data ) (struct etr_buf*,size_t,size_t,char**) ;} ;


 int FUNC_0 (struct etr_buf*,size_t,size_t,char**) ;

__attribute__((used)) static ssize_t FUNC_1(struct etr_buf *VAR_0,
        u64 VAR_1, size_t VAR_2, char **VAR_3)
{

 VAR_2 = (VAR_2 < (VAR_0->size - VAR_1)) ? VAR_2 : VAR_0->size - VAR_1;

 return VAR_0->ops->get_data(VAR_0, (u64)VAR_1, VAR_2, VAR_3);
}
