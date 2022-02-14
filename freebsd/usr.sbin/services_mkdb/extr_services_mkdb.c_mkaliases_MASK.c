
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t sl_cur; char** sl_str; } ;
typedef TYPE_1__ StringList ;


 size_t FUNC_0 (char*,char*,size_t) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static const char *
FUNC_2(StringList *VAR_0, char *VAR_1, size_t VAR_2)
{
 size_t VAR_3, VAR_4, VAR_5;

 VAR_1[0] = 0;
 for (VAR_4 = 1, VAR_5 = 0; VAR_4 < VAR_0->sl_cur; VAR_4++) {
  VAR_3 = FUNC_0(VAR_1 + VAR_5, VAR_0->sl_str[VAR_4], VAR_2);
  if (VAR_3 >= VAR_2)
   goto out;
  VAR_5 += VAR_3;
  VAR_2 -= VAR_3;
  VAR_3 = FUNC_0(VAR_1 + VAR_5, " ", VAR_2);
  if (VAR_3 >= VAR_2)
   goto out;
  VAR_5 += VAR_3;
  VAR_2 -= VAR_3;
 }
 return VAR_1;
out:
 FUNC_1("aliases for `%s' truncated", VAR_0->sl_str[0]);
 return VAR_1;
}
