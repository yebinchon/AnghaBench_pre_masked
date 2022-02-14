
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ str_longlen; scalar_t__ str_shortlen; scalar_t__ str_numstr; } ;
typedef TYPE_1__ STRFILE ;



__attribute__((used)) static void
FUNC_0(STRFILE *VAR_0, STRFILE *VAR_1)
{
 VAR_0->str_numstr += VAR_1->str_numstr;
 if (VAR_0->str_longlen < VAR_1->str_longlen)
  VAR_0->str_longlen = VAR_1->str_longlen;
 if (VAR_0->str_shortlen > VAR_1->str_shortlen)
  VAR_0->str_shortlen = VAR_1->str_shortlen;
}
