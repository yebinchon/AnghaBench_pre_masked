
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct diff_options {scalar_t__ color_moved; TYPE_2__* emitted_symbols; } ;
struct TYPE_4__ {TYPE_1__* buf; } ;
struct TYPE_3__ {char* line; int flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const) ;

__attribute__((used)) static int FUNC_1(struct diff_options *VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6, VAR_7 = 0;
 if (VAR_3->color_moved == VAR_1)
  return VAR_5;
 for (VAR_6 = 1; VAR_6 < VAR_5 + 1; VAR_6++) {
  const char *VAR_8 = VAR_3->emitted_symbols->buf[VAR_4 - VAR_6].line;
  for (; *VAR_8; VAR_8++) {
   if (!FUNC_0(*VAR_8))
    continue;
   VAR_7++;
   if (VAR_7 >= VAR_0)
    return 1;
  }
 }
 for (VAR_6 = 1; VAR_6 < VAR_5 + 1; VAR_6++)
  VAR_3->emitted_symbols->buf[VAR_4 - VAR_6].flags &= ~VAR_2;
 return 0;
}
