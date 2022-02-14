
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct userdiff_driver {int dummy; } ;
struct index_state {int dummy; } ;
struct attr_check {TYPE_1__* items; } ;
struct TYPE_2__ {int value; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 struct attr_check* FUNC_3 (char*,int *) ;
 struct userdiff_driver VAR_0 ;
 struct userdiff_driver VAR_1 ;
 int FUNC_4 (struct index_state*,char const*,struct attr_check*) ;
 struct userdiff_driver* FUNC_5 (int ) ;

struct userdiff_driver *FUNC_6(struct index_state *VAR_2,
           const char *VAR_3)
{
 static struct attr_check *VAR_4;

 if (!VAR_4)
  VAR_4 = FUNC_3("diff", ((void*)0));
 if (!VAR_3)
  return ((void*)0);
 FUNC_4(VAR_2, VAR_3, VAR_4);

 if (FUNC_1(VAR_4->items[0].value))
  return &VAR_1;
 if (FUNC_0(VAR_4->items[0].value))
  return &VAR_0;
 if (FUNC_2(VAR_4->items[0].value))
  return ((void*)0);
 return FUNC_5(VAR_4->items[0].value);
}
