
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct resource {scalar_t__ start; int end; } ;
struct device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* desc; } ;
struct TYPE_3__ {int * reglen; scalar_t__** regs; } ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct device*,scalar_t__,int ,char const*) ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static int FUNC_3(struct device *VAR_3,
 struct resource *VAR_4, const char *VAR_5, u8 VAR_6)
{
 int VAR_7;

 if (!VAR_4 || !VAR_4->start || !VAR_4->end)
  return -VAR_1;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_2.desc->regs[0]); VAR_7++) {
  if (!(VAR_6 & FUNC_1(VAR_7)))
   continue;
  if (!FUNC_2(VAR_3,
    VAR_4->start + VAR_2.desc->regs[0][VAR_7],
    VAR_2.desc->reglen[VAR_7], VAR_5))
   return -VAR_0;
 }
 return 0;
}
