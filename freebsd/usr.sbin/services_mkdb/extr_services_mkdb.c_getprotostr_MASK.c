
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t sl_cur; char const** sl_str; } ;
typedef TYPE_1__ StringList ;


 int FUNC_0 (int) ;

__attribute__((used)) static const char *
FUNC_1(StringList *VAR_0, size_t VAR_1)
{
 FUNC_0(VAR_1 < VAR_0->sl_cur);
 return VAR_0->sl_str[VAR_1];
}
