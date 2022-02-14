
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* punctuations; } ;
typedef TYPE_2__ script_t ;
struct TYPE_4__ {char* p; int n; } ;



char *FUNC_0(script_t *VAR_0, int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_0->punctuations[VAR_2].p; VAR_2++)
 {
  if (VAR_0->punctuations[VAR_2].n == VAR_1) return VAR_0->punctuations[VAR_2].p;
 }
 return "unknown punctuation";
}
