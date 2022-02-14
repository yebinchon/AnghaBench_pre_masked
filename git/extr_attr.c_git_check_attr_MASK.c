
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct index_state {int dummy; } ;
struct attr_check {int nr; TYPE_3__* items; TYPE_1__* all_attrs; } ;
struct TYPE_6__ {char const* value; TYPE_2__* attr; } ;
struct TYPE_5__ {size_t attr_nr; } ;
struct TYPE_4__ {char* value; } ;


 char const* VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (struct index_state const*,char const*,struct attr_check*) ;

void FUNC_1(const struct index_state *VAR_2,
      const char *VAR_3,
      struct attr_check *VAR_4)
{
 int VAR_5;

 FUNC_0(VAR_2, VAR_3, VAR_4);

 for (VAR_5 = 0; VAR_5 < VAR_4->nr; VAR_5++) {
  size_t VAR_6 = VAR_4->items[VAR_5].attr->attr_nr;
  const char *VAR_7 = VAR_4->all_attrs[VAR_6].value;
  if (VAR_7 == VAR_0)
   VAR_7 = VAR_1;
  VAR_4->items[VAR_5].value = VAR_7;
 }
}
