
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nitems; int nitems_max; char const** item; } ;
typedef TYPE_1__ string_list_ty ;


 int FUNC_0 (char const**,int) ;

__attribute__((used)) static inline void
FUNC_1 (string_list_ty *VAR_0, const char *VAR_1)
{

  if (VAR_0->nitems >= VAR_0->nitems_max)
    {
      VAR_0->nitems_max = VAR_0->nitems_max * 2 + 4;
      FUNC_0(VAR_0->item, VAR_0->nitems_max);
    }


  VAR_0->item[VAR_0->nitems++] = VAR_1;
}
