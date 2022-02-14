
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int salt_t ;
struct TYPE_3__ {int is_salted; } ;
typedef TYPE_1__ hashconfig_t ;
struct TYPE_4__ {void* digest; int * salt; } ;
typedef TYPE_2__ hash_t ;


 int FUNC_0 (void const*,void const*,void*) ;
 int FUNC_1 (int const*,int const*) ;

int FUNC_2 (const void *VAR_0, const void *VAR_1, void *VAR_2)
{
  const hash_t *VAR_3 = (const hash_t *) VAR_0;
  const hash_t *VAR_4 = (const hash_t *) VAR_1;

  hashconfig_t *VAR_5 = (hashconfig_t *) VAR_2;

  if (VAR_5->is_salted == 1)
  {
    const salt_t *VAR_6 = VAR_3->salt;
    const salt_t *VAR_7 = VAR_4->salt;

    int VAR_8 = FUNC_1 (VAR_6, VAR_7);

    if (VAR_8 != 0) return (VAR_8);
  }

  const void *VAR_9 = VAR_3->digest;
  const void *VAR_10 = VAR_4->digest;

  return FUNC_0 (VAR_9, VAR_10, VAR_2);
}
