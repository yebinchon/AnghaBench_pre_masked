
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ff_regs {int nr; struct ff_reg* array; } ;
struct ff_reg {scalar_t__ negate; int re; } ;
struct TYPE_3__ {scalar_t__ rm_so; int rm_eo; } ;
typedef TYPE_1__ regmatch_t ;


 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (int *,char const*,long,int,TYPE_1__*,int ) ;

__attribute__((used)) static long FUNC_3(const char *VAR_0, long VAR_1,
  char *VAR_2, long VAR_3, void *VAR_4)
{
 struct ff_regs *VAR_5 = VAR_4;
 regmatch_t VAR_6[2];
 int VAR_7;
 int VAR_8;


 if (VAR_1 > 0 && VAR_0[VAR_1-1] == '\n') {
  if (VAR_1 > 1 && VAR_0[VAR_1-2] == '\r')
   VAR_1 -= 2;
  else
   VAR_1--;
 }

 for (VAR_7 = 0; VAR_7 < VAR_5->nr; VAR_7++) {
  struct ff_reg *VAR_9 = VAR_5->array + VAR_7;
  if (!FUNC_2(&VAR_9->re, VAR_0, VAR_1, 2, VAR_6, 0)) {
   if (VAR_9->negate)
    return -1;
   break;
  }
 }
 if (VAR_5->nr <= VAR_7)
  return -1;
 VAR_7 = VAR_6[1].rm_so >= 0 ? 1 : 0;
 VAR_0 += VAR_6[VAR_7].rm_so;
 VAR_8 = VAR_6[VAR_7].rm_eo - VAR_6[VAR_7].rm_so;
 if (VAR_8 > VAR_3)
  VAR_8 = VAR_3;
 while (VAR_8 > 0 && (FUNC_0(VAR_0[VAR_8 - 1])))
  VAR_8--;
 FUNC_1(VAR_2, VAR_0, VAR_8);
 return VAR_8;
}
