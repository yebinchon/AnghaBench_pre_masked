
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netobj {int n_len; int n_bytes; } ;
struct malloc_type {int dummy; } ;


 int FUNC_0 (struct netobj*,int ,int ,struct malloc_type*) ;

void
FUNC_1(struct netobj *VAR_0, struct netobj *VAR_1,
    struct malloc_type *VAR_2)
{

 FUNC_0(VAR_0, VAR_1->n_bytes, VAR_1->n_len, VAR_2);
}
