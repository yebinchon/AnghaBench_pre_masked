
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sh_cmt_channel {TYPE_1__* cmt; } ;
struct TYPE_2__ {int has_clockevent; int has_clocksource; } ;


 int FUNC_0 (struct sh_cmt_channel*,char const*) ;
 int FUNC_1 (struct sh_cmt_channel*,char const*) ;

__attribute__((used)) static int FUNC_2(struct sh_cmt_channel *VAR_0, const char *VAR_1,
      bool VAR_2, bool VAR_3)
{
 int VAR_4;

 if (VAR_2) {
  VAR_0->cmt->has_clockevent = 1;
  VAR_4 = FUNC_0(VAR_0, VAR_1);
  if (VAR_4 < 0)
   return VAR_4;
 }

 if (VAR_3) {
  VAR_0->cmt->has_clocksource = 1;
  FUNC_1(VAR_0, VAR_1);
 }

 return 0;
}
