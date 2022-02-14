
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t n_buckets; } ;
typedef TYPE_1__ git_offmap ;
typedef int git_off_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,size_t) ;
 int FUNC_1 (TYPE_1__*,size_t) ;
 void* FUNC_2 (TYPE_1__*,size_t) ;

int FUNC_3(void **VAR_1, git_offmap *VAR_2, size_t *VAR_3, git_off_t *VAR_4)
{
 size_t VAR_5 = *VAR_3;

 while (VAR_5 < VAR_2->n_buckets && !FUNC_0(VAR_2, VAR_5))
  VAR_5++;

 if (VAR_5 >= VAR_2->n_buckets)
  return VAR_0;

 if (VAR_4)
  *VAR_4 = FUNC_1(VAR_2, VAR_5);
 if (VAR_1)
  *VAR_1 = FUNC_2(VAR_2, VAR_5);
 *VAR_3 = ++VAR_5;

 return 0;
}
