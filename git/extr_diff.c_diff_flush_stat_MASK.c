
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct diffstat_t {int dummy; } ;
struct diff_options {int dummy; } ;
struct diff_filepair {TYPE_1__* two; TYPE_1__* one; } ;
struct TYPE_2__ {int mode; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct diff_filepair*) ;
 int FUNC_3 (struct diff_filepair*,struct diff_options*,struct diffstat_t*) ;

__attribute__((used)) static void FUNC_4(struct diff_filepair *VAR_0, struct diff_options *VAR_1,
       struct diffstat_t *VAR_2)
{
 if (FUNC_2(VAR_0))
  return;

 if ((FUNC_0(VAR_0->one) && FUNC_1(VAR_0->one->mode)) ||
     (FUNC_0(VAR_0->two) && FUNC_1(VAR_0->two->mode)))
  return;

 FUNC_3(VAR_0, VAR_1, VAR_2);
}
