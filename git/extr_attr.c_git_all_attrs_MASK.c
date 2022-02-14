
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct index_state {int dummy; } ;
struct attr_check_item {char const* value; } ;
struct attr_check {int all_attrs_nr; TYPE_1__* all_attrs; } ;
struct TYPE_4__ {char* name; } ;
struct TYPE_3__ {char* value; TYPE_2__* attr; } ;


 char const* VAR_0 ;
 char const* VAR_1 ;
 struct attr_check_item* FUNC_0 (struct attr_check*,int ) ;
 int FUNC_1 (struct attr_check*) ;
 int FUNC_2 (struct index_state const*,char const*,struct attr_check*) ;
 int FUNC_3 (char const*) ;

void FUNC_4(const struct index_state *VAR_2,
     const char *VAR_3, struct attr_check *VAR_4)
{
 int VAR_5;

 FUNC_1(VAR_4);
 FUNC_2(VAR_2, VAR_3, VAR_4);

 for (VAR_5 = 0; VAR_5 < VAR_4->all_attrs_nr; VAR_5++) {
  const char *VAR_6 = VAR_4->all_attrs[VAR_5].attr->name;
  const char *VAR_7 = VAR_4->all_attrs[VAR_5].value;
  struct attr_check_item *VAR_8;
  if (VAR_7 == VAR_1 || VAR_7 == VAR_0)
   continue;
  VAR_8 = FUNC_0(VAR_4, FUNC_3(VAR_6));
  VAR_8->value = VAR_7;
 }
}
