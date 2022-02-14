
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ s_cond; int s_file; scalar_t__ s_loading; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 TYPE_1__* VAR_6 ;

int
FUNC_2(void)
{
 if (VAR_5 <= 0) {
  FUNC_1("\"Source\" stack over-pop.\n");
  VAR_4 = 0;
  return (1);
 }
 (void)FUNC_0(VAR_2);
 if (VAR_1 != VAR_0)
  FUNC_1("Unmatched \"if\"\n");
 VAR_5--;
 VAR_1 = VAR_6[VAR_5].s_cond;
 VAR_3 = VAR_6[VAR_5].s_loading;
 VAR_2 = VAR_6[VAR_5].s_file;
 if (VAR_5 == 0)
  VAR_4 = VAR_3;
 return (0);
}
