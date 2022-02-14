
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ wc; } ;
typedef TYPE_1__ charmap_t ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const charmap_t *VAR_2 = VAR_0;
 const charmap_t *VAR_3 = VAR_1;

 return ((VAR_2->wc < VAR_3->wc) ? -1 : (VAR_2->wc > VAR_3->wc) ? 1 : 0);
}
