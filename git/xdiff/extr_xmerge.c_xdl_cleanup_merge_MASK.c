
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ mode; struct TYPE_4__* next; } ;
typedef TYPE_1__ xdmerge_t ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(xdmerge_t *VAR_0)
{
 int VAR_1 = 0;
 xdmerge_t *VAR_2;


 for (; VAR_0; VAR_0 = VAR_2) {
  if (VAR_0->mode == 0)
   VAR_1++;
  VAR_2 = VAR_0->next;
  FUNC_0(VAR_0);
 }
 return VAR_1;
}
