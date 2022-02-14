
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct index_state {int dummy; } ;
struct attr_check {TYPE_1__* items; } ;
struct TYPE_2__ {scalar_t__ value; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 struct attr_check* FUNC_1 (char*,int *) ;
 int FUNC_2 (struct index_state*,char const*,struct attr_check*) ;

int FUNC_3(struct index_state *VAR_1, const char *VAR_2)
{
 static struct attr_check *VAR_3;
 int VAR_4 = VAR_0;

 if (!VAR_3)
  VAR_3 = FUNC_1("conflict-marker-size", ((void*)0));
 FUNC_2(VAR_1, VAR_2, VAR_3);
 if (VAR_3->items[0].value) {
  VAR_4 = FUNC_0(VAR_3->items[0].value);
  if (VAR_4 <= 0)
   VAR_4 = VAR_0;
 }
 return VAR_4;
}
