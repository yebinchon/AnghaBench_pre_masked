
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
struct bsdar {char* progname; } ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 char* FUNC_1 (int) ;
 int FUNC_2 (int ,char const*,int ) ;

__attribute__((used)) static void
FUNC_3(struct bsdar *VAR_1, int VAR_2, const char *VAR_3, va_list VAR_4)
{

 FUNC_0(VAR_0, "%s: fatal: ", VAR_1->progname);
 FUNC_2(VAR_0, VAR_3, VAR_4);
 if (VAR_2 != 0)
  FUNC_0(VAR_0, ": %s", FUNC_1(VAR_2));
 FUNC_0(VAR_0, "\n");
}
