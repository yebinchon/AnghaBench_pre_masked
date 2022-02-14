
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ ha; int size; int ptr; } ;
typedef TYPE_1__ xrecord_t ;
struct TYPE_7__ {int flags; } ;
typedef TYPE_2__ xpparam_t ;


 scalar_t__ FUNC_0 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(xpparam_t const *VAR_0,
 xrecord_t *VAR_1, xrecord_t *VAR_2)
{
 return VAR_1->ha == VAR_2->ha &&
  FUNC_0(VAR_1->ptr, VAR_1->size, VAR_2->ptr, VAR_2->size,
       VAR_0->flags);
}
