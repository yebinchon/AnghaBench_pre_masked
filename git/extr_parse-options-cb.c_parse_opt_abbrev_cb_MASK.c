
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct option {scalar_t__ value; int long_name; } ;
struct TYPE_2__ {int hexsz; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char const*,char**,int) ;
 TYPE_1__* VAR_2 ;

int FUNC_3(const struct option *VAR_3, const char *VAR_4, int VAR_5)
{
 int VAR_6;

 if (!VAR_4) {
  VAR_6 = VAR_5 ? 0 : VAR_0;
 } else {
  if (!*VAR_4)
   return FUNC_1(FUNC_0("option `%s' expects a numerical value"),
         VAR_3->long_name);
  VAR_6 = FUNC_2(VAR_4, (char **)&VAR_4, 10);
  if (*VAR_4)
   return FUNC_1(FUNC_0("option `%s' expects a numerical value"),
         VAR_3->long_name);
  if (VAR_6 && VAR_6 < VAR_1)
   VAR_6 = VAR_1;
  else if (VAR_6 > VAR_2->hexsz)
   VAR_6 = VAR_2->hexsz;
 }
 *(int *)(VAR_3->value) = VAR_6;
 return 0;
}
