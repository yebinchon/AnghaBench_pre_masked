
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netobj {size_t n_len; int n_bytes; } ;
struct malloc_type {int dummy; } ;
typedef int caddr_t ;


 int VAR_0 ;
 int FUNC_0 (size_t,struct malloc_type*,int ) ;
 int FUNC_1 (int ,int ,size_t) ;

void
FUNC_2(struct netobj *VAR_1, caddr_t VAR_2, size_t VAR_3,
    struct malloc_type *VAR_4)
{

 VAR_1->n_len = VAR_3;
 VAR_1->n_bytes = FUNC_0(VAR_3, VAR_4, VAR_0);
 FUNC_1(VAR_1->n_bytes, VAR_2, VAR_3);
}
