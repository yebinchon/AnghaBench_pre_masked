
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* digest; } ;
typedef TYPE_1__ hash_t ;


 int FUNC_0 (void const*,void const*,void*) ;

int FUNC_1 (const void *VAR_0, const void *VAR_1, void *VAR_2)
{
  const hash_t *VAR_3 = (const hash_t *) VAR_0;
  const hash_t *VAR_4 = (const hash_t *) VAR_1;

  const void *VAR_5 = VAR_3->digest;
  const void *VAR_6 = VAR_4->digest;

  return FUNC_0 (VAR_5, VAR_6, VAR_2);
}
