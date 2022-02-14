
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 char* VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char const*,int ) ;
 int FUNC_2 (int ,char const*,int ) ;

__attribute__((used)) static void
FUNC_3(const char *VAR_5, va_list VAR_6)
{
 if (VAR_2 && !VAR_1) {
  FUNC_0(VAR_4,"%s: ",VAR_3);
  FUNC_1(VAR_4, VAR_5, VAR_6);
  FUNC_0(VAR_4, "\n");
 } else {
  FUNC_2(VAR_0, VAR_5, VAR_6);
 }
}
