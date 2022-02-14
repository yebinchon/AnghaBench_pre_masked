
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int va_list ;
struct TYPE_2__ {char* rt_name; } ;


 int FUNC_0 (char*,...) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char const*,int ) ;

__attribute__((used)) static void
FUNC_2(const char *VAR_3, const char *VAR_4, va_list VAR_5)
{

 FUNC_0("%s %d", VAR_3, VAR_2);
 if (VAR_0->rt_name)
  FUNC_0(" - %s", VAR_0->rt_name);
 if (VAR_4) {
  FUNC_0(" # ");
  FUNC_1(VAR_4, VAR_5);
 }
 FUNC_0("\n");
 VAR_1 = 1;
}
