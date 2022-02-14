
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct TYPE_2__ {size_t sl_cur; int * sl_str; } ;


 int VAR_0 ;
 int FUNC_0 (int,char const*,char*,int ) ;
 int FUNC_1 (int ,char*,int ) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void
FUNC_2(int VAR_2, const char *VAR_3)
{
 u_int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1->sl_cur; VAR_4++)
  if (FUNC_0(VAR_2, VAR_3, "%s", VAR_1->sl_str[VAR_4]) == -1)
   FUNC_1(VAR_0, "sending message '%s'", VAR_1->sl_str[VAR_4]);
}
