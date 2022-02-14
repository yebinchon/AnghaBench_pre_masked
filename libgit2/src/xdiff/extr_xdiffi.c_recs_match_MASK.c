
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ha; int size; int ptr; } ;
typedef TYPE_1__ xrecord_t ;


 scalar_t__ FUNC_0 (int ,int ,int ,int ,long) ;

__attribute__((used)) static int FUNC_1(xrecord_t *VAR_0, xrecord_t *VAR_1, long VAR_2)
{
 return (VAR_0->ha == VAR_1->ha &&
  FUNC_0(VAR_0->ptr, VAR_0->size,
        VAR_1->ptr, VAR_1->size,
        VAR_2));
}
