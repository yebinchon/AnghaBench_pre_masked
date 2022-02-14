
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bundle {size_t phase; } ;


 size_t VAR_0 ;
 char const** VAR_1 ;

const char *
FUNC_0(struct bundle *VAR_2)
{
  return VAR_2->phase <= VAR_0 ?
    VAR_1[VAR_2->phase] : "unknown";
}
