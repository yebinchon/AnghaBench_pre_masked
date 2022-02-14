
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct index_state {int dummy; } ;
struct attr_check {TYPE_1__* items; } ;
struct TYPE_5__ {unsigned int rule_bits; int exclude_default; int loosens_error; } ;
struct TYPE_4__ {char* value; } ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*) ;
 struct attr_check* FUNC_4 (char*,int *) ;
 int FUNC_5 (struct index_state*,char const*,struct attr_check*) ;
 int FUNC_6 (char const*) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_7 (int) ;

unsigned FUNC_8(struct index_state *VAR_2, const char *VAR_3)
{
 static struct attr_check *VAR_4;
 const char *VAR_5;

 if (!VAR_4)
  VAR_4 = FUNC_4("whitespace", ((void*)0));

 FUNC_5(VAR_2, VAR_3, VAR_4);
 VAR_5 = VAR_4->items[0].value;
 if (FUNC_2(VAR_5)) {

  unsigned VAR_6 = FUNC_7(VAR_0);
  int VAR_7;
  for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_1); VAR_7++)
   if (!VAR_1[VAR_7].loosens_error &&
       !VAR_1[VAR_7].exclude_default)
    VAR_6 |= VAR_1[VAR_7].rule_bits;
  return VAR_6;
 } else if (FUNC_1(VAR_5)) {

  return FUNC_7(VAR_0);
 } else if (FUNC_3(VAR_5)) {

  return VAR_0;
 } else {

  return FUNC_6(VAR_5);
 }
}
