
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nth_line_cb {long lines; int* line_ends; TYPE_1__* spec; } ;
struct TYPE_2__ {scalar_t__ data; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static const char *FUNC_1(void *VAR_0, long VAR_1)
{
 struct nth_line_cb *VAR_2 = VAR_0;
 FUNC_0(VAR_2 && VAR_1 <= VAR_2->lines);
 FUNC_0(VAR_2->spec && VAR_2->spec->data);

 if (VAR_1 == 0)
  return (char *)VAR_2->spec->data;
 else
  return (char *)VAR_2->spec->data + VAR_2->line_ends[VAR_1] + 1;
}
